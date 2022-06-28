#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int n,k;
        cin>>n>>k;
        vector <long long> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int x=min(k,n-1);
        cout<<vec[x]<<endl;
        
    }
    return 0;
}