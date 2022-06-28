#include <iostream>

using namespace std;

int main(){
    char a {'A'};
    cout<<"Character: "<<a<<endl;
    
    int b {67};
    cout<<"Integer: "<<b<<endl;
    
    unsigned int c {0};
    cout<<"Integer: ";
    cin>>c;
    cout<<c<<endl;
    
    long long d {50000000000};//no ' accepted
    cout<<"long integer: "<<d<<endl;
    
    long double e {1.3e120};
    cout<<"Long Double: "<<e<<endl;
    
    bool f {""}; //anything!=0 returns 1 and no True False names accepted
    cout<<"Boolean: "<<f<<endl; //return 0 or 1
    
    return 0;
}