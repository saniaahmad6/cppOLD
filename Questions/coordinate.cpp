#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        
        
        if (n%2==0) cout<<n/2<<endl;
        else if (n%2!=0) cout<<-1*(n/2+1)<<endl;    
        
        
    }
    return 0;
}