#include <iostream>
using namespace std;

int main(){
    cout<<(100==200)<<endl;//alsways use parentheses, 0 output
    
    
    int num1{};//int will be promoted to double
    double num2{};
    cout<<"enter 2 nos: ";
    cin>>num1>>num2;
    
    bool result{};//initialisation can be anything. if 0 or false=>0
    result=(num1==num2);//0 or 1
    cout<<"COMPARISON: "<<result<<endl;
    cout<<boolalpha;//true/false after boolalpha
    cout<<"COMPARISON: "<<result<<endl;
    cout<<noboolalpha;
    
    
    
   


    char num1{},num2{};
    cout<<"enter 2 chars: ";
    cin>>num1>>num2;
    
    bool result{false};//initialisation can be anything. if 0 or false  =>  0
    result=(num1==num2);//0 or 1
    cout<<"COMPARISON: "<<result<<endl;
    cout<<boolalpha;//true/false after boolalpha
    cout<<"COMPARISON: "<<result<<endl;
    cout<<noboolalpha;
    
    
    return 0;
}