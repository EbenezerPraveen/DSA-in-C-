#include <stdio.h>

int main() {
    int x;

    printf("%d\n", & x);
    printf("%p\n", & x);

    x = 10;

    printf("The address in decimal: %d\n", & x);
    printf("The address in hexa: %p\n", & x);

    printf("The value at address: %p is : %d\n", & x, * & x);
    printf("The value at address: %p is : %d\n", & x, x);

    return 0;
}




//          TRIAL IN C++ SYNTAX 


// #include<iostream>
// using namespace std;

// int main(){
//      int x;

//      cout<< "address in decimal : " << "%d\n",&x ; //decimal value 
//      cout<< "address in hexa value: " << "%p\n",&x ; //hexa value 

     // x = 10;

     // cout<<'address in decimal : '<<"%d",&x; //decimal value 
     // cout<<'address in hexa value: '<<"%p",&p; //hexa value 

     // cout<<&x<<' '<<*x<<' '<<*&x;
// }