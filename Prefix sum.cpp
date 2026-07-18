#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};

    int b[5];

    b[0] = a[0];

    for(int i = 1 ; i<5 ;i++){
        b[i] = a[i] + b[i-1];
    }

    for(auto i : b){
        cout<<i<<" ";
    }
    cout<<endl;

}   
