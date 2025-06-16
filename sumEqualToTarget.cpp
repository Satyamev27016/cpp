#include<bits/stdc++.h>
using namespace std;

 pair<int, int> sumEqual(int arr[], int n, int target){

    for(int i =0; i < n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int n = 6;
    int target = 5;
    pair<int,int> ans = sumEqual( arr1,n,target);

    if(ans.first != -1){
        cout<<ans.first<<""<<ans.second<<endl;
        cout<<arr1[ans.first]<<" + "<<arr1[ans.second]<<" = "<<target<<endl; 
    }else{
        cout<<" not found "<<endl;
    }
    return 0;
}