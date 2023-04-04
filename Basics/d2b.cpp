#include <iostream>
using namespace std;

int main(){

    int dNum = 15;
    int bNum = 0;
    int multipliyer = 1;
    while(dNum != 0){

        int bit = dNum&1;
        dNum = dNum>>1; 

        bNum = bit * multipliyer + bNum;
        multipliyer *= 10;
    }
    cout << bNum;

    // int dNum = 10;
    // int bNum = 0;
    // int multipliyer = 1;
    // while(dNum !=0){

    //     int bit = dNum%2;
    //     dNum = dNum/2; 

    //     bNum = bit * multipliyer + bNum;
    //     multipliyer *= 10;
    // }
    // cout << bNum;

    return 0;
}