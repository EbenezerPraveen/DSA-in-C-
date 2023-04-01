#include<iostream>
using namespace std;

int fact(int m){
     int factorial = 1;
     for(int i = 1 ; i <= m; i++){
          factorial *= i;
     }
     return factorial;
}

int main(){
     int n,r;
     cin>>n>>r;      // n! / (n-r)! * r!
     int s = n-r;    // You may not need this ....can directly write n-r
     int ncr = fact(n)/(fact(s)*fact(r));
     int npr = fact(n)/fact(s);
     cout<<ncr<<endl;
     cout<<npr<<endl;
}