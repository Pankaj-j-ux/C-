#include<iostream>
using namespace std;


class Demo {

    public:

    static int count ;

    Demo(){
        count++;
    }

};

int Demo::count = 0; 

class Base {
    
    protected:
    
    int value1, value2;

    public:

    Base(int v1, int v2){
        value1 = v1;
        value2 = v2;
    }

    
};

class Derived : public Base{

    private:

    int value3;

    public:

    Derived(int v1, int v2, int v3 ): Base(v1, v2){
        value3 = v3;
    }

    void display(){
        cout << "value 1 : " << value1 << endl
             << "value 2 : " << value2 << endl
             << "value 3 : " << value3 << endl;
    }
};



int main(){

    // Derived D1(1,2,3);
    // Derived D2(4,5,6);

    // D1.display();
    // D2.display();

    // cout << Demo::check;

    Demo D1;
    Demo D2;

    cout << Demo :: count << endl ;
    Demo D3;

    cout << Demo :: count << endl ;
    
    Demo D4;

    cout << Demo :: count << endl ;
  
    return 0;
}