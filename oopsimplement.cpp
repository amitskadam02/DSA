// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

// Base Class: Generic Cruise COntrol
class CruiseControl{
    private:
    protected:
    int speed;
    public:
    CruiseControl(int s): speed{s}{}// ctor
    void displaySpeed(){
        cout<<"Current Speed:"<<speed<< "Km/h"<<endl;
    }
    virtual void controlSpeed(){
        cout<<"Adjusting speed in normal mode..."<< endl;
    }
    ~CruiseControl{cout<<"dtor called"<<endl;}
};
class ACC : public CruiseControl{
    private:
    int safeDistance; // private data
    public:
    ACC(int s, int d): CruiseControl(s), safeDistance(d){}// constructor
    void setSafeDistance(int d){safeDistance = d;} // setter
    int getSafeDistance(){return safeDistance;} // getter
    
    void adjustSpeed(){
        if (safeDistance < 10){
            speed -= 10; //reduce speed in emegency (Abstarction driver dosent need to know how the system is working.)
            cout<<"Emergency Braking! Slowing down...."<<endl;
        } else {
            cout<<"Mainitaning speed...."<< endl;
        }
    }
    
    void controlSpeed() override{
        cout<<"Adjusting speed in adaptive mode..."<< endl;
    }
};
class EmergencyACC : public ACC {
    public:
    EmergencyACC(int s, int d) : ACC(s, d){}
    
    void emergencyBrake(){
        speed = 0;
        cout<<"Emergency Brake Activated STopping vehicle" << endl;
    }
    
    void controlSpeed() override{
        cout<<"Emergency stop activated..."<< endl;
    }
};

int main() {
    // Write C++ code here
    cout << "Try programiz.pro";
    ACC* acc1 = new AdaptiveACC();
    ACC* acc2 = new EmergencyACC();
    
    acc1->controSpeed(); // Adjusting speed in adaptive mode
    acc2->controlSPeed(); // Emergency stop activated

    return 0;
}