#include <bits/stdc++.h>
using namespace std;

vector<int> next_permutation(vector<int>arr){
    int n = arr.size();
    int pivot=-1;
    // finding the pivot or the breaking point from last of array;

    for(int i = n-2; i >= 0 ; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }

    // if break point didnt present in array like [5,4,3,2,1]

    if( pivot== -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }


    // 2. find rightmost element right side s pivot se just bada elemet to swap
    for(int i = n-1; i>=0;i--){
        if(arr[i]> arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }

    // 3. not put every thing in array and sort the right side of pivot in asscending order;

    reverse(arr.begin()+pivot+1,arr.end());
    return arr;
}

int main(){
    vector<int>arr1 = {2,1,5,4,3,0,0};
    vector<int>ans = next_permutation(arr1);
    for(int i=0; i< ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}