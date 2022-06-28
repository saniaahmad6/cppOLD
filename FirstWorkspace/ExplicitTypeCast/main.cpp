#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Three Integers:  ";
    
    int n1{},n2{},n3{};
    int tot{};
    double aver{0.0};
    
    cin>>n1>>n2>>n3;
    tot=n1+n2+n3;
    aver=static_cast<double>(tot)/3;
    cout<<static_cast<double>(tot)<<endl;
    cout<<"Sum:  "<<tot<<endl<<"Average:  "<<aver<<endl;
    return 0;
}