#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    bool flag = true;
    while(n>1){

        if(n%2 == 0){
            n /= 2;
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}   
