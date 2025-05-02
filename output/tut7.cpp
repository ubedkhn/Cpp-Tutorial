#include<iostream>
using namespace std; // this is used to avoid writing std:: before every cout and cin statement
// int c = 21; here c is global variable; it can be accessed anywhere in the program
int main(){ 
    
    //**********build in data types*********** */

// //1.    int a,b,c;

// //    cout<<"enter the value of a:\n"<<endl;
// //    cin>>a;
// //    cout<<"enter the value of b:\n"<<endl;
// //    cin>>b;
// //    c = a+b;

// //    cout<<"the sum is : "<<c<<endl;
// //    cout<<"the global c is :"<<::c<<endl; // this is used to access the g lobal variable c


// //****************float,double and long double Literals************  */
// //2.

// float d = 34.4;
// long double e = 34.4;
// // in cpp 34.4 is considered as double by default
// // to make it float we need to add f or F at the end of the number
// // to make it long double we need to add l or L at the end of the number

// cout<<"the size of 34.4 is :"<<sizeof(34.4)<<endl;//it takes it bydefault as double
// cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl; // this will give the size of float
// cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

// cout<<"the value of d is :"<<d<<endl<<"the value of e is :"<<e<<endl;


// ***********Reference variables************ 

//Ubed Khan ------>Ubed ----->Ubbu -------->Ub

// float x= 455;
// float &y = x; // y is a reference variable of x; & is used to declare a reference variable called empersand
// // y is an alias of x; any change in y will also change x and vice versa

// cout<<x<<endl;
// cout<<y<<endl;



// ***********Typecasting*********
// use to change the data type of a variable to another data type for example int to float or float to int
 int a = 45; 
 float b = 45.5;
//  cout<<"the value of a is : "<<a<<endl; 
cout<<"the value of a is :"<<(float)a<<endl; // this will change the data type of a to float
cout<<"the value of b is :"<<(int)b<<endl;
 
int c = int(b);
cout<<"the expression is "<<a+b<<endl;
cout<<"the expression is "<< a + int(b)<<endl;
cout<<"the expression is "<< a + (int)b<<endl;



return 0;
}
