
// here hash set used , first convert the array into hash set then again into array and print because hashset automatic have only unique value;

#include<bits/stdc++.h>
using namespace std;

// int duplicate(int arr[], int n){
//     set <int> set ;
//  for(int i =0; i < n; i++){
//     set.insert(arr[i]);
//  }

//  int k = set.size();
//  int j=0;
//  for (int x : set){
//     arr[j++] = x;
//  }
 
//  return k ;
// }


int duplicate (int arr[], int n ){
    int i = 0 ;
    for(int j = 0; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}
int main(){
    int arr1[] = {1,1,1,2,2,3,3,4,};
    int n = sizeof(arr1) / sizeof(arr1[0]);
  int k = duplicate(arr1, n);
  for (int i = 0 ; i < k; i++){
    cout<< arr1[i] <<endl;
  }
}