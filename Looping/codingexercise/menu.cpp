#include <iostream>
using namespace std;
int main(){
    int done{1};
    while (done){
        cout<<"Enter number: ";
        int num;
        cin>>num;
        switch (num){
            
            case 1:
                cout<<"a"<<endl;
            default:
                cout<<"yes"<<endl;
                break;
            case 2:
                cout<<"b"<<endl;
            case 3:
                cout<<"c"<<endl;
            case 4:
                cout<<"d"<<endl;
            
        }
        cout<<"do u want to continue (continue-1 else-0): "<<endl;
        cin>>done;
    }
    //first check: case or default
    //run till break: jaha se match start hua : uske aage chalta jayega if no break
    return 0;
}