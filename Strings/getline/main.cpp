#include <iostream>
#include <string>//cpp strings
using namespace std;

int main(){
//    string s1,s2;
//    cout<<"Enter line1: ";
//    getline(cin,s1,',');//sania,
//    cout<<"Enter line2: ";
//    getline(cin,s2);
//    //  s a n i a   ,   \n
//    cout<<s1<<endl;//sania
//    cout<<s2<<endl;//\n

//
//    char line [20] {};//empty c style
//    cout<<"enter line: ";
//    cin.getline(line,20);//maximum 20 or less
//    cout<<line<<endl;
    
   



    //macro definitions
//    #define MAX_NAME_LEN 6 // Maximum length of your name can't be more than 6
//    #define MAX_ADDRESS_LEN 120 // Maximum length of your address can't be more than 120
//    #define MAX_ABOUT_LEN 250 // Maximum length of your profession can't be more than 250
//
//    
//    char y_name[MAX_NAME_LEN], y_address[MAX_ADDRESS_LEN], about_y[MAX_ABOUT_LEN];
//
//    cout << "Enter your name: ";
//    cin.getline (y_name, MAX_NAME_LEN);
//
//    cout << "Enter your City: ";
//    cin.getline (y_address, MAX_ADDRESS_LEN);
//
//    cout << "Enter your profession (press $ to complete): ";
//    cin.getline (about_y, MAX_ABOUT_LEN, '$'); //$ is a delimiter
//
//    cout << "\n\nEntered details are:\n\n";
//    cout << "Name: " << y_name << endl;
//    cout << "Address: " << y_address << endl;
//    cout << "Profession is: " << about_y << endl;
     
    string name;
    int id;
 
    // Taking id as input
    cout << "Please enter your id: \n";
    cin >> id;
 
    // Takes the empty character as input
    cout << "Please enter your name: \n";
    getline(cin, name);
 
    // Prints id
    cout << "Your id : " << id << "\n";
 
    // Prints nothing in name field
    // as "\n" is considered a valid string
    cout << "Hello, " << name
         << " welcome to GfG !\n";
 
    // Again Taking string as input
    getline(cin, name);
 
    // This actually prints the name
    cout << "Hello, " << name
         << " welcome to GfG !\n";
 
    return 0;
}