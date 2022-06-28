#include <iostream>

using namespace std;

int main(){
    int a{0};
    int b{0};
    const double cost_small_room{25};
    const double cost_large_room{35};
    const double tax {0.06};
    const int DAYS {30};
    
    cout<<"Small rooms: ";
    cin>>a;
    cout<<"Large rooms: ";
    cin>>b;
    cout<<endl;
    cout<<"cost per small room: "<<cost_small_room<<endl;
    cout<<"cost per large room: "<<cost_large_room<<endl;
    
    cout<<"Base Cost "
        <<(a*cost_small_room)+(b*cost_large_room)<<endl;
    cout<<"Tax: "<<tax<<endl;    
    cout<<"Total Tax: "<<((a*cost_small_room)+(b*cost_large_room))*tax<<endl;
    cout<<"Total Amount: "
        <<(((a*cost_small_room)+(b*cost_large_room))*tax)+
        ((a*cost_small_room)+(b*cost_large_room))
        <<endl;
    cout<<"validity(days):  "<<DAYS<<endl;
    
    return 0;
}