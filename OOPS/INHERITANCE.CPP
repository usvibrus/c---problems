#include <iostream>
using namespace std;


class polymorphism{
  
  
  public:
   
    int add(int a,int b){
      return a+b;
    }
    
    int add(int a,int b,int c){
      
      return a+b+c;
      
    }
  
  
  
};




class derived : public polymorphism{
  
  
  
  
  
};


int main() 
{
   derived ex;
   
   cout<<ex.add(1,2,3);
   
}
//acess specifier defines the type of class from which we are exporting , the parent class is private or public



//single level 
  
  parent class
     |
     |
 child class







