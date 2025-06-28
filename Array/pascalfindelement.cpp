#include <bits/stdc++.h>
using namespace std;

int NCR(int n, int r){
long long int res=1;
for(int i =0; i<r; i++){
    res = res * (n-i);
    res = res / (i+1);
}
return res;
}

int pascalElement(int r, int c){
    int element = NCR(r-1, c-1);
    return element;
}


int main(){
    int r = 5;
    int c = 3;
    int element = pascalElement(r, c);
    cout<<element<<endl;
    return 0;
}