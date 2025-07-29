#include<iostream>
using namespace std;

class animal{
    private:
    string sex;
    public:
    // state or properties
    int age;
    string name;

    // behavior or methods
    void eat(){
        cout << "Eating..." << endl;
    }
    void sleep(){
        cout << "Sleeping..." << endl;
    }

    //getter and setter for private member
    void setSex(string s) {
        sex = s;
    }
    string getSex() const {
        cout<<sex;
        return sex;
    }
};

int main(){
    animal a;
    a.age = 5;
    a.name = "Lion";
    a.eat();
    a.sleep();

animal b;
b.setSex("male");

b.getSex();
//if i need to use private member then i need to use getter and setter





    return 0;
}