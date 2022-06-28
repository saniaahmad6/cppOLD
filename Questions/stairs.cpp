#include <iostream>

using namespace std;

int main() {
    int T{};
    cin>>T;
    for(int j{};j<T;j++){
        int a,b,c;
        cin>>a>>b>>c;
        double st=(1.414*a)/b;
        double ele=static_cast<double>(2*a)/c;
        // cout<<st<<" "<<ele<<endl;
        if(st<ele) cout<<"Stairs"<<endl; 
        else if(ele<st) cout<<"Elevator"<<endl;       
    }
    
	return 0;
}
