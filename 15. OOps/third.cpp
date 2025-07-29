//dynamic mem allocation means mem use of heep storage

//stack memory automatic clean ho sakti hai but heep memory nahi we need to clean it manually

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
    void setSex(string sex) {
        // class ka sex = parameter sex;
        //this is a pointer to current object
        this-> sex = sex;
    }
    string getSex() const {
        cout<<sex;
        return sex;
    }
};
 
int main(){
    // ab error ayega bcz instead of dog we have to use *dog
  animal* kutta = new animal;
  //dynamic mem allocation
  //heep memory
  (*kutta).age = 10;
  kutta->name = "dog";
  cout<<(*kutta).name;//dog
  cout<<kutta->age;//10
 kutta->sleep();

 delete kutta; //for remove to prevent from memory leak

return 0;
 }