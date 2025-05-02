// *********Control Structures**********
//******basic control structure****** 

//1. Sequential Control Structure---> 

//entry do action 1 --->  action 2 ---> action 3 ---> exit

//2. Selection Control Structure---> 

//entry ----> condition ---> if true ---> action 1---> if false ---> action 2---> exit ; real life example is if you are in a traffic signal and the signal is red then you have to stop your vehicle and wait for the green signal, if the signal is green then you can go ahead.
// if false ---> action 2---> exit
// if true ---> action 1---> exit

//3. Loop Control Structure--->

//entry---> condition---> if true ---> Action A --->Again entry ---> condition ---> if true ---> Action A (repeat chain from entry to action until condition is true) ---> if false ---> Action B ---> Exit

// for example - printing natural no upto 10k. consider i is less than 10k yes, i=1 increment , loop(entry, condition, if yes repeat), i=2 yes less than 10k , loop untill i=10k then false action 2 , i is not less than 10k exit

// TYPES OF MODELING 

//1.  IF-ELSE Statement 
//2.  IF-ELSE Ladder
//3.  Switch case 

#include <iostream>
#include <iomanip> 

using namespace std;

int main(){

// //****selection control structure IF ELSE *********
    int age;
    cout<<"Enter your age: ";
    cin>>age;
//     if((age<18) && (age>0)){
//         cout<<"you are not allowed to party"<<endl;
//     }
//     else if(age==18){
//         cout<<"you are a kid and you will get a kid pass to the party"<<endl;
//     }
//     else if(age<1){
//         cout<<"you are not born yet"<<endl;
//     }
    
//     else{
//         cout<<" you can come to the party"<<endl;
//     } 

// //****selection control structure : Switch Case*********

switch (age) 
{
case 18:
    /* code */
    cout<<"you are 18"<<endl;
    break; //jhn pr tum ho usko tod kr bhr nikl jao
    
    case 22:

    cout<<"you are 18"<<endl;
    break;

    case 2:

    cout<<"you are 2 "<<endl;
break;



default:
cout<<"No special cases"<<endl;
    break;
}
     return 0;
}
     



