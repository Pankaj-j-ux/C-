#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

int findMissing(vector<int> &arr, int size){

    int left = 0, right = size-1, mid;

    while(left<= right){
        mid = right + ( left - right)/2;

        if(arr[mid] != mid+1  && arr[mid-1] == mid){
            return mid+1;
        }

        if(arr[mid] == mid+1){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }

    return -1;
}

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    if(findMissing(arr, arr.size()) == -1){
        cout<<"No element is missing" << endl;
    } else {
        cout << findMissing(arr, arr.size()) << " is missing";
    }
    
    return 0;
}