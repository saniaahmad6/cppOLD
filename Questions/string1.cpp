#include <iostream>
#include <string>
using namespace std;

int main() {
    int T{};
    cin>>T;
    for(int j{};j<T;j++){
        int n{};
        cin>>n;//n=size
        string s {},r{};
        cin>>s>>r;
        int sums{},sumr{};
        for (int i{};i<n;i++){
            if (s[i]=='0') sums++;
            if (r[i]=='0') sumr++;
        } 
        if  (sums==sumr){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    
        
        
    }
    
	return 0;
}
