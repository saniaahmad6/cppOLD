#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;
    cin>>a;
    cin>>b;
    char x=getchar();
    cin>>c;
    cin>>d;
    cin>>e;
   
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3);
    cout<<d<<endl;
    cout<<fixed<<setprecision(9);
    cout<<e<<endl;
    
    return 0;
    
}