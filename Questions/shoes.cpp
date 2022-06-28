#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int n,m;
        cin>>n>>m;
        if (n==m) cout<<m<<endl;
        else if (n<m) cout<<n<<endl;
        if (n>m) cout<<(n-m)*2+m<<endl;
       
        
    }
    return 0;
}