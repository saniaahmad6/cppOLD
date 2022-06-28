#include <iostream>
using namespace std;

int main(){
    char ans{};
//    do{
//        cout<<"\n====================================\n"<<endl;
//        cout<<"1.Do this"<<endl;
//        cout<<"2.Do that"<<endl;
//        cout<<"3.Do something else"<<endl;
//        cout<<"Q: Quit"<<endl<<endl;
//        cout<<"====================================\n"<<endl;
//        cout<<"Enter choice: ";
//        cin>>ans;
//        if (ans=='1')
//            cout<<"1.Doing this"<<endl;
//        else if (ans=='2')
//            cout<<"1.Doing that"<<endl;
//        else if(ans=='3')
//            cout<<"1.Doing something else"<<endl;
//        else if (!(ans=='Q' || ans=='q'))
//            cout<<"\nINCORRECT OPTION"<<endl;
//        
//    }
//    while (!(ans=='Q' || ans=='q'));//and logic by de morgan 
//    cout<<"\nEXITED"<<endl;
    
    
    
    do{
        cout<<"\n====================================\n"<<endl;
        cout<<"1.Do this"<<endl;
        cout<<"2.Do that"<<endl;
        cout<<"3.Do something else"<<endl;
        cout<<"Q: Quit"<<endl<<endl;
        cout<<"====================================\n"<<endl;
        cout<<"Enter choice: ";
        cin>>ans;
        switch (ans){
            case '1':
                cout<<"Doing this"<<endl;
                break;
            case '2':
                cout<<"Doing that"<<endl;
                break;
            case '3':
                cout<<"Doing something else"<<endl;
                break;
            case 'Q' :
            case 'q':
                cout<<"EXITING:..."<<endl;
                break;
        
        
            default :
                cout<<"INCORRECT OPTION"<<endl;
        }
        
    }
    while (!(ans=='Q' || ans=='q'));//and logic by de morgan 
    cout<<"\nEXITED"<<endl;
    return 0;
}