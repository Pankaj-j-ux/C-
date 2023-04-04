#include<iostream>
#include<climits>
using namespace std;

int cutSegment(int N, int x, int y, int z){
    if(N==0){
        return 0;
    }

    int maxi = INT_MIN;

    if(N-x >= 0){
        maxi = max(maxi, cutSegment(N-x,x,y,z)+1);        
    }

    if(N-y >= 0){
        maxi = max(maxi, cutSegment(N-y,x,y,z)+1);        
    }

    if(N-z >= 0){
        maxi = max(maxi, cutSegment(N-z,x,y,z)+1);        
    }

    return maxi;

}

int main(){
    
    int N=7; 
    int x=5,y=2,z=2;


    int ans = cutSegment(N,x,y,z);
    if(ans < 0){
        cout<<"Proper Segments are not posible";
    }else{
        cout<<ans;
    }

    return 0;
}