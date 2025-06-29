#include <bits/stdc++.h>
using namespace std;

int lowerbound(int arr[],int n, int target){
 int low =0;
 int high = n-1;
 int ans = n;

 while(high >=low){
    int mid = (low+high)/2;
    if(arr[mid] >= target){
        ans = mid;
        high = mid-1;
    }else{
        low = mid+1;
    }
 }
 return ans;

}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int n = 6;
    int target=2;
    int ans = lowerbound(arr1,n,target);
    cout<<ans<<endl;
    return 0;
}