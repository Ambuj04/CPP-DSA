//shallow copy and deep copy
#include<iostream>
using namespace std;

class a{
    public:
    int *p = new int(5);

   
};

class b{
public:
    int *p = nullptr;

    // Default constructor
    b() {}

    // Copy constructor (deep copy)
    b(const b& other) {
        if (other.p) {
            p = new int(*other.p);
        }

      
    }

    // Assignment operator (deep copy)
    b& operator=(const a& other) {
        if (this->p) delete this->p;
        this->p = new int(*(other.p));
        return *this;
  
    }

    Destructor
    ~b() {
        delete p;
    }
};
 
int main(){
  a ambuj;
  b abhay = ambuj;

abhay = ambuj;

 
return 0;
 }