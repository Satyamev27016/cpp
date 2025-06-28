#include <bits/stdc++.h>
using namespace std;

  vector<int> arrange(vector<int>arr){
    int n = arr.size();



    vector<int>pos;
    vector<int>neg;
    for(int i=0; i<n;i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
   for(int i =0; i<n/2; i++){
      arr[2*i] = pos[i];
      arr[2*i+1] = neg[i];
   }
   return arr;
 }



 int main(){
    vector<int> arr1 ={1,2,-1,-3,5,-1,6};
    int n = arr1.size();
    vector<int> ans = arrange(arr1);

    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
 }