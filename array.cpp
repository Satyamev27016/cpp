#include<iostream>
#include <vector>
#include <algorithm> // for sort function
#include <math.h>
using namespace std;

int Sortarr(vector<int> & arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
int main() {
    vector<int> arr1 = {5, 2, 9, 1, 5, 6};
    vector<int> arr2 = {3, 7, 8, 2, 1, 4};
    cout << "largest element : "<<  Sortarr(arr1)<<endl;
    cout<< "largest element : "<< Sortarr(arr2)<<endl;

    return 0;
}