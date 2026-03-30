#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    // TypeCast to int double it and print
    int num1;
    int x = stoi(num);
    cout<<x*2<<'\n';
    

    return 0;
}
