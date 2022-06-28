#include <iostream>
#include <string>

#include <vector>
using namespace std;
int main(){
    
//    vector <int> v1 (3,11);
//    for (auto i: v1){
//        cout<<i<<endl;
//    }
    //2 empty strings
    string s1{};
    string s2 ;
    string s0;//empty string, no garbage
    
    cout<<"enter s1: ";
    getline(cin,s1,',');
    cout<<"enter s2: ";
    getline(cin,s2);
    
    //{} or ()
    string s3 {s1,4};//start from index 4 to end
    string s4 (s2,4);
    //{} or (): if sart with 0 index =>exclusive else inclusive
    string s5{s1,0,3};//bounds check 0-4 indices
    string s6{s1,1,100};//index 1-3 inclusive
    
    //() imp
    string s7 (5,'v');//takes char
    string s8 {5,'v'};//*v
    
    string s9;//c++ string
    s9="sania";//cstyle->c++
    
    
    
    
    
    
    
    
    cout<< s0<<","<<s0.length()<<endl;
    cout<< s1<<" "<<s1.at(1)<<endl;
    for (int i:s1){
        cout<<i<<endl;
    }
    cout<< s2<<endl;
    cout<< s3<<endl;
    cout<< s4<<endl;
    cout<< s5<<endl;
    cout<< s6<<endl;
    cout<< s7<<endl;
    cout<< s8<<endl;
    cout<<s9<<endl;
    cout<<"Hello "+ s9<<endl;//+ with c and cpp L->R 
    cout<<"----------------------"<<endl;
    
    
    string name="sania";///cpp
    char full_name [100] {"sania"};//c
    
//    cout<<"Name : ";
//    getline(cin,name);
//
//    cout<<"Full name: ";
//    cin.getline(full_name,100);
    if (name==full_name){
        cout<<"EQUAL"<<endl;
    }
    
    return 0;
}