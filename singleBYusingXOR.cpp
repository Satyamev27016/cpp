#include<bits/stdc++.h>
using namespace std;

int XOR(int arr[], int n){
    int res = 0;
    for(int i =0; i < n; i++){
        res = res^arr[i];
    }

    return res;
}

int main(){
    int arr1[] ={1,2,2};
    int n = 3;
    int Xor = XOR(arr1, n);
    
    cout<< Xor<<endl;
    return 0;
}