#include<iostream>
using namespace std;
class Student{
      string name;
        int age;
        float cgpa;
        //methods
    public:
        void getpercentage(float cgpa){
            cout<< "percentage is "<<(cgpa*10)<<endl;
        }
};
int main () {
    Student s1;
    s1.getpercentage(9.8);
    return 0;
}   