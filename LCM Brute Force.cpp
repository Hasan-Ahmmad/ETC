#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b){

    int ans = max(a,b);
    
    while(true){

        if(ans%a == 0 && ans%b ==0){
            return ans;
        }
        else ans++;
    }
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<"LCM of a and b is: "<<LCM(a,b)<<endl;

}   
