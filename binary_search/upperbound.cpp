#include <bits/stdc++.h>
using namespace std;

int upperbound(int arr[], int n, int target){
    int low=0;
    int high=n-1;
    int ans;
    while(high>=low){
        int mid = (high + low) / 2;
        if(arr[mid] > target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
}
int main(){
    int arr1[] = {1,2,2,3};
    int n=4;
    int t = 2;
    int ans = upperbound(arr1, n, t);
    cout<<ans<<endl;
    return 0;
}