#include <iostream>
using namespace std;
int main(){
    // for (int i{1};i<=10;i+=1)
    //     cout<<i<<endl;
//    int scores [] {10,20,30};
//    for (int i{}; i<=2; i++){
//        cout<<scores[i]<<endl;
//    }
   for (int i{1}, j{5}; j<=1,i<=5; i++,j++)//rightmost condition is seen 
       cout<<i<<" * "<<j<<" : "<<i*j<<endl;
   
//    for (int i{10}; i<=100; i+=10){
//        if (i%15==0)
//            cout<<i<<endl;
//    }  
   for (int i{1},j{5}; i<=5; i++,j++)
        cout<<i<<" + "<<j<<" : "<<i+j<<endl; 
            
   for (int i{1};i<=100;i+=1){
       cout<<i<<((i%10==0)? "\n":" ");
    //    if (i%10==0)
    //        cout<<endl;
    //    else
    //        cout<<" ";
    //    cout<<((i%10==0)? "\n":" ");
   }
         
            
            
    
    return 0;
}