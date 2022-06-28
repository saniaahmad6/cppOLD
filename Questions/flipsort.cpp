#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<pair<int,int>> r;
        for(int i=(n-1);i>=0;i--){
            if(s[i]=='0'){
                int a=i+1;
                for(int j=0;j<=i;j++){
                    if(s[j]=='0'){
                        s[j]='1';
                    }
                    else{
                        s[j]='0';
                    }
                }
                r.push_back({1,a});
            }
        }
        int size=r.size();
        cout<<size<<endl;
        for(auto i: r){
            cout<<i.first<<' '<<i.second<<endl;
        }
    }
	return 0;
}