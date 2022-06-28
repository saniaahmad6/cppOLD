#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--){
        int len;
        string s;
        cin>>len>>s;
        string s1(len,'0');
        int last=len-1;
        int c=0;
        while (s1!=s){
            c++;
            for (int i=last;i>=0;){
                if (s[i]=='1') {s[i]='0';i-=2; }
                else i--;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}