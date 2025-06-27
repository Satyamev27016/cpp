#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>arr){
    int n = arr.size();
    int elmt1 = -1;
    int elmt2 = -1;
    int cnt1 = 0;
    int cnt2 = 0;
    
    for(int i =0; i<n;i++){
        if(elmt1==arr[i]){
            cnt1++;
        }
        else if(elmt2==arr[i]){
            cnt2++;
        }
        else if(cnt1 == 0 && arr[i]!=elmt2){
            elmt1 = arr[i];
            cnt1 =1;
        }
        else if(cnt2 == 0 && arr[i]!=elmt1){
            elmt2 = arr[i];
            cnt2=1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    // verify 

    vector<int>result;
    int freq1 =0;
    int freq2 = 0;
    for(int i=0; i<n;i++){
        if(arr[i]==elmt1){
            freq1++;
        }
        else if(arr[i]==elmt2){
            freq2++;
        }
    }
    if(freq1 > n/3){
        result.push_back(elmt1);
    }
    if(freq2 > n/3){
        result.push_back(elmt2);
    }
    return result ;
}

int main(){
    vector<int>arr1 = {1,2,3,1,1,4,1,3,1,3,2,4,3,3,4,4,3};
    vector<int> ans = majorityElement(arr1);
    for(int i = 0 ; i< ans.size();i++){
        cout<<ans[i]<< " ";
    }
}