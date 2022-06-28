#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int num{};
    cout<<"Enter number of entries: ";
    cin>>num;
    vector <int> arr ;
    int x;
    
    for(size_t i{0};i<num;i++){
        cout<<"Enter number: ";
        cin>>x;
        arr.push_back(x);//insert into vector
        
    }

    for(auto i:arr){
        cout<<i<<endl;
    }

    return 0;
}