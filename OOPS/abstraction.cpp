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