#include<bits/stdc++.h>
using namespace std;


int search(int arr[], int n, int m){
   for(int i=0; i <n;i++){
    if(arr[i]==m){
          return i;
    }
   }
   return -1;
}

int main(){
    int arr1[] ={2,4,3,4,6,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m=6;
    int ans = search(arr1,n,m);
    cout<< ans<<endl;
}