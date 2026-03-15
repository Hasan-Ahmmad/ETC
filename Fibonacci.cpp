// method 1
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n;

    int a = 0, b = 1;

    cout << a << " ";
    if(n > 1) cout << b << " ";
    for(int i=3; i<=n; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout<<endl;
}

//method 2 => using array
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int Fib[n];

    Fib[0] = 0;
    if(n > 1) Fib[1] = 1;
    for(int i=2; i<n; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }

    for(int i=0; i<n; i++){
        cout << Fib[i]<<" ";
    }
    cout<<endl;

}

//method 3 => recursion

#include<bits/stdc++.h>
using namespace std;

int Fib( int n ){

    if(n == 1) return 0;
    if(n == 2) return 1;
    return Fib(n - 1) + Fib(n - 2);
}

int main(){

    int n; cin >> n;

    for(int i=1; i<=n; i++){
        cout << Fib(i) << " ";
    }
    cout<<endl;
}
