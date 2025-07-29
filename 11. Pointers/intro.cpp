#include<iostream>

using namespace std;

void func(int arr1[]){
    cout<<sizeof(arr1);//4
    //pass by reference not value
    //here array change occur in original array
}

void pointerfunc(int* p){
 cout<<&p; //address of p is different by arr1p because pointer is pass by value
 cout<<endl;
}

void passbyvalue(int b){
    cout<<"address of pass by value of y :"<<&b<<endl;
}

void passbyref(int& b){
    cout<<"address of pass by ref of y :"<<&b<<endl;
}

int* retbyref(){
    int a = 7;
    int* ans = &a;
    return ans;
}
 
int main(){
 int a = 5; // examp a stored in location 104 and 5 is stored in 104 location
 //a symbol table is formed where a points to 104 address
 cout<<&a; // amperand (address of operator) gives address of a  (0x61ff0c)
 //pointer is use to store address int* (a pointer which store interger value)
 int* ptr= &a;
 cout<<endl;
 //* is know as dereference operator
 cout <<*ptr;//5
 int * nptr= nullptr; // nptr pointes null (good practice for intialise null pointer)
int * p; // (bad practice)
p = &a;
cout<<p; //address of a


 //pointer arithmetic
int b = 10;
p = &b;
cout<<*p;//10

int*q = p; // == int*q = &b;
cout<<endl;
cout<<*p;//10
cout<<*q;//10
cout<<endl;

//pointers in array
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int* arrptr = arr; //bcz arr itself contain address
cout<<arrptr<<endl;//gives address
//arr == &arr
cout<<arr;//arr[0] address is shown
cout<<endl;
cout<<&arr;//arr[0] address is shown
cout<<endl;
cout<<*arr + 1;//2 bcz *arr => arr[0]
cout<<*(arr+1);// arr[1]
// arr[i] == *(arr+i) == i[arr]
cout<<arr[0]<<" "<<*(arr+0)<<" "<<0[arr];

//in symbol table arr is points to address of arr[0]
//by default arr is a pointer

// arr = arr + 2; gives error bcz arr pointer = arr pointer + 2 and pointer value can't change in symbol table
// & arr &arr + 2;
cout<<sizeof(arr);//140
cout<<sizeof(p); //4
cout<<sizeof(q); //4
// pointer size depends on system  
cout<<endl;
// but in char array pointer behaves different
char ch[10] = "ambuj";
char* c = ch;
cout<<c<<endl;// tb tk print hoga jb tk null character n mil jaye
//ambuj but in int arr it gives arr address

cout<<&ch<<endl;//address of ch
cout<<ch[0]<<endl;//a
cout<<&c<<endl;//address of pointer
cout<<*c<<endl;//a
cout<<c+1<<endl;//mbuj
cout<<endl;
//bad practice
// char cha[10] = "ambuj";
// char* chaptr = "ambuj";
cout<<c<<endl; //ambuj because ambuj stored in temp storage and can be delere automatic


//pointers with functions
int arr1[10] = {1,2,3};
cout<<sizeof(arr1);//40




func(arr1); // sizeofarr1 inside func is 4 which is size of pointer that means arr pass by reference;

int *arr1p = arr;


pointerfunc(arr1p);
cout<<&arr1p;


//double pointer or multilevel pointer
int x = 5;
int* p1 = &x;
int** q1 = &p1;
cout<<"////////"<<endl;
cout<<x<<endl;  //5
cout<<&x<<endl; //0x61fe7c
cout<<p1<<endl;//0x61fe7c
cout<<&p1<<endl;//0x61fe78
cout<<*p1<<endl;//5
cout<<q1<<endl;//0x61fe78
cout<<&q1<<endl;//0x61fe74
cout<<*q1<<endl;//0x61fe7c
cout<<**q1<<endl;//5

//reference variable
//1. same mem location different names
//2. can't be null like pointers;

int y = 1;
int* q2 = &y; // in symbol table q2 is exist
int&b1 = y;//in symbol table b is not exist

//here b1 == *q2
cout<<*q2<<" "<<b1;//1 1   (easy to use )
cout<<endl;
cout<<"real add of y :"<<&y<<endl; //0x61fe68
passbyvalue(y); //0x61fe50
passbyref(y); //0x61fe68


//return by ref
//retbyref k andr bne variable ki address return krwa rhe
int* retrn = retbyref();
cout<<retrn;
 



return 0;
 }