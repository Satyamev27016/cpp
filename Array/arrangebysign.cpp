#include <bits/stdc++.h>
using namespace std;

  vector<int> arrange(vector<int>arr){
    int n = arr.size();

    vector<int>ans(n);
    int posIndx =0;
    int negIndx =1;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            ans[posIndx] = arr[i];
             posIndx += 2;
        }else{
            ans[negIndx] = arr[i];
             negIndx += 2;
        }
    }
    return ans;
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