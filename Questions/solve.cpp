#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int n;
        cin>>n;

        int arr[n+1];
        arr[0]=INT_MAX;
        for (int i=1;i<=n;i++){
            cin>>arr[i];    
        }
        int c=0,count=0;
        int i;
        for (i=n;i>=1;i--){
            
            if (arr[i]<=7){
                break;
            }
              
        }
        
        cout<<i<<endl;
        
    }
    return 0;
}
//logic is no duplicacy of any number:
//the last number from the end which is less<=7..return that index