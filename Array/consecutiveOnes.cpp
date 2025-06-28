#include<bits/stdc++.h>

using namespace std;

int consecutive(int arr[], int n){
    int count = 0;
    int MaxCount = 0;
    for(int i = 0; i < n; i++){
       if(arr[i] == 1){
        count++;
      MaxCount = max(MaxCount,count); 
       }else {
        count = 0;
       }
    }
    return MaxCount;
}

int main(){
    int arr1[] = {1,1,0,1,1,1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = consecutive(arr1,n);
    cout<< m <<endl;

    return 0;
}