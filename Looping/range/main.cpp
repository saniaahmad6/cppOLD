#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
//iterate through vectors arrays strings using range based for loop
int main(){
//    int num []{10,20,30};
//    for (int i:num){
//        cout<<i<<endl;
//    }
    
    
//    
//    vector <double> temps {10,20,30,40};
//    double sum{};
//    double avg{};
//    for (auto i:temps){
//        sum+=i;
//    }
//    avg=sum/temps.size();
//    cout<<fixed<<setprecision(2); //set default precision if required or not
//    cout<<sum<<endl<<avg<<endl;

//    int size{};
//    
//    for(auto i: {1,2,3,4,5}){
//        size++;
//    }
//    cout<<size<<endl;

    for (auto i: "SANIA is a fab girl")
        if (i==' '){
            cout<<'*';
        }
        else{
            cout<<i;
        }
    cout<<endl;
    return 0;
}