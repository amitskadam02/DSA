#include<iostream>

using namespace  std;


// run time polymorphism

class Base{
    public:
    virtual void show(){
        cout<<"Inside Base Class"<<endl;
    }
};

class Derived: public Base{
    public:
    void show(){
        cout<<"Inside Derived Class"<<endl;
    }
};

int main(){
    Base* b = new Derived();
    b->show();
    
    return 0;
}