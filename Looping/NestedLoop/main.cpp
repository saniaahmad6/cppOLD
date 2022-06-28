#include <iostream>
#include <vector>
using namespace std;

int main(){
    
//    for (int i{1}; i<=10;i++){//multiplication table
//        for (int j{1}; j<=10;j++){
//            cout<<i<<" * "<<j<<" = "<<i*j<<endl; //use char' ' to see absurd things 
//        }
//        cout<<"\n-------------------------------\n"<<endl;
//    }
    
//    int array_2d [5][3]{};//all have unknown values
//    for (int i{};i<5;i++){
//        for (int j{};j<3;j++){
//            array_2d [i][j]=1000;//assign 1000 to each element
//        }
//    }
//    for (int i{};i<5;i++){//print 2d array
//        for (int j{};j<3;j++){
//            cout<<array_2d [i][j]<<' ';
//        }
//        cout<<endl;
//
//    }

    vector <vector<int>> num
    {
        {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
    };
    for (auto i:num){//each vector
        for (auto j: i){//each element of a vector
            cout<<j<<" ";
        }
        cout<<endl;
    }











    return 0;
}