#include<bits/stdc++.h>
using namespace std;

int rotateRight(int arr[], int n){
    int last = arr[n-1];
    for(int i = n-1 ; i > 0 ; i++){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    return n;
}

int main(){
    int arr1[]={1,2,3,4,5};
    int n = 5;
    int k = rotateRight(arr1, n );
    cout <<"rotaated array in right "<< endl;
   
}