#include <iostream>
using namespace std;

int main(){
    const int lower {10};
    const int upper{100};
    const int target{10};
    int num{};//0
    cout<<"Enter no : ";
    cin>>num;
    
    if (num>=target)
        //int diff{num-target};//local scope declaration 1
        //cout<<num<<" is "<< diff<< " greater than or equal to "<<target<<endl;
        cout<<"hi"<<endl;
    else{
        int diff{target-num};//local scope
        cout<<num<<" is "<< diff<< " less than "<<target<<endl;
    }
//    if (num<=upper){
//        int diff{upper-num};//local scope declaration 2
//        cout<<num<<" is "<< diff<< " lower than "<<upper<<endl;
//        cout<<"num<=100"<<endl;
//    }
//    if (num>=lower &&num<=upper){
//        cout<<"within bounds"<<endl;
//    }
//    if (num==upper || num==lower){
//        cout<<"num==100 || num==10"<<endl;
//    }
    cout<<endl;
    return 0;
}
