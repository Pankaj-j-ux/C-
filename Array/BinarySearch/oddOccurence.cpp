#include<iostream>
#include<vector>
using namespace std;

int oddOccurence(vector<int> &arr, int size){
    int s=0, e=size-1, mid=(s+e)/2;
    
    if(size == 1){
        return 0;
    }

    while(s<=e){
        if(s == e){
            return s;
        }

        if(mid%2 == 0){
            if(mid+1 < size && arr[mid] == arr[mid+1]){
                s = mid+2;
            }else{
                e = mid;
            }
        }else{
            if(mid+1 < size && arr[mid] == arr[mid+1]){
                e = mid-1;
            }else{
                s= mid+1;
            }
        }

        mid=(s+e)/2;
    }

    return -1;
}

int main(){

    vector<int> arr = {2,1,1,2,2,600,600,3,3,4,4,3,3,600,600,4,4};

    cout<< "Index of Odd Occurig Element is : "<< oddOccurence(arr, arr.size())<< endl; 
    cout<< "Odd Occurig Element is : "<< arr[oddOccurence(arr, arr.size())]; 

    return 0;
}