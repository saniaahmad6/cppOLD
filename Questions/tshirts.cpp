#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map <int,set<int>> m;
    set <int> s1;
    set <int> s2;
    set <int> s3;
    int arr[n];
    for (int j=0;j<n;j++){
            cin>>arr[j];
    }    
    for (int i=0;i<2;i++){
        for (int j=0;j<n;j++){
            int a;
            cin>>a;
            if (a==1){
                s1.insert(arr[j]);
            }
            else if (a==2){
                s2.insert(arr[j]);
            }
            else{
                s3.insert(arr[j]);
            } 
            
        }
    }
    m[1]=s1;
    m[2]=s2;
    m[3]=s3;
    int me;
    cin>>me;
    for (int j=0;j<me;j++){
            int c;
            cin>>c;
            auto it=m[c].begin();
            if ((*it)==0) cout<<-1<<" ";//if set=empty then *(set.begin())=0
            else cout<<*it<<" ";
            m[1].erase(*it);
            m[2].erase(*it);
            m[3].erase(*it);
    }

    return 0;
}