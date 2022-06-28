#include <iostream>
#include <vector>
using namespace std;
//vector 2d, input values and print
int main(){
    int num_items{};
    cout<<"enter number of items: ";
    cin>>num_items;
    
    vector <int> items;
    
    for (int i{};i<num_items;i++){
        cout<<"=====================\n: ";
        cout<<"Enter element"<<i+1<<" : ";
        int data_item{};
        cin>>data_item;
        items.push_back(data_item);
    }//printing a histogram
    for (auto element: items){
        for (int i{1};i<=element;i++){
            if (i%5==0){
                cout<<"*";
            }else
                cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}