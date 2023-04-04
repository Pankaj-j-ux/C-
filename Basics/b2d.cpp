#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int BNum = 1010;
    int DNum = 0;

    int factor = 0;
    while(BNum != 0){
        int digit = BNum % 10;
        BNum = BNum /10;

        DNum = digit * pow(2,factor) + DNum;
        factor++;
        
    }
    
    cout<<DNum;
    return 0;
}