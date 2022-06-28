#include <iostream>
#include <cctype>//character based functions
#include <cstring>//C style functions

using namespace std;
//null terminated strings
int main(){
    char name []{"SANIA"};//size 6 -(S A N I A \0)
    name[5]='y';//at index 5 where \0 was.. but problem:not null terminated but no error/warning 
    for (auto i:name){
        cout<<i;//SANIAy
    }
    cout<<endl;
    
    
    
    //UPDATE
    name[4]='C';
    for (auto i:name){
        cout<<i;//SANICy
    }
    cout<<endl;
    
    
    
    
    //array of 8 garbage values
    char my_name [8] ;
    for (auto i:my_name){
        cout<<i;
    }//8 garbage values displayed
    cout<<endl;
    
    
   

 //initialised C style string
    char variable1 [8] {};//all chars are white spaces
    cout<<variable1<<endl;//how does it display? iterate until a null character
    
        
    
    char variable2 [20] {};//white spaces
    cout<<"Enter var2 name: ";
    cin>>variable2;//sania ahmad, cin sees white space and variable2="sania"
    cout<<variable2<<endl;//how does it display? iterate until a null character
    cout<<strlen(variable2)<<endl;

    
    
    
    
    char variable3[20] {"sania"};//pre-written
    cout<<"Enter var3 name: ";
    cin>>variable3;//over wrtites
    cout<<variable3<<endl;//how does it display? iterate until a null character
    cout<<strlen(variable3)<<endl;
    
    
    
//assignement impossible
//    char variable4 [20] {"hello "};
//    variable4="1234567891234567890";
    
    char variable5 [20] {};//white spaces
    cout<<"Enter var5 name: ";
    cin.getline(variable5,40);//stop at limit or enter press
    cout<<variable5<<endl;//how does it display? iterate until a null character
    cout<<strlen(variable5)<<endl;
    
    
    
    
    
    
    
    return 0;
}