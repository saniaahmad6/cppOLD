#include <bits/stdc++.h>

using namespace std;

int main() {
    int T{};
    cin>>T;
    for(int j{};j<T;j++){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if (s[i]=='<') s[i]='>';
            else if (s[i]=='>') s[i]='<';
        }
        
        int i=0,c=0;
        while (i<s.size()){
            if (s[i]=='>' && s[i+1]=='<'){
                i+=2;
                c++;
            }
            else i++;
        }  
        cout<<c<<endl;    
    }
    
	return 0;
}
