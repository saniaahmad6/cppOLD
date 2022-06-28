#include <iostream>
#include <vector>
using namespace std;

int main() {
	
    int T{};
    cin>>T;
    for(int j{};j<T;j++){
        int n{},k{},grps{};
        cin>>n>>k;//n=size
        vector <int> max_marks;
        
        for (int i=0;i<n;i++){
            int a{};
            cin>>a;
            max_marks.push_back(a);

        }
        
    
        
        int sum{};
        for (int i{};i<=(n-k);i+=1){//see condition
            int var{};
            for(int j{i};j<i+k;j++){
                var+=max_marks[j];
            }
            sum=max(var,sum);
        }cout<<sum<<endl;
    }
    
	return 0;
}
