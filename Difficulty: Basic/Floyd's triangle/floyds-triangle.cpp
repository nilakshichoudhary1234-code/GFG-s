#include <bits/stdc++.h>
using namespace std;

void floydTriangle(int n){
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val<<" ";
            val++;
        }
        cout<< endl;
    }
}

int main() {
    int n;
    cin >> n;
    floydTriangle(n);
    return 0;
}

