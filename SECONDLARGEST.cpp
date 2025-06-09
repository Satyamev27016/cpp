#include<iostream>
#include <algorithm>
using namespace std;

int secondLargest(int arr[], int n ){
    sort(arr, arr + n); // Sort the array in ascending order
    int largest = arr[n-2];

    return largest ;
}

int secondSmallest (int arr[], int n ){
    sort(arr, arr + n); // Sort the array in ascending order);
    int smallest = arr[1];
    return smallest;
}

int main (){
    int arr1[] = {5, 2, 9, 1, 1, 6};
    cout << "Second largest element in arr1: " << secondLargest(arr1, 6) << endl;
    cout << "Second smallest element in arr1: " << secondSmallest(arr1, 6) << endl;
    return 0;
}