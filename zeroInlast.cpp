#include<bits/stdc++.h>
using namespace std;

vector<int> zeroInlast(vector<int> arr, int n){
    
    
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
           j=i; 
           break;
        }
        
    }

    if(j == -1) return arr;
   
    // moving non negative forward

    for(int i = j+1; i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;

}

int main(){
    vector<int> arr1 ={1,0,2,0,3,0,4,5,6};
    int n = 9;
    vector<int>ans = zeroInlast(arr1,n);
    for(auto &it : ans){
        cout<< it << "";
    }
    cout<< '\n';
    return 0;
}

