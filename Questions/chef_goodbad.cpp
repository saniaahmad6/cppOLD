#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
    
        string s;
        cin>>s;
        
        for (int i=0;i<=s.size()-3;i++){
            if ((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')  || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){ 
                cout<<"Good"<<endl;
                goto end;
            }

        }
        cout<<"Bad"<<endl;
        end:;
    }
    return 0;
}