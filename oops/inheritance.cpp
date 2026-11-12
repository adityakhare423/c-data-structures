#include<iostream>
using namespace std;
class Animal{
public:
    string color;
    void eat(){
        cout<<"Eating"<<endl;
    }
    void breathe(){
        cout<<"Breathing"<<endl;
    }

    
};
// class Fish : public Animal{
//     public:
//     int fins;
//     void swim(){
//         cout<<"Swimming"<<endl;
//     }
// };
class Fish : protected Animal{
    public:
    int fins;
    void swim(){
        eat();
        breathe();
        cout<<"Swimming"<<endl;
    }
};
int main () {
    Fish f1;
    f1.fins=4;
    f1.swim();
    // f1.color="Blue";    
    // f1.eat();
    // f1.breathe();
    //  cout<<"Color: "<<f1.color<<endl;
    cout<< f1.fins<<endl;
    return 0;
}   