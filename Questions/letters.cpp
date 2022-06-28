#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int arr1[26]={0},ans=0;
        for (int i=0;i<26;i++){
            cin>>arr1[i];
        }//input and store 26 prices
        string s;
        cin>>s;
        int arr[26]={0};//all pos=0
        for (int i=0;i<s.length();i++){
            char c=s[i];
            arr[c-'a']++;//>=1 at positions where exist
        }
        for (int i=0;i<26;i++){
            if (arr[i]==0) ans+=arr1[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}