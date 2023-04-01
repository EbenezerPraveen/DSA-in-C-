#include<iostream>
using namespace std;


void LinearSearch(int arr[], int len, int val){
     for(int i =0; i < len; i++ ){
          if(arr[i]==val){
               cout<<"Found "<<val<<" at : "<<i<<endl;
               return;         // this return here breaks the loop ..... if have to travers further remove it;
          }
     }
     cout<<"Value not found";
}

int main(){
     int a[] = {23,65,93,85,17,39,20};

     //CALCULATING LENGTH OF THE ARRAY 
     int l = sizeof(a)/sizeof(a[0]);

     // cout<<sizeof(a)<<endl;    sizeof(a)    =  28
     // cout<<sizeof(a[0]);       sizeof(a[0]) =   4

     int v = 17;

     LinearSearch(a,l,v);
     return 0;
}