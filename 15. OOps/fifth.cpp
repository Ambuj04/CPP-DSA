//class works like a encapsulatoin

#include<iostream>
using namespace std;
int n = 5;

class mother{ // encapsulation
    public:
    string hair = "black";
    int  height = 5;
};


//inheritance
class child: public mother{ //single level inheritace
    
};
 
class grandchild: public child{
    //it is multi-level
};

class father{
    public:
    string work = "office";
};

class child1: public father , public mother{
    //multiple (had properties of father and mother both)
};


class child2: public father{
//child 2 nd child 3 is hierarchical
};
class child3:public father{
//child 2 nd child 3 is hierarchical
};


//mix of any two types
class hybrid: public grandchild,public child3{

};



//polymorphism

//compile time

class funcOverloading{
    public:
     
    //same fucntion name but different signature
     
    int sum(int a,int b){
        return a+b;
    }
    int sum (int a,int b,int c){
        return a+(b+c);
    }
    float sum(int a,float b){
        return a+b;
    }
};

class operatorOverloading{
    //here we can code where + sign act as - sign
    public:
    int val;

    void operator + (operatorOverloading &obj){
        int val1 = this->val;
        int val2 = obj.val;
        cout<<(val1-val2);
    }

};

//run time (dynamic biniding)
//func or method overriding

class Animal{
public:
virtual void speak(){
    cout<<"speaking";
}
};

//derived class khud define kar lega method
class dog:public Animal{
    public:
    void speak(){
        cout<<"barking";
    }
};
    


 
 
int main(){
  child a;
  cout<<a.hair; //black (because child inherit mother properties) 
  grandchild b;
  cout<<b.hair;//black

  funcOverloading test;
  cout<<test.sum(2,3); //5
  cout<<test.sum(2,3,4);//9
  cout<<test.sum(2,2.5f);//4.5

operatorOverloading test1;
operatorOverloading test2;
test1.val = 4;
test2.val = 5;
test1+  test2; //-1 (test1 k sath jo operator hai {+} wo test1 ke class me dekha jayega and test2 as a input parameter hoga);
cout<<endl;

Animal x;
dog y;
x.speak();//speaking
y.speak();//barking
cout<<endl;cout<<endl;
Animal* p = new Animal();
p->speak(); //speaking
cout<<endl;
dog* r = new dog();  //parent ctor then child ctor
r->speak(); //barking  
cout<<endl;
Animal* s= new dog(); //upcasting
s->speak(); // speaking barking(with virtual)
cout<<endl;
dog* t = (dog*)new Animal(); //parent ctor
//downcasting (this method hai downcasting ka)
t->speak(); //barking speaking(with virtual)
cout<<endl;

//when we are doing upcasring and downcasting withour virtual keyword pointer fxn is used;


//1D dynamic array
int *darr = new int[n];
delete []darr; //deallocate 1D array

//2d dynamic array

int** darr1 = new int* [n];
for (int i = 0; i < n; i++)
{
    darr1[i] = new int[n];
    
}
//deallocate
for (int i = 0; i < n; i++)
{
    delete []darr1[i];
}



 
return 0;
 }