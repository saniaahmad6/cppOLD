#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int n,x,y,c01=0,c10=0;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        // cout<<s;
        for (int i=0;i<n-1;i++){
            if ((s[i]=='0' && s[i+1]=='1')  || (s[i]=='1' && s[i+1]=='0')){ 
                cout<<min(x,y)<<endl;
                goto end;
            }

        }
        cout<<0<<endl;
        end:;
    }
    return 0;
}