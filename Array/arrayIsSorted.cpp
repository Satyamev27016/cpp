#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

bool IsarraySorted(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i])
            return false;
        }
    } 
    return true;
}

int main (){
   int  arr1[] = {2,7,5,7,9};
   bool ans = IsarraySorted(arr1 , 5);
   if(ans==true) cout<< "true" << endl;
   else cout<< "false"<< endl;
   return 0;

}