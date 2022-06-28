#include <iostream>
using namespace std;
int main(){
    enum direction{//creation a datatype direction
        left,right,up,down//datatype possibilities
    };
    
    direction title{down};//datatype and variable name with initialisation
    switch (title){
        case left: {
            cout<<"Going LEFT "<<endl;
            
            break;
        }
        case right: {
            cout<<"Going RIGHT "<<endl;            
            break;
        }
//        case up: {
//            cout<<"Going UP "<<endl;
//            break;
//        }
//        case down: {
//            cout<<"Going DOWN "<<endl;
//            break;
//        }
//        
        
    }
    return 0;
}