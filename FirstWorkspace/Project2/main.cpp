#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    cout<<"Room charges System"<<endl;
    int x {0};
    cout<<"No. of rooms: ";
    cin>>x;
    const int charge_per_room {30};
    int charge {charge_per_room*x};
    cout<<"Base charge: "<<charge<<endl;
    const double tax_rate {6};
    double net_tax {(tax_rate/100)*charge};
    cout<<"Net tax is: "<<net_tax<<" and TOTAL: "<<net_tax+charge<<endl;
    
    return 0;
}