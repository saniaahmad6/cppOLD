#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> list{};
    char ans{};
    do{//MENU
        cout<<"\n==================================\n"<<endl;
        cout<<"P-Print numbers"<<endl;
        cout<<"A-Add numbers"<<endl;
        cout<<"M-Mean of numbers"<<endl;
        cout<<"S-Smallest of numbers"<<endl;
        cout<<"L-Largest of numbers"<<endl;
        cout<<"Q-Quit"<<endl;   
        cout<<"\n==================================\n"<<endl;
        cout<<"Enter choice: ";
        cin>>ans;//choices
        if (ans=='p' || ans=='P'){
            if (list.size()==0)
                cout<<"Empty List\n"<<endl;
            else{
                cout<<"[ ";
                for (auto i:list){
                    cout<<i<<" ";
                
                }
                cout<<"]\n"<<endl;
            }
        }
        else if (ans=='a' || ans=='A'){
            cout<<"Enter item: ";
            int x{};
            cin>>x;
            list.push_back(x);
            cout<<x<<" added."<<endl;
        } 
        else if (ans=='M' || ans=='m'){
            if (list.size()==0)
                cout<<"Empty List\n"<<endl;
            else{
                int sum{};
                for (auto i:list){
                    sum+=i;
                }
                cout<<"Average of Elements: "<<((static_cast<double>(sum))/list.size())<<endl;
            }
        }
         else if (ans=='S' || ans=='s'){
            if (list.size()==0)
                cout<<"Empty List\n"<<endl;
            else{
                int min{list[0]};
                for (int i{1};i<list.size();i++){
                    if (list[i]<min){
                        min=list[i];
                    }
                }
                cout<<min<<" is smallest number"<<endl;
            }
         }
         else if (ans=='L' || ans=='l'){
            if (list.size()==0)
                cout<<"Empty List\n"<<endl;
            else{
                int max{list[0]};
                for (int i{1};i<list.size();i++){//can do with auto range too
                    if (list[i]>max){
                        max=list[i];
                    }
                }
                cout<<max<<" is largest number"<<endl;
            }
         }
        else if (ans=='Q' || ans=='q'){
            cout<<"EXITING..\n"<<endl;
        }
        else{
            cout<<"INCORRECT OPTION\n"<<endl;
        }
    }while(!(ans=='q' || ans=='Q'));
    return 0;
}