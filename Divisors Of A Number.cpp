#include<bits/stdc++.h>
using namespace std;

void Divisors(int n){

    set<int> st;
    for(int i=1; i*i<=n; i++){

        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    cout<<st.size()<<endl;
    for(int i : st){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    int n; 
    cin>>n;

    Divisors(n);

}   
