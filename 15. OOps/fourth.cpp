//constructor ctor and distructor dtor
//when constructor is run then the object is formed
//the constructor is the initializer of the oject
//distructor is run when the object work is done.

#include<iostream>
using namespace std;

class animal{
    public:
    string str;
    int num;
    animal(){
        cout<<"default ctor called "<<endl;
    }
    animal(string s,int n){
        this->str = s;
        this->num = n;
        cout<<"paramerized constructor called"<<endl;
    }

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
    void setSex(string sex) {
        // class ka sex = parameter sex;
        //this is a pointer to current object
        this-> sex = sex;
    }
    string getSex() const {
        cout<<sex;
        return sex;
    }

    //by us oject copy (this override default object copy)
    animal (animal &obj){
        this->age = obj.age;
        
    }

    ~animal(){
        cout<<"i am dtor"<<endl;
      
    }
};
 
 
int main(){
  
    animal a;//default ctor called
    animal b("dog",10); //parameterized ctor called
    cout<<b.str;//dog

    //default object copy ctor
    animal c = b;
    cout<<c.str; //dog but only in default me
    animal d(b); 
    cout<<d.str;//dog but only in default me
    animal* e = new animal();
    e->name = "HAATHI";
    cout<<e->name;
    delete e; //ab destructor call hua 
    //always call contructor for dyanmic memory
    


 
return 0;
 }