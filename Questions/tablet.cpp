#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i{};i<t;i++){
        int n,b;
        cin>>n>>b;
        int max_area{};
        for (int j{};j<n;j++){
            int wid,br,p;
            cin>>wid>>br>>p;
            if (p>b) continue;
            else{
                int area=wid*br;
                max_area=max(area,max_area);
            }
            
        }
        if (max_area==0) cout<<"no tablet"<<endl;
        else cout<<max_area<<endl;
    }
    return 0;
}