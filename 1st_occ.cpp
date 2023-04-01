#include<iostream>
using namespace std;


// // This is an iterative way 
// int main(){
//      int arr[] = {3,6,2,0,5,7,2,4,5};
//      int val = 5;
//      for(int i=0;i<sizeof(arr);i++){
//           if(arr[i]==val){
//                cout<<i<<endl;
//                break;
//           }
//           // returns the correct answer 
//      }
//      return 0;
// }


// // This is recursive way 
// It didnt work 
// int firocc(int arr[], int size, int v){
//      int i = 0;
//      if(arr[i]==v){
//           return i;
//      }
//      firocc(arr[],size,++i);
// }

// int main(){
//      int arr[]={3,5,7,2,4,5};
//      int val = 5;
//      int ans = firocc(arr,sizeof(arr),val);
//      cout<<ans<<endl;
// }





int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    if(input[currIndex] == x){
        return currIndex;
    }

    return firstIndex(input,size,x,currIndex+1);
    
}

int main(){
    int input[] = {3,4,6,7,8,5,7,2,4,5};
    int x = 5;
    int size = sizeof(input);

    cout<<firstIndex(input,size,x,0);

    return 0;
}
