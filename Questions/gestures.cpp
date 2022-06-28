#include <iostream>
#include <vector>
using namespace std;

int main() {
	
    int T{};
    cin>>T;
    for(int j{};j<T;j++){

        vector <char> gestures;
        int n;
        cin>>n;
        for (int i{};i<n;i++){
            char a {};
            cin>>a;
            gestures.push_back(a);
        }
        int flag=0;
        for (auto i:gestures){
            if (i=='I'){
                cout<<"INDIAN"<<endl;
                break;
            }
            if (i=='N')
                flag++;
            if (i=='Y'){
                cout<<"NOT INDIAN"<<endl;
                break;
            }
        }
        if (flag==gestures.size()) cout<<"NOT SURE"<<endl;

    }
    

    


    
	return 0;
}
