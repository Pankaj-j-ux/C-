#include<iostream>
using namespace std;

int main(){
    
    // int arr[] = {1,2,3,4,5};
    // cout<< arr << endl; 
    // cout<< &arr << endl; 
    // cout<< arr+1 << endl; 
    // cout<< &arr+1 << endl; 
    // cout<< *(arr+1) << endl;

    int a = 10;
    int &b = a;

    cout<< b << endl;
    cout<< &a << endl;
    cout<< &b << endl;

 

    return 0;
}