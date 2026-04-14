#include <iostream>
using namespace std;

int main() {
    int  a, b ;
    cin>>a>>b;
    int result=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            result=i;
            break;
        }
    }
    
    cout<<result<<endl;

    return 0;
}