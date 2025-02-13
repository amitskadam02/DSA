#include<iostream>
using namespace std;
class Shallow{
    private:
    int *ptr;
    
    public:
    Shallow(int value){
        cout<<"Ctor"<<endl;
        ptr = new int (value);
    }
    // shallow copy ctor
    Shallow(const Shallow &source){
        cout<<"Copy Ctor"<<endl;
		// Shallow copy
        // ptr = source.ptr; // copy the pointer(not actual dta)
		
		// Deep Copy
        ptr = new int (*source.ptr);
    }
    void show(){
        cout<<"Ptr:"<<*ptr<<endl;
    }
    ~Shallow(){
        cout<<"dtor"<<endl;
        delete ptr;
    }
    
};
int main(){
    Shallow obj1(20);
    Shallow obj2 = obj1; // shallow copy
    
    obj1.show();
    obj2.show();
    // diuble deletion problem
}