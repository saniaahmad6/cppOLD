#include <iostream>
using namespace std;
int main(){
    int k{},n{};
    cin>>n;
    for (int i{1};i<=n;i++){
            k=1;
            for (int j{1};j<=n;j++){
                if(i+j>n){
                    cout<<k<<" ";
                    k++;
                }
                else{
                    cout<<" "<<" ";
                }
            }
            k--;//cuz it was increased 
            k--;
            for (int j{n-1};j>=1;j--){
                if (i+j>=n+1){
                    cout<<k<<" ";
                    k--;
                }
                else{
                    cout<<" "<<" ";
                }
            }
            
            
            
            
            
            cout<<endl;
//        else{
//            
//        }
    }
    
    
    cout<<endl;
    return 0;
}