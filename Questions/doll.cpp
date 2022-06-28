#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin>>num;
	vector <vector<int>> data;
	for(int i{};i<num;i++){
        vector <int> x;
        int n{},k{};
        cin>>n>>k;
        x.push_back(k);
        for(int j{};j<n;j++){
            int dataitem;
            cin>>dataitem;
            x.push_back(dataitem);

        }data.push_back(x);
	    
	}
	
	for (auto i: data){
        int k=i.at(0);
        int sum{};
	    for(int j{1};j<i.size();j++){
	        if (i.at(j)>k){
                sum++;
            }
	        
	    }
        
        cout<<sum<<endl;
	}
	return 0;
}
