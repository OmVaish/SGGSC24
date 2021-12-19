#include <iostream>
using namespace std ;
int main(){
    int num1 , num2 ,addition , subtraction, product, quotient ,modulus ;
  //It is a basic calculator code for simply doing operation on two numbers only 
  /*THIS CALCULATOR IS ONLY FOR SMALL NUMBERS WITHIN 4 TO 5 DIGITS. 
  AND ALSO IT WILL NOT SHOW FULL VALUE IF RESULT WILL BE IN DECIMAL , FOR THAT YOU CAN USE FLOAT DATA TYPE */
  
    cout<<"WRITE num1 :  \n" ;         
    cin>>num1 ;
    cout<<"Write num2 :   \n" ;
    cin>>num2 ;
    addition = num1 + num2 ;
    subtraction = num1 - num2 ;
    product = num1*num2 ;
    quotient = num1/num2 ;
    modulus = num1 % num2 ;             //(%) is the modulus operator used for finding remainder 
    cout<<"Sum is " <<addition << "\n" ;
    cout<<"Difference is " <<subtraction <<"\n" ;
    cout<<"Product is " <<product <<"\n" ;
    cout<<"Modulus :" <<modulus << "\n" ;
    cout<<"Quotient : " << quotient ;
    return 0;
}
