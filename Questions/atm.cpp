
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        for (int i=0;i<n;i++){
            int p;
            cin>>p;
            if (p<=k){
                cout<<1;
                k-=p;
            }else cout<<0;
            
        }
        cout<<endl;
        
    }
    return 0;
}