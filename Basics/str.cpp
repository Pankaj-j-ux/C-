#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> &arr, int i ,vector<vector<int>> &ans, vector<int> &output){
    if(i == arr.size()){
        return;
    }


    for(int it = i; it<arr.size(); it++){
        
        output.push_back(arr[it]);
        ans.push_back(output);
        solve(arr, it+1, ans, output);
        
        output.pop_back();
    }
}

int main(){
    
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    
    
    solve(arr, 0, ans, output);
    

     
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j< ans[i].size(); j++){
            cout<<ans[i][j]<< " " ;
        }

        cout<<endl;
    }

 
    return 0;
}