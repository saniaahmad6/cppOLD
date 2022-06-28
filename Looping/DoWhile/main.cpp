#include <iostream>
using namespace std;
//
int main(){
//    int x{10}; //x outside
//    while (x>0){
//        int j=100;//j inside loop, initialised with every iteration
//        cout<<x<< " "<<j<<endl;
//        x--;
//    }
//    
//    cout<<"================"<<endl;
//    
//    x=10;//x outside
//    do{
//        int j=100;//j inside loop, initialised with every iteration
//        cout<<x<< " "<<j<<endl;
//        x--;
//        
//    }while (x>0);
    char ans='y';
    do{
        double l{}, b{};
        cout<<"enter length and breadth: ";
        cin>>l>>b;
        cout<<"area is "<<l*b<<endl;
        cout<<"continue? ";
        cin>>ans;
        
    }
    while (ans=='y');
    return 0;
}