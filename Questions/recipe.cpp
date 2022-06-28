#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
                if (a==0) return b;
                if (b==0) return a;
                return gcd(b,a%b);
            }
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
            int n;
            cin>>n;
            int arr[n];
            for (int i=0;i<n;i++){
                cin>>arr[i];
    
            }
            
            int max=arr[0];
            for (int i=1;i<n;i++){
                max=gcd(max,arr[i]);
            }
            for (int i=0;i<n;i++){
                int x=arr[i]/max;
                cout<<x<<" ";
            }
            cout<<endl;
                
                
            
            
        }
        cout<<endl;
        
    
    return 0;
}