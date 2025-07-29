#include<iostream>
//macros
#define PI = 3.04;
#define max(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

class abc{

    public:
    mutable int x;
    int *y;
    int z;
    abc(int _x,int _y ,int _z = 10){
        this->x = _x;
        y = new int(_y);
        z=_z;
    }

};

class constant{
    mutable int y;
    int zumba = 10;
    public:
    void setY(int _val) const {
        // this->y = _val; //error without mutable keyword
        //const function ke andr app koi bhi data member ki value badal ni sakte hai

        //if use this inside const then use mutable keyword in data member name;
        this->y = _val; //no error with mutable keyword
    }
    int sum(int x,int y = 5){//here y is a default argument , when 2 param is conme y value is overwrite and when 1 param is come y =  is used
            cout<<x+y;
    }

    void printabc(const abc &a){
        //ab yhn input paramter const ho gya haai isliye a(param) object kisi bhi data members ki value change nahi karne dega
        //jo bhi member function yhn use honge must be include const keyword.
        cout<<endl<<a.x<<" "<<*(a.y)<<" "<<a.z; // 1 2 10
        // a.z = 5; //error bcz x which in x class not have const keyword
        a.x = 5; //x contain mutable keyword

    cout<<this->zumba;


    }

     void printabC(const abc &a) const {
    
//no data member of a and this is change
     }
};


class init{

    public:
    int x;
    int y;
    int z;
    init(int _x,int _z){
        //bcz z is const the value of z is not change here
    } // normat ctor

    //initializaino list ctor
    init(int _x,int _y,int _z):x(_x),y(_y),z(_z){
        //value assign ho gyi hai and z const h phir bhi param wala z hai wo is object wale z ko assign ho jayega
    }


};
 
int main(){
//const with number

 const int x =5;
//  x = 10;//error 

//const with pointers

//const data , no const pointer
const int *a = new int(10); // int const *a = new int;
const int *b = new int(2);
a = b;
cout<<*a; //2 ans memory leak is occur with 10

///const pointer , no const data
int *const c = new int(5);
int *d = new int(6);
// c = d; error
*c = 10;
cout<<*c;//10

//const data,const pointer
const int *const e = new int(11);
// *e = 5; error
// e = d; error


constant test;
test.sum(5);//10
test.sum(5,2);//7


abc z(1,2);
constant y;
y.printabc(z);
y.printabC(z);

 
//initialization list
init initializationz{1,2,3};

return 0;
 }