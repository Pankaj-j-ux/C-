#include<iostream>
using namespace std;

void printDigit(int num){
    if(num == 0){
        return;
    }

    printDigit(num/10);

    cout << num%10 << "  ";
}


int main(){

    int num = 0647;
    
    if(num == 0){
        cout<< "0";
    }else{
        printDigit(num);
    }

    return 0;
}