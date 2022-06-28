
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int n;
        cin>>n;
        int arr[n];
        set <int> wow;
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c=0;
        for (int i=0;i<n-1;i++){
            if (arr[i]!=arr[i+1] ){
                wow.insert(i);
                wow.insert(i+1);
            }
        }
        cout<<wow.size()<<endl;
        
    }
    return 0;
}