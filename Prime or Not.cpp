#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){

    if(n<2) return false;
    if(n==2 || n==3) return true;
    if(n%2==0) return false;
    
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }

    return true;
}


int main(){

    int n; cin>>n;
    
    if(Prime(n)) cout<<"Number is Prime"<<endl;
    else cout<<"Number is not a Prime"<<endl;

}   
