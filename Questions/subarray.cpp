#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i{};i<t;i++){
        int n,c{};
        cin>>n;
        int arr[n];
        for (int j{};j<n;j++){
            cin>>arr[i];   
        }
        
        for(int i{};i<n;i++){
            int s{},p{1};
            for (int j{i};j<n;j++){
                s+=arr[j];
                p*=arr[j];   
                if (s==p) c++;  //subarray      
            }
            
        }
        cout<<c<<endl;
    }
    return 0;
}