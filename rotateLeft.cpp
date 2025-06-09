#include<bits/stdc++.h>
using namespace std;


// rotation from left
// int rotateLeft(int arr[], int n ){
//     int first = arr[0];
//     for(int j = 0; j < n-1 ; j++){
//        arr[j] = arr[j+1];
//     }
//     arr[n-1] = first;
//    return n;
// }

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
    for(int i=0; i < k ; i++){
        cout << arr1[i] << endl;
    }
}