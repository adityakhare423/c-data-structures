#include<iostream>
using namespace std;
class User{
    private:
        string password;
        int id;
    public:
       string username;
       User(int id){
        this->id=id;
       }
    //getter
    string getpassword(){
        return password;
    }
    //setter
    void setpassword(string password){
       this->password=password;
    }
};
int main () {
   User u1(10000);
   u1.username="Aditya";
   u1.setpassword("1234");
   cout<<"Username: "<<u1.username<<endl;
   cout<<"password: "<<u1.getpassword()<<endl;
    return 0;
}   