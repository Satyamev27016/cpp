#include<bits/stdc++.h>
using namespace std;


//rotation from left
int rotateLeft(int arr[], int n ){
    int first = arr[0];
    for(int j = 0; j < n-1 ; j++){
       arr[j] = arr[j+1];
    }
    arr[n-1] = first;
   return n;
}


int main(){
    int arr1[]={1,2,3,4,5};
    int n = 5;
    int k = rotateLeft(arr1, n );
    cout <<"rotaated array in right "<< endl;
    for(int i=0; i < k ; i++){
        cout << arr1[i] << endl;
    }
}