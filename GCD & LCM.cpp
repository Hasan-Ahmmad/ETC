#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){

    while( b != 0){
        int temp = a;
        a=b;
        b=temp%b;
    }
    return a;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<"GCD is: "<<GCD(a,b)<<endl;
    
    cout<<"LCM is: "<<a*b/GCD(a,b)<<endl;

}   
