#include <iostream>
using namespace std;
int main(){
    int num{};
    const int upper{20};
    const int lower{10};
    
    
//    cout<<"Enter no: ";
//    cin>>num;
//    bool x{};//declare boolean variable
//    x=num>lower && num<upper; //0 or 1 within bounds
//    cout<<boolalpha;
//    cout<<"within bounds: "<<x<<endl;//true or false
//    
//    
//    
//    const int lower{10};
//    cout<<"Enter no: ";
//    cin>>num;
//    bool x{};//declare boolean variable
//    x=num<lower || num>upper; //0 or 1 outside bounds
//    cout<<boolalpha;
//    cout<<"outside bounds: "<<x<<endl;//true or false
//    
    
    
//    cout<<"Enter no: ";
//    cin>>num;
//    bool x{};//declare boolean variable
//    x=num==lower || num==upper; //0 or 1 on bounds
//    cout<<boolalpha;
//    cout<<"on bounds: "<<x<<endl;//true or false
    
    
    const double temp{25};
    const double windspeed{25};
    double t{};
    double w{};
    cout<<"Enter temp and windspeed: ";
    cin>>t>>w;
    bool x{};//declare boolean variable
    x=t<temp || w>windspeed; //0 or 1
    cout<<boolalpha;
    cout<<"WEAR COAT? "<<x<<endl;//true or false
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}