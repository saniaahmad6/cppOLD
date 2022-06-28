#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int i=0;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }

        while (i<n){
            int neg=1;
            while ((i+neg)<n && arr[i+neg]==-1){
                neg++;
            }

            if (arr[i]==arr[i+neg]){
                arr[i+neg]=-1;
            }
            i++;
        }int c=0;
        for (int i=0;i<n;i++){
            if (arr[i]!=-1) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}