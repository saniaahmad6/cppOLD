#include <iostream>
#include <vector>
using namespace std;

int main() {
	
    int T{};
    cin>>T;
    for(int j{};j<T;j++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int diff=b-a,min=c*e,max=d*e;
        if (diff>=min && diff<=max){
            cout<<"1"<<endl;
        }else cout<<"0"<<endl;
        

    }
    
	return 0;
}
