#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionsort(int arr[], int size){
    for(int i=1 ; i<size ; i++){
        int key = arr[i];
        int j = i-1;

        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<' ';
    // }
}

int main(){
    int arr[] = {8,6,4,20,24,2,10,12};
    int s = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,s);
    printarray(arr,s);
}