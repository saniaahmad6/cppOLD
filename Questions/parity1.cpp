#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int last=n-1;
        if (arr[last]%2==0){
            int j2_index=-1;
            for(int i=last-1;i>=0;i--){
                if (arr[i]%2==0){
                    j2_index=i;
                    break;
                }
                
            }
            if (j2_index==-1){
                cout<<last<<endl;
            }else {
                cout<<j2_index+1<<endl;
            }
           
        }
        if (arr[last]%2!=0){
            int j2_index=-1;
            for(int i=last-1;i>=0;i--){
                if (arr[i]%2!=0){
                    j2_index=i;
                    break;
                }
            }
            if (j2_index==-1){
                cout<<last<<endl;
            }else {
                cout<<j2_index+1<<endl;
            }
           
        }
        
    }
    return 0;
}