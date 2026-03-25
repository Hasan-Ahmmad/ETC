#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Binary_Expo(ll base, ll power, ll mod){

    ll result=1;

    while(power){

        if(power%2==1){
            result=(result*base)%mod;
            power--;
        }
        else{
            base=(base*base)%mod;
            power/=2;
        }
    }

    return result;
}

int main(){

    ll base, power; 
    cin>>base>>power;

    Binary_Expo(base,power,1e9); 

}   
