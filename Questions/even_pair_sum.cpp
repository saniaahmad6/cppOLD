#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int k=0;k<t;k++){
        int a,b,aodd,aeven,bodd,beven;
        cin>>a>>b;
        aeven=a/2;
        beven=b/2;
        aodd=a-aeven;
        bodd=b-beven;
        cout<<(aodd*bodd)+(aeven*beven)<<endl;
        
        
        
        
    }
    return 0;
}