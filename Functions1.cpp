//Syntax of a fucntion 
// return_type function_name(parameter1, parameter2,....){
//     function body 
// }

//     A function to add two integers 

#include<iostream>
using namespace std;

int add(int n1, int n2){
     int sum = n1+n2;
     return sum;
}

int main(){
     int a,b;
     cin>>a>>b;

     int ans = add(a,b);
     cout<<ans<<endl;
}