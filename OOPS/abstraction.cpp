#include <iostream> usingnamespacestd; 



class abstraction{ 
    
    private: 
    
    int a, b;
    
     public: 
     
     // method to set values of private members 
     void set(intx,inty) {
       a = x; 
       b = y; 

       }
     
      voiddisplay() {
         cout<<"a = "<< a <<endl; 
         cout<<"b = "<< b <<endl; 
         
         } 
      
      };
      

       intmain() {
        
         implementAbstraction obj;
         
          obj.set(10,20); 
          obj.display();
          
           return0;
           
            }


            ////////

            #include <iostream>
using namespace std;

// Abstract base class representing a generic vehicle
class Vehicle {
public:
    virtual void start() = 0;  // Pure virtual function for starting the vehicle
    virtual void stop() = 0;   // Pure virtual function for stopping the vehicle
};

// Concrete derived class representing a car
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car started." << endl;
    }

    void stop() override {
        cout << "Car stopped." << endl;
    }
};

// Concrete derived class representing a bicycle
class Bicycle : public Vehicle {
public:
    void start() override {
        cout << "Bicycle started." << endl;
    }

    void stop() override {
        cout << "Bicycle stopped." << endl;
    }
};

// Concrete derived class representing an airplane
class Airplane : public Vehicle {
public:
    void start() override {
        cout << "Airplane started." << endl;
    }

    void stop() override {
        cout << "Airplane stopped." << endl;
    }
};

int main() {
    // Create instances of different vehicles
    Car car;
    Bicycle bicycle;
    Airplane airplane;

    // Start and stop each vehicle
    car.start();
    car.stop();

    bicycle.start();
    bicycle.stop();

    airplane.start();
    airplane.stop();

    return 0;
}
