#include <iostream>
#include <iomanip> // for setprecision, means to set the decimal point in float and double for example 2.34567 to 2.35

using namespace std;
int main()

{
    //  int a = 12;
    //  cout<<"the value of a was : "<<a;
    //  int a = 11;
    //  cout<<"the value of a is :"<<a;

    //*******Constant in Cpp******** */

    const int s = 3; // you can define it by any datatype 
    cout<<"the value of s is:"<<s<<endl;
    // a = 23; // it show error because the value of a is constant now
    // cout<<"the value of a is :"<<a; //// it show error because the value of a is constant now 



//*******Manipulators in Cpp*********
// manipulators are used to change the format of the output
//       int x = 2, y = 3, z = 2231;
//       cout<<"the value of x without setw is :"<<x<<endl;
//       cout<<"the value of y without setw is :"<<y<<endl;
//       cout<<"the value of z without setw is :"<<z<<endl;

//       cout<<"the value of x is "<<setw(4)<<x<<endl; // setw is used to set the width of the output
//       cout<<"the value of y is "<<setw(4)<<y<<endl; 
//       cout<<"the value of z is "<<setw(4)<<z<<endl;//it takes 4 spaces for the output of the value of z
      
//       //output of the above code is:

// // the value of x without setw is :2
// // the value of y without setw is :3
// // the value of z without setw is :2231

// // the value of x is    2
// // the value of y is    3
// // the value of z is  2231
// // PS E:\cource\C++ 4000 INR\cpp>
 
// ******Operator Precendence in Cpp*********

// // operator precedence is the order in which the operators are evaluated in an expression

// // for example in the expression 2 + 3 * 4, the multiplication operator has higher precedence than the addition operator, so the expression is evaluated as 2 + (3 * 4) = 14

// #Cpp refrence https://en.cppreference.com/w/cpp/language/operator_precedence


int a = 3, b = 4;
// int c = (a*5)+b; 
// here * has higher precedence than +, so the expression is evaluated as (a*5) + b = 15 + 4 = 19


// the operator precedence is as follows:

//the opetrators which is above use parenthesis to evaluate the expression first and then the operator which is below use paranthesis to evaluate the expression first

// 1. * / % (multiplication, division, modulus)
// 2. + - (addition, subtraction)
// 3. = (assignment operator)
// 4. == (equality operator)
// 5. && (logical AND operator)
// 6. || (logical OR operator)
// 7. ! (logical NOT operator)
// 8. < > <= >= (relational operators)
// 9. & (bitwise AND operator)
// 10. | (bitwise OR operator)
// 11. ^ (bitwise XOR operator)
// 12. ~ (bitwise NOT operator) 
// 13. << >> (bitwise left shift and right shift operators)
// 14. ?: (ternary operator)
// 15. , (comma operator)
// 16. sizeof (size of operator)
// 17. typeid (type id operator)
// 18. new (dynamic memory allocation operator)
// 19. delete (dynamic memory deallocation operator)
// 20. new[] (dynamic memory allocation operator for arrays)
// 21. delete[] (dynamic memory deallocation operator for arrays)
// 22. -> (member access operator)
// 23. . (member access operator)
// 24. :: (scope resolution operator)
// 25. ->* (pointer to member operator)
// 26. .* (pointer to member operator)
// 27. & (address of operator)
// 28. * (dereference operator) 
// 29. ++ (increment operator)
// 30. -- (decrem ent operator)  
int c = ((((a*5)+b)-45)+87);
cout<<"the value of c is :"<<c<<endl;
    return 0;
}