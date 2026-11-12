#include<iostream>
using namespace std;
class Car{
    string name;
    string color;

public:
    Car( string namevalue, string colorvalue){
        name = namevalue;
        color = colorvalue;
        cout<<"Car object is created"<<endl;
    }
     void start(){
        cout<<"Car has started"<<endl;
     }
     void stop(){
        cout<<"Car has stopped"<<endl;
     }  
};
int main () {
    Car c1("Toyota", "Red");
    c1.start();
    c1.stop();
    return 0;
}   