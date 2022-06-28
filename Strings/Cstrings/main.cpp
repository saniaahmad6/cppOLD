#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;


int main(){
    char var1 [20] {};
    char var2 [20] {};
    char var3 [200] {"HELLO "};
    cout<<"Enter var1: ";
    cin.getline(var1,100);
    cout<<"Enter var2: ";
    cin.getline(var2,100);
    cout<<"Enter var3: ";
    cin.getline(var3,100);//entire copy -overwrites
    cout<<var1<<" "<<var2<<" "<<var3<<endl;
    
    strcpy(var3,var1);//entire copy -overwrites
    strcat(var3," ");
    strcat(var3,var2);
    
    cout<<"Var3 original: "<<var3<<endl;
    for (size_t i{};i<strlen(var3);i++){ //i=index
        var3[i]=toupper(var3[i]);
    }
    cout<<"VAR3 capitalised: "<<var3<<endl;
    
    
    
    char var4 []{"sania ahmad"};
    cout<<"VAR4: "<<var4<<endl;
    cout<<(strcmp(var4,var3)==0)<<endl;//false==>0
    cout<<strcmp(var4,var3)<<endl;//1 as ascii: s comes before S
    
    
    
    

    return 0;
}