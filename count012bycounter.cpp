#include <bits/stdc++.h>
using namespace std;

void sortedArray(vector<int>& arr, int n){
    int count1=0;
    int count2=0;
    int count3=0;
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else {
            count3++;
        }
    }
    int index=0;
    for(int i = 0; i < count1;i++){
        arr[index++] = 0;
    }
    for(int i = 0; i < count2;i++){
        arr[index++] = 1;
    }
    for(int i = 0; i < count3;i++){
        arr[index++] = 2;
    }

}


int main(){
   vector<int>arr1 ={0,0,1,2,0,1,2,0}; 
   int n = 8;
    sortedArray(arr1,n);
   for(int i =0;i<n;i++){
    cout<< arr1[i] << " ";
   }
}