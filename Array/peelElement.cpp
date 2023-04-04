#include<iostream>
#include<vector>
using namespace std;

int peekElement(vector<int> &arr, int size){

    int s = 0, e = size-1, mid;

    while( s<= e){
        mid = s + (e-s)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return arr[mid];
        }

        if(arr[mid] < arr[mid+1]){
        // for line I
            s=mid+1;
        }else{
        // for line II
            e = mid-1;
        }

    }


    return -1;


}

int main(){

    vector<int> arr = {0,3,10,11,5,2};

    cout <<  peekElement(arr, arr.size()) ;

    return 0;
}