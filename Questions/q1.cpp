#include <iostream>

using namespace std;

int main() {
	
    int T{};
    cin>>T;
    for(int j{};j<T;j++){

        
        int n,x,y;
        cin>>n>>x>>y;
        int diff=n-x;
        if (diff<0) diff*=-1;
        if (diff<=y ) cout<<"YES"<<endl;
        else{ cout<<"NO"<<endl;}
    }
    

    


    
	return 0;
}
