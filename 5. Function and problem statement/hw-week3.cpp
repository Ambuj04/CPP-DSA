#include<iostream>

using namespace std;

int decimalToBinary1(int a); //declare
int decimalToBinary2(int a){
    int binary = 0;
    int bit = 0 ;
    int pow = 0;
   while(a > 0){
     bit = a & 1;
    //  cout<<bit;
     a = a>>1;
     for (int i = 0; i < pow; i++)
    {
        bit = bit * 10;
    }
    pow++;
    binary = binary + bit;
   }
// cout << binary;
// cout<<endl;
return binary;
}
int binaryToDecimal(int b){
int bit = 0;
int decimal = 0;
int pow = 0;
    // return 0;
    while (b > 0)
    {
        bit = b%10;
        // cout<<bit;
        b = b / 10;
        for (int i = 0; i < pow; i++)
        {
            bit = bit * 2;
        }
        decimal = decimal + bit;
        pow++;
    }
  return decimal;
}



//use for check prime number
int checkPrime(int a){
    
    int check;
    
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            check = 0;
            break;
        }else{
            check = 1;
        }
    }
    if (check == 0)
    {
       return 0;
    }else{
       return 1;
    };
}





int main(){

    // int a;
    // cout<<"Enter a number you want to binary : "; 
    // cin>>a;
    // cout<<decimalToBinary1(a)<<endl;
    // cout<<decimalToBinary2(a)<<endl;
    // int b;
    // cout<<"Enter a binary you want in decimal :";
    // cin>>b;
    // cout<<binaryToDecimal(b)<<endl;

 

//Wap to display area of circle
// {
//     float a;
//     cout <<"Enter radius of the circle :";
//     cin>>a;
//     cout<<(22*a*a)/7<<endl;
// }



// //wap to check number is even or odd
// {
//     int a;
//     cout<<"Enter number to check even or odd :";
//     cin>>a;  
//     if(a%2 == 0){
//         cout<<a<<" is even ";
//     }else{
//         cout<<a<<" is odd ";
//     }
// }


// //wap to factorial of number
// {
//     int a;
//     int num = 1;
//     cout<<"Enter a number for factorial :";
//     cin>>a;
//     for (int i = 1; i <= a; i++)
//     {
//         num = num * i;
//     }
//     cout<<num<<endl;
    
// }


// wap to check number is prime or not
    // int a;
    // int check;
    // cin>>a;
    // for (int i = 2; i < a; i++)
    // {
    //     if (a%i == 0)
    //     {
    //         check = 0;
    //         break;
    //     }
    // }
    // if (check == 0)
    // {
    //     cout<<"not prime";
    // }else{
    //     cout<<"prime";
    // };
    
//wap to print all prime number from 1 to N
// int a;
// cin>>a;
// for (int i = 1; i < a+1; i++)
// {
//     int result = checkPrime(i);
//     if(result == 0){
//         cout<<i<<" is no prime";
//     }else{
//         cout<<i<<" is  prime";

//     }
// }

//wap to print all digits in an integer
// int a;
// int digit;
// cin>>a;
// while (a>0)
// {
//     digit = a%10;
//     cout<<digit;
//     a /= 10;
    
// }


//wap to convert km to miles
//1KM = 0.62137119miles
// float km;
// cin>>km;
// cout<<km*0.62137119<<" miles";

//wap to print number of set bits
// int num;
// int check;
// cin>>num;
// int numberofset = 0;
// while (num>0)
// {
//     check = num & 1;
//     if(check == 1){
//         numberofset++;
//     }
//     num = num >> 1;
// }
// cout<<"Number of set bits is :"<<numberofset;

//wap to create a number from using digits
// int number=0;
// int digit;
// int numberofdigits;
// cout<<"Enter the number of digits you want to make a number :";
// cin>>numberofdigits;
// for (int i = 0; i < numberofdigits; i++)
// {
//     cin>>digit;
//     number = number*10 + digit;
   
// }
// cout<<number;

// int digit, num = 0;
// cout << "Enter digits one by one, type -1 to stop: ";
// while (true) {
//     cin >> digit;
//     if (digit == -1) break;
//     num = num * 10 + digit;
// }
// cout << "The number created from the digits is: " << num << endl;
// return 0;

//wap to convert cel to frehnheit
//1C = 33.8F
// float c;
// cin>>c;
// cout<<   (c*1.8)+32  <<" f";

//wap to set kth bit
// int num;
// cin>>num;
// int k;
// cin>>k;
// int a ;
// a = 1 << k;
// num = num | a;
// cout<<num;

//wap to reverse an integer
// int num;
// int digit;
// int number=0;
// cin>>num;
// if (num>=0){
// while (num>0)
// {
//     digit = num%10;
//     number = number*10 +digit;
//     num = num/10;
// }
// cout<<number;
// }else{
//     num = num * -1;
// while (num>0)
// {
//     digit = num%10;
//     number = number*10 +digit;
//     num = num/10;
// }
// number = number * -1;
// cout<<number;
// }













return 0;
 }
//  int decimalToBinary1(int a){  
//     //defination
// int bit = 0;
// int pow = 0;
// int binary = 0;
// while (a>0)
// {
//     bit = a%2;
//     a /= 2;
//     for (int i = 0; i < pow; i++)
//     {
//         bit = bit * 10;
//     }
//     pow++;
//     binary = binary + bit;
// }
// return binary;
//  }