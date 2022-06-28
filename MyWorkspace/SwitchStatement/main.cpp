#include <iostream>
using namespace std;
int main(){
    char grade{};
    cout<<"\nEnter grade you wish : ";
    cin>>grade;
    cout<<"\n================================\n "<<endl;
    switch (grade){
        case 'a':
        case 'A':{
            cout<<"marks 91-100"<<endl;
            break;
        }
        case 'b':
        case 'B':{
            cout<<"marks 81-90"<<endl;
            break;
        }
        case 'c':
        case 'C':{
            cout<<"marks 71-80"<<endl;
            break;
        }
        case 'd':
        case 'D':{
            cout<<"marks 61-70"<<endl;
            break;
        }
        case 'e':
        case 'E':
            cout<<"marks 51-60"<<endl;
            break;
        
        case 'f':
        case 'F':{
            cout<<"You really need an F? (Y or N) : ";
            char ans{};
            cin>>ans;
            if (ans=='Y' || ans=='y'){
                cout<<"marks below 50"<<endl;
            }
            else if (ans=='N' || ans=='n'){
                cout<<"good"<<endl;
            }
            else{
                cout<<"INAPPROPRIATE SELECTION"<<endl;
            }
            
            break;
        }
        default : {
            cout<<"INAPPROPRIATE SELECTION"<<endl;
        }
    }
    return 0;
}