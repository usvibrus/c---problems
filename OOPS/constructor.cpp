#include <bits/stdc++.h>
using namespace std;

class Uday{


public:


Uday(){ cout<<"THIS IS DEFAUNT CONSTRUCTP"; }; //default constuctor

Uday(int a,int b){ // parametrize constructor

    cout<<a<<b;
};



};


int main(){





    
    Uday * n = new Uday(); // this will print "THIS IS DEFAUNT CONSTRUCT
    
    Uday * n = new Uday(12, 13); // this will print 12 13
    
    
    
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
A constructor is a special member function automatically 
called when an object is created. In C++, the constructor is automatically called when an object is created. 
It is a special class method because it does not have any return type. 
It has the same name as the class itself. A constructor initializes the class data members with garbage value 
if we don,t put any value to it explicitly. The constructor must be placed in the public section 
of the class because we want the class to be instantiated anywhere.
 For every object in its lifetime constructor is called only once at the time of creation.

 constructor 
 ❖ has the same name as the class, 
 ❖ does not have any return type, and
 ❖ it is public
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

classsmartphone{
    
     //Data Members(Properties) 
     stringmodel; intyear_of_manufacture; 
     bool_5g_supported;



// copy constructor 
smartphone(smartphone &obj){
     // copies data of the obj parameter 
     model = obj.model; year_of_manufacture = obj.year_of_manufacture; 
     _5g_supported = obj._5g_supported; } 
     
     };


     intmain(){ 
        //creating objects of smartphone class 
        // using default constructor smartphone unknown;
         // using parameterized constructor
          smartphoneiphone("iphone 11",2019,false); 
          // using copy constructor 
          smartphoneiphone_2(iphone);
           }






/////////////EXAMPLE CODE // OF PARAMETRISE CONSTRUCTOR
#include <iostream>
using namespace std;



class Student{
  
  public:
  
  string name;
  int rool;
  
  
  Student(int num){
    rool=num;
    
  }
  
  
  void print(){
    
    
    cout<<name<<"  "<<rool;
  }
};




int main() 
{
  int rool=12;
  string Name ="fwgwrg";
  Student *s = new Student(rool);
 
  s->name=Name;
  s->print();
}