#include<iostream>
#include<vector>
using namespace std;

bool isSort(vector<int> &arr, int n, int i){
    if(i == n-1){
        return true;
    }

    if(arr[i+1] < arr[i]){
        return false;
    }

    return isSort(arr, n, i+1);
}

int main(){

    vector<int> arr = {10,20,30,40,50,60};

    bool issorted = isSort(arr, arr.size(), 0);
    if(issorted){
        cout<<"Array is Sorted"<<endl;
    }else{
        cout<<"Array is not Sorted"<<endl;
    }

    return 0;
}
