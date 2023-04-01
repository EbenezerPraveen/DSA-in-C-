// //{ Driver Code Starts
// #include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // } Driver Code Ends
// class Solution
// {
//     public:
//     //Function to sort an array using quick sort algorithm.
//     void quickSort(int arr[], int low, int high)
//     {
//         // code here
//         if(low < high){
//             int pi = partition(arr,low,high);
//             quickSort(arr,low,pi-1);
//             quickSort(arr,pi+1,high);
//         }
//     }
    
//     public:
//     int partition (int arr[], int low, int high)
//     {
//        // Your code here
//        int pivot = arr[high];
//        int i = (low-1);
//        for(int j=low ; j <= high-1 ; j++){
//            if(arr[j] < pivot){
//                i++;
//                swap(arr[i],arr[j]);
//            }
//        }
//        swap(arr[i+1],arr[high]);
//        return (i+1);
//     }
// };


// //{ Driver Code Starts.
// int main()
// {
//     int arr[1000],n,T,i;
//     scanf("%d",&T);
//     while(T--){
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//       scanf("%d",&arr[i]);
//       Solution ob;
//     ob.quickSort(arr, 0, n-1);
//     printArray(arr, n);
//     }
//     return 0;
// }
// // } Driver Code Ends


// // --------------- Above was Geeksforgeeks competitive one 


#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int x,int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int partition(int arr[],int l, int r){
    int pivot=arr[r];
    int i =l-1;

    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);    
        quicksort(arr,pi+1,r);    
    }
}

int main(){
    int arr[]={70,90,10,30,50,20,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size-1);
    display(arr,size);
    return 0;
}