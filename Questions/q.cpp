#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    public:
    int age ;
    string name;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor : public Person
{
    public:
    int pub;
    static int id;
    int pid;
    Professor()
    {
        pid=id;
        ++id;
    }
    void getdata()
    {
        cin>>this->name>>this->age>>this->pub;
    }
    void putdata()
    {
        cout<<this->name<<" "<<this->age<<" "<<this->pub<<" "<<this->pid<<endl;
    }
};
int Professor::id=1;
class Student : public Person
{
   public :
   int marks[5],sum=0;
   static int id;
   int sid;
   Student()
   {
       sid=id;
       ++id;
   }
   void sumc(int marks[5])
   {
       for(int i=0;i<5;i++)
        {
            sum=sum+marks[i];
        }   
   }
   void getdata()
   {
       cin>>this->name>>this->age;
       for(int i=0;i<5;i++)
       {
           cin>>this->marks[i];
       }  
       sumc(marks);
   }
   void putdata()
   {
       cout<<this->name<<" "<<this->age<<" "<<this->sum<<" "<<this->sid<<endl;
   }
};
int Student::id=1;
int main()
{
    int n, val;
    cin>>n;
    Person *P[n];
    for(int i=0;i<n;i++) 
    {
        cin>>val;
        if(val == 1)
        {
            P[i] = new Professor;
            P[i]->getdata(); 
        }
        else 
        {
            P[i] = new Student;
            P[i]->getdata(); 
        }
    }

    for(int i=0;i<n;i++)
    {    
        P[i]->putdata();
    }
    return 0;
}