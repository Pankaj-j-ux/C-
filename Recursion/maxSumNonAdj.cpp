#include<iostream>
using namespace std;

int maxSumNonAdj(int* arr, int n, int i){
    if(i >= n){
        return 0;
    }

    //Exclude...
    int sumA = maxSumNonAdj(arr, n, i+1); 

    //include... 
    int sumB = arr[i] + maxSumNonAdj(arr, n, i+2); 

    return max(sumA, sumB);

}

int main(){
    int arr[] = {2,3,4,5};

    cout<< maxSumNonAdj(arr, 4, 0); 

    return 0; 
}