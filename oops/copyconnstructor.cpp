#include<iostream>
using namespace std;
class Car{
   public:
   string name;
   string color;
   Car(string name,string color){
    this->name=name;
    this->color=color;
   }

   Car(Car &c){
     cout<<"Copy constructor is called"<<endl;  
    name=c.name;
    color=c.color;
   }

  
};
int main () {
    Car c1("Toyota", "Red");
    Car c2(c1); //copy constructor
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Color: "<<c1.color<<endl;
    cout<<"Name: "<<c2.name<<endl;
    cout<<"Color: "<<c2.color<<endl;
    return 0;
}   