#include<bits/stdc++.h>
using namespace std;

int   longestSequence(vector<int>arr){
    int n = arr.size();
    unordered_set<int> newSet(arr.begin(), arr.end());
    int longest = 1;

    for(int num : newSet){
        if(newSet.find(num-1) == newSet.end()){
            int currtnum = num;
            int count = 1;

            while(newSet.find(currtnum+1) != newSet.end()){
                currtnum++;
                count++;
            }
            longest = max(longest,count);
        }
    }
    return longest;

}

int main(){
     vector<int>arr1 ={100, 4, 200, 1, 3, 2};
     cout<<longestSequence(arr1);
}