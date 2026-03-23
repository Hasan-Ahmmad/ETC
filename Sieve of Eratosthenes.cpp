#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin>>n;
    vector<bool> Prime(n+1,1);

    for(int i=2; i*i<n; i++){

        if(Prime[i]==1){

            for(int j=i*i; j<=n; j+=i){
                Prime[j]=0;
            }
        }
    }

    int count=0;
    for(int i=2; i<=n; i++){
        if(Prime[i]==1){
            count++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Number of prime: "<<count<<endl;

}   
