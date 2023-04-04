#include<iostream>
#include<vector>
using namespace std;

int findPovit(vector<int> &arr, int size){

    int start=0, end= size-1, mid=(start+end)/2;

    while(start < end){

        if(arr[mid] > arr[mid+1]){
            return mid;
        }

        if(arr[mid] < arr[mid-1]){
            return mid-1;
        }

        if(arr[mid] > arr[start]){
            start = mid+1;
        }else{
            end = mid-1;
        }

        mid=(start+end)/2;
    }

    return start;
}

int main(){
    
    vector<int> arr = {30,45,58,60,100,230};
    cout << "Index of Povit Element is : "<< findPovit(arr, arr.size())<< " and the Povit Element is : "<< arr[findPovit(arr, arr.size())];
 
    return 0;
}