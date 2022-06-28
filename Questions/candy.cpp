#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i{};i<t;i++){
        int a,b,ac{1},bc{2};
        cin>>a>>b;
        while (1){
            a-=ac;
            if (a<0){
                cout<<"Bob"<<endl;
                break;
            }
            b-=bc;
            if (b<0){
                cout<<"Limak"<<endl;
                break;
            }
            ac+=2;
            bc+=2;
        }
    }
    return 0;
}