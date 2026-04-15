#include <iostream>
using namespace std;


void bitwiseOperations(int a, int b, int c) {
    int d=a^a;
    int e = c ^ b;
    int f = a & b;
    int g = c | (a ^ a);
    e = ~ e;
    cout<<d<<" "<<e<<" "<<f<<" "<<g<<endl;
}

int main() {
    int a, b, c;
    if( cin >> a >> b >> c){
        bitwiseOperations(a,b,c);
        
    }
    return 0;
}