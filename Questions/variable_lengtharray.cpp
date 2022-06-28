#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin>>n>>q;

    vector <vector <int>> vec;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        vector <int> each;
        for (int j=0;j<t;j++){
            int ele;
            cin>>ele;
            each.push_back(ele);
        }
        vec.push_back(each);
    }
    for (int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<vec[a][b]<<endl;
    }
    
    
    return 0;

}