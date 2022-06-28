#include <iostream>
using namespace std;

int main(){
    cout<<"\nEnter score between 0 and 100: ";
    int num{};
    char grade{};
    cin>>num;
    if (num>=0 && num<=100){
        if (num>=90){
            grade='A' ;
        }
        else if (num>=80){
            grade='B';
        }
        else if (num>=70){
            grade='C';
        }
        else if (num>=60){
            grade='D';
        }
            
        else if (num>=50){
            grade='E';
        }
        else{
            grade='F';
            
        }
        
        
        cout<<"Grade: "<<grade<<endl;
        if (grade=='F'){
            cout<<"FAIL"<<endl;
        }
        else{
            cout<<"PASS"<<endl;
        }
    }
    else{
        cout<<"You entered number out of range."<<endl;
    }
    
    return 0;
}