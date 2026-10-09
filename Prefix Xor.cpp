
// CSES prob-> https://cses.fi/problemset/task/1650/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin>>n>>q;

    vector<int> v(n+1);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<int> pre(n+1);
    pre[1]=v[0];

    for(int i=2; i<=n; i++){
        pre[i] = pre[i-1]^v[i-1];
    }

    while(q--){

        int a, b;
        cin>>a>>b;

        int ans = pre[a-1]^pre[b];

        cout<< ans <<endl;
    }

}   
