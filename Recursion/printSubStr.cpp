#include<iostream>
using namespace std;

void printSubStr(string& str, string output,int length,int i){
    if(i == length){
       if(output == ""){
        cout <<"#"<<" ";
        return;
       }
       
       cout<<output<<" ";
       return;
       
    }

    // Include
    printSubStr(str, output+str[i], length, i+1);

    // Exclude
    printSubStr(str, output, length, i+1);
}

int main(){
    
    string str = "abcd";
    printSubStr(str,"", str.length(),0);

    return 0;
}