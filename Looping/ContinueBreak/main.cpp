#include <iostream>
using namespace std;
int main(){
//    for (auto i: {1,2,-1,3,-1,-99,7,8,10}){
//        if (i==-1)
//            continue;
//        else if (i==-99)
//            break;
//        cout<<i<<endl;
//    }
    char ans{};//not a control variable
    while (true){
        cout<<"do you want to loop?";
        cin>>ans;
        if (ans=='N' or ans=='n')
            break;
    }
    return 0;
}