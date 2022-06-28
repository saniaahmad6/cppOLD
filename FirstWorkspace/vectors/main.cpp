#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout<<"\nelement 1: "<<vector1.at(0)<<endl;
    cout<<"element 2: "<<vector1.at(1)<<endl;
    cout<<"size of vector1: "<<vector1.size()<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout<<"\nelement 1: "<<vector2.at(0)<<endl;
    cout<<"element 2: "<<vector2.at(1)<<endl;
    cout<<"size of vector2: "<<vector2.size()<<endl;
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout<<"\nelement 0,0 in 2d: "<<vector_2d.at(0).at(0)<<endl;
    cout<<"element 0,1 in 2d: "<<vector_2d.at(0).at(1)<<endl;
    cout<<"element 1,0 in 2d: "<<vector_2d.at(1).at(0)<<endl;
    cout<<"element 1,1 in 2d: "<<vector_2d.at(1).at(1)<<endl;
    
    vector1.at(0)=1000;
    
    cout<<"\nelement 0,0 in 2d now after 1000: "<<vector_2d.at(0).at(0)<<endl;
    cout<<"element 0,1 in 2d: "<<vector_2d.at(0).at(1)<<endl;
    cout<<"element 1,0 in 2d: "<<vector_2d.at(1).at(0)<<endl;
    cout<<"element 1,1 in 2d: "<<vector_2d.at(1).at(1)<<endl;
    
    cout<<"\nelement 1 vector1: "<<vector1.at(0)<<endl;
    cout<<"element 2 in vector1: "<<vector1.at(1)<<endl;
    return 0;
}