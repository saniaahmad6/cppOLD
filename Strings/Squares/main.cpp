#include <iostream>
using namespace std;

int main(){
    int n{},k{},output{};
    cin>>n;
    for (int i{1};i<=(2*n-1);i++){
        if (i<=n){
            output=n;
            for (int j{1};j<=n;j++){
                cout<<output<<" ";
                if (j<i){
                    output--;
                }
            }
            if (i==n){
                output=2;
            } 
            for (int j{n-1};j>=1;j--){
                cout<<output<<" ";
                if (j>=2 && j<=i && i!=1){
                    output++;
                }
                
            }
        }
        else{
            k=2*n-i;
            output=n;
            for (int j{1};j<=n;j++){
                cout<<output<<" ";
                if (j<k){
                    output--;
                }
            }
            for (int j{n-1};j>=1;j--){
                cout<<output<<" ";
                if (j>=2 && j<=k && k!=1){
                    output++;
                }
                
            }
        }
            
        cout<<endl;
    }
    return 0;
}