#include <bits/stdc++.h>
using namespace std;

int maxSumArray(int arr[], int n){
    int sum=0;
    int maxSum = INT_MIN;

    for(int i =0; i<n;i++){
        sum = sum + arr[i];
        if(sum > maxSum){
            maxSum = sum;
        }

        if(sum<0){
            sum = 0;
        }
    }
    return maxSum;
}

int main(){
    int arr1[] = {1,2,-1,3,4,-3};
    int n = 6;
    int ans = maxSumArray(arr1,n);
    cout<<ans<<endl;
}