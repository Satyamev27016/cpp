#include<bits/stdc++.h>
using namespace std;

int missingElement(int arr[], int maxN){
    int Sum1 = ( maxN * (maxN + 1) ) / 2;

    int sum2=0;
    for(int i = 0; i < maxN - 1 ; i++){
        sum2 += arr[i];
    }
    int missingNum = Sum1 - sum2;
    return missingNum ;
}

int main (){
    int arr1[] = {1,2,3,5,6,7};
    int maxN = 7;

   int ans = missingElement(arr1, maxN);
   cout<< ans << endl;
   return 0;
}
