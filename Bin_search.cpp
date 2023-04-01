#include<iostream>
using namespace std;


// Recursive way of binary search 

int Binsch(int arr[], int l, int r, int t){
    if(r>=l){
        int m = (r+l)/2;

        if (t==arr[m])
        {
            return m;
        }
        else if (t<arr[m])
        {
            return Binsch(arr,l,m-1,t);
        }
        else
        {
            return Binsch(arr,m+1,l,t);
        }
    }
    else
    {
        return -1;
    }
}

int main(){
    int arr[]={2,6,8,35,57,69,90};
    int target=8;
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]);
    // cout<<right;
    int ans = Binsch(arr,left,right,target);
    cout<<"position of target value : "<<ans<<endl;
}