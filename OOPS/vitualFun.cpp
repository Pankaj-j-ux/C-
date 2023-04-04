#include<iostream>
using namespace std;

class Base{

    public:

    virtual void print(){
        cout << "BASE CLASS" << endl;
    }

    // void check(){
    //     cout << "CHECK FROM BASE" << endl;
    // }

};

class Derived : public Base{

    public:
    
    void print(){
        cout << "DERIVED CLASS"  << endl;
    }

    void check(){
        cout << "CHECK FROM DERIVED" << endl;
    }

};

int main(){

    Derived D1;
    // D1.print();

    Base *B1 = &D1;

    B1->print();
    

    return 0;
}