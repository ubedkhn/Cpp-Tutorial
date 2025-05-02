
// there are 2 types of header files in c++:
// 1. system header files: it comes with the compiler
#include<iostream>
// 2. user defined header files: it is written by the user
// #include"tut1.cpp" // this is a user defined header file --> this will produce an error if tut1.cpp is not in the same directory as this file 
using namespace std;   

int main() {
    int a=4, b=5;
   cout<<"operator precedence in c++:"<<endl;//<<endl to jump in the next line
   cout<<"following are the types of operators in c++:"<<endl;
  // 1. Arithmetic operators
cout<<"the value of a+b is : "<<a+b<<endl; // + operator is used to add two numbers
cout<<"the value of a-b is : "<<a-b<<endl; // - operator is used to subtract two numbers
cout<<"the value of a*b is : "<<a*b<<endl; // * operator is used to multiply two numbers
cout<<"the value of a/b is : "<<a/b<<endl; // / operator is used to divide two numbers
cout<<"the value of a%b is : "<<a%b<<endl; // % operator is used to find the remainder of two numbers
cout<<"the value of a++ is : "<<a++<<endl; // ++ operator is used to increment tbhe value of a by 1
cout<<"the value of a-- is : "<<a--<<endl; // -- operator is used to decrement the value of a by 1
cout<<"the value of ++a is : "<<++a<<endl; // ++ operator is used to increment the value of a by 1
cout<<"the value of --a is : "<<--a<<endl; // -- operator is used to decrement the value of a by 1
cout<<endl;

//2. Assignment operators
cout<<"following are the types of assignment operators in c++:"<<endl;
int x=5, y=6;
char z='d';
cout<<"the value of x is : "<<x<<endl; //used to assign values to variables; = operator is used to assign the value of x to 5
cout<<"the value of y is : "<<y<<endl; //used to assign values to variables; = operator is used to assign the value of y to 6
cout<<"the value of z is : "<<z<<endl; //used to assign values to variables; = operator is used to assign the value of z to 'd'
cout<<endl;


//3. Comparison operators --> compare two values and return true or false
cout<<"following are the types of comparison operators in c++:"<<endl;
cout<<"the value of x==y is : "<<(x==y)<<endl; // == operator is used to compare two values and return true or false
cout<<"the value of x!=y is : "<<(x!=y)<<endl; // != operator is used to compare two values and return true or false
cout<<"the value of x>y is : "<<(x>y)<<endl; // > operator is used to compare two values and return true or false        
cout<<"the value of x<y is : "<<(x<y)<<endl; // < operator is used to compare two values and return true or false
cout<<"the value of x>=y is : "<<(x>=y)<<endl; // >= operator is used to compare two values and return true or false
cout<<"the value of x<=y is : "<<(x<=y)<<endl; // <= operator is used to compare two values and return true or false
cout<<endl;

//4. Logical operators --> used to combine two or more conditions; brother of comparison operators
cout<<"following are the types of logical operators in c++:"<<endl;
cout<<"the value of this logical and operator ((a==b)&& (a<b)) is :"<<((x==y) && (x<y))<<endl; // && operator is used to combine two conditions and return true or false

cout<<"the value of this logical or operator ((x==y) && (x<)y) is :"<<((x==y) || (x<y))<<endl;
    return 0;
}