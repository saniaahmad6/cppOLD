#include <iostream>
using namespace std;
int main(){
    int n{},k{};
    cin>>n;
    for (int i{};i<n;i++){
        k=1;
        for(int j{};j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
        
    }
    cout<<"========================================"<<endl;
    for (int i{1};i<=n;i++){
        k=1;
        for(int j{};j<=(n-i);j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
        
    }
    cout<<"========================================"<<endl;
    for (int i{1};i<=n;i++){
        k=i;
        for(int j{1};j<=n;j++){
            if (i+j<=n)
                cout<<" "<<" ";
            else{
                cout<<k<<" ";
                k-=1;
                
            }
        }
        cout<<endl;
        
    }
        
    cout<<"========================================"<<endl;
    for (int i{1};i<=n;i++){
        k=n+1-i;
        for(int j{1};j<=n;j++){
            if (j>=i){
                cout<<k<<" ";
                k-=1;
            }
            else{
                cout<<" "<<" ";
                
                
            }
        }
        cout<<endl;
    }
    return 0;
}