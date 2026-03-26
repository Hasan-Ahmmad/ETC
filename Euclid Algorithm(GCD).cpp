#include<bits/stdc++.h>
using namespace std;

int Euclid(int a, int b){

    if(b==0) return a;
    return Euclid(b, a%b);
}

int main(){

    int a,b; 
    cin>>a>>b;
    cout<<Euclid(a,b)<<endl;
}   
