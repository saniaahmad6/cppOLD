#include <iostream>
#include <vector>
using namespace std;

int main() {
	
    int T{};
    cin>>T;
    for(int j{};j<T;j++){
        int n{};
        cin>>n;
        vector <int> max_marks(12,0);
        
        for (int i=0;i<n;i++){
            int a{},b{};
            cin>>a>>b;
            max_marks[a]=max(max_marks[a],b);

        }
        int sum{};
        for (int i{1};i<=8;i++){
            sum+=max_marks[i];
        }cout<<sum<<endl;
    }
    
	return 0;
}
