#include <iostream>
using namespace std;
int main(){

   bool ans{false};  //    input restriction using boolean flag
   
   while (!ans){
       cout<<"enter Number between 1 and 5: ";
       int num{};
       cin>>num;
       if (num>=5 || num<=1)
           cout<<"Try again"<<endl;
       else{
           ans=true;
           cout<<"Thanks!"<<endl;
           
       }
   
   }

    // cout<<"enter num: ";
    // int num{}, i{1};
    // cin>>num;
    
    // while (i<=num){
    //     cout<<i<<endl;
    //     i++;
    // }
    
    
    
    
    
    
    
    cout<<endl;
    return 0;
}