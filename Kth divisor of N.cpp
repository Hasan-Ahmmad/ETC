#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<int> v;

    for(int i=1; i*i<=n; i++){

        if(n%i == 0){
            v.push_back(i);
            if(i != n/i){
                v.push_back(n/i);
            }
        }
    }

    sort(v.begin(),v.end());
    if(v.size()<k){
        cout<<-1<<endl;
    }
    else cout<<v[k-1]<<endl;   

}
