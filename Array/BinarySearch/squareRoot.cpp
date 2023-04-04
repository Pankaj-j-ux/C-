#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int squareRoot(int n){
    int s = 0, e = n, mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid*mid == n){
            return mid;
        }

        if(mid*mid > n){
            e= mid-1;
        }else{
            ans = mid;
            s= mid+1;
        }

        mid = s+(e-s)/2;
    }

    return ans;
}

int main(){
    
    int n = 10;
    double ans = (double)squareRoot(n);

    double decival = 0.1;

    for(int i=1; i<=8; i++){        
        for(int j=1; j<10; j++){
            double newval = ans + decival;
            if(newval*newval <= n){
                ans = newval;
                continue;
            }break;
        }

        decival /= 10;
    }

    cout << "Square Root of "<< n << " is : " << ans;
    return 0;
}