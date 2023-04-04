#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int placePivot( int* arr, int s, int e){
    
    int povit = s; 
    
    int count = 0;
    
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= arr[povit]){
            count++ ;
        }
    }

    int correct = s+count;
    swap(arr[povit], arr[correct]);

    int i=s, j=e;   

    while(i < correct && j > correct){

        while(arr[i] <= arr[correct]){
            i++;
        }

        while( arr[j] > arr[correct]){
            j--;
        }

        if(arr[i] > arr[correct] && arr[j] <= arr[correct]){
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }

    return correct;

}

void quickSort(int* arr, int s, int e){

    if(s>=e){
        return ; 
    }

    int correct = placePivot(arr, s, e);

    quickSort(arr, s , correct-1);
    quickSort(arr, correct+1, e);

}

void print(int * arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {20,8,1,3,50,20,30,20,50,50,50,50,4,30};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size-1);

    print(arr, size);

    return 0;
}