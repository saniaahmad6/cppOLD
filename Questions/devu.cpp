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
	
	for (auto i:data){
        int c{};
	    for(int j{}; j<i.size();j++){
	        for(int k{j+1};k<i.size();k++){
                if (i.at(j)==i.at(k)){
                    c++;
                }
            }
        }cout<<(i.size())-c<<endl;
	}
	return 0;
}
