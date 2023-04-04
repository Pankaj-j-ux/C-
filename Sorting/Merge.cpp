#include<iostream>
#include<vector>
using namespace std;

void merge(int* arr, int s, int e){

    int mid = (s + e)/2;
    vector<int> leftarr(arr+s, arr+mid+1); 
    vector<int> rightarr(arr+mid+1, arr+e+1); 


    int i=0 ,j=0;

    while( i < leftarr.size() && j < rightarr.size()){

        if(leftarr[i] < rightarr[j]){
            arr[s] = leftarr[i];
            i++;
            s++;
        }else{
            arr[s] = rightarr[j];
            j++;
            s++;
        }         
    }

    while(i < leftarr.size()){
        arr[s] = leftarr[i];
        i++;
        s++;
    }

    while(i < rightarr.size()){
        arr[s] = rightarr[j];
        j++;
        s++;
    }
}

void mergeSort(int * arr, int s , int e){

    if( s >= e ){
        return ;
    }

    int mid = (s + e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){

    int arr[] = {7,3,2,10,24,4,11,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    mergeSort(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}