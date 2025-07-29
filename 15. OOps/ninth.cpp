//abstraction => deliver only essential info to outer world while moving the background details
//abstractin in header file
#include<iostream>
#include "bird.h"
using namespace std;

void birddoessomething(Bird* &bird){
    bird->eat();
    cout<<endl;
    bird->fly();
};



 class base{
    public:
    base(){
        cout<<endl;
        cout<<"i am base ctor"<<endl;
    }
    //virtual keyword use in base class destructor
      virtual ~base(){
        
        cout<<"i am base dtor"<<endl;
    }
}; 
class derived: public base{
    public:
    derived(){
        cout<<"i am derived ctor"<<endl;
        
        
    }
   ~derived(){
        cout<<"i am derived dtor"<<endl;

    }
 };
 
int main(){                   
  
    Bird* bird = new Sparrow();
    birddoessomething(bird);

    base *b = new derived();
    // delete b;
    //before virtual keyword
    // i am base ctor
    // i am derived ctor
    // i am base dtor
    
    //here derived dtor is miss means memory leak occur
    //this occur by withour virtual keyword in dtor


//after virtual keyword
    delete b;
//    i am base ctor
//    i am derived ctor
//    i am derived dtor
//    i am base dtor

 
return 0;
 }