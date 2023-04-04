#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> arr, int n, int i){
    if(i>=n){
        return;
    }

    cout<< arr[i]<<" ";
    printArr(arr, n, i+1);
    
}


int main(){
    
    vector<int> arr = {1,2,3,4,5,6};

    printArr(arr, arr.size(), 0);

    return 0;
}