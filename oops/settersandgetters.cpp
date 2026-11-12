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
        //setters
        void setname(string namevalue){
            name=namevalue;
        }
        void setage(int agevalue){
            age=agevalue;
        }
        void setcgpa(float cgpavalue){
            cgpa=cgpavalue  ;
        }
        //getters
        string getname(){
            return name;
        }
        int getage(){
            return age;
        }
        float getcgpa(){
            return cgpa;
        }

};
int main () {
    Student s1;
    s1.getpercentage(9.8);
    s1.setname("Aditya");
    s1.setage(20);
    s1.setcgpa(9.8);
    cout << "Name: " << s1.getname() << endl;
    cout << "Age: " << s1.getage() << endl;
    cout << "CGPA: " << s1.getcgpa() << endl;
    return 0;
}   