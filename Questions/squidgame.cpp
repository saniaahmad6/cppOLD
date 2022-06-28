#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin>>num;
	vector <vector<int>> data;
	for(int i{};i<num;i++){
        vector <int> x;
        int n{};
        cin>>n;
        for(int j{};j<n;j++){
            int dataitem;
            cin>>dataitem;
            x.push_back(dataitem);

        }data.push_back(x);
	    
	}
	
	for (auto i: data){
        int min=i.at(0);
        int sum{};
	    for(auto j: i){
	        if (j<=min){
                min=j;
            }
	        sum+=j;
	    }
        sum-=min;
        cout<<sum<<endl;
	}
	return 0;
}
