#include<iostream>

using namespace std;
 
class abc{
public:
    static int x; // Declaration of static member
    int y = 10;
    static void print(){
        cout<<"print";
    }
    static void printing(){
        // cout<<"printing"<<y ;//error
        //Static functions cannot access non-static members directly because they do not have access to any specific object

        cout<<"printint "<<x;
        //in static data func we only accesss static data members
    }
};

// Definition and initialization of the static member outside the class
// This allocates memory for x and sets its initial value.
int abc::x = 10;  // it is necessary to declare and initiate outside the main function

int main(){
    abc a;   // Create an object a
    abc b;   // Create an object b

    cout << a.x << endl; 
    cout << b.x << endl;
    cout << abc::x << endl;

    abc::x = 20; 

    cout << a.x << endl; 
    cout << b.x << endl;
    cout  << abc::x << endl;

    a.print(); //print call hua but this pointer nahi gaya
//    abc::print();
//    a.print();

a.printing(); 

 
    return 0;
}