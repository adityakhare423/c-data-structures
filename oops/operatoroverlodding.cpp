#include<iostream>
using namespace std;
class Complex {
private:
   int real;
    int imag;
public:
    Complex( int r,int i){
        real=r;
        imag=i;
    }

    void shownumber(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
//operator loddingg
    void operator+(Complex &c2){
        real=real+c2.real;
        imag=imag+c2.imag;
        Complex c3(real,imag);
        c3.shownumber();
        cout<<"res=";
        c3.shownumber();
    }
};


int main(){
    Complex c1(5, 10);
    Complex c2(3, 6);
    c1.shownumber();
    c2.shownumber();
    c1+c2;
    
    return 0;
}