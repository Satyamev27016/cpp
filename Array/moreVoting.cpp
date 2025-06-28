#include <bits/stdc++.h>
using namespace std;


int moore(int arr[], int n){
    int count =0;
    int currElement =0;

    for(int i =0; i < n ;i++){
        if(count==0){
           currElement = arr[i];
           count++;
        }
        else if(currElement==arr[i]){
           count++;
        }
        else{
            count--;
        }
    }
    return currElement;
}


int main(){
    int arr1[]={1,2,1,2,2,2,1,1};
    int n = 8;
    int ans = moore(arr1,n);
    cout<<ans<<endl;
    return 0;
}