#include<iostream>
using namespace std;

int largestNo(int arr[], int n ){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    return max;
}



int main (){
    int arr1[] = {5, 2, 9, 1, 5, 6};
    int large = largestNo(arr1, 6);
    cout << "Largest element in arr1: " << large << endl;
    return 0;
}