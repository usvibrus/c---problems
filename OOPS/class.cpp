class ani{

 public:

 bool uday =true;
 bool ankit= true;
 bool sojma = true;


 void fun(){
    cout<<"this is function";
 }

};



int main(){


ani c1;

c1.fun(); // acessing the data of class using object

c1.ankit




}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream> 
Using name spacestd; 
// creating Animal class 

class Animal{ 
    
    boolgives_birth; 
    bool lay_egg;
    
    }

    int main(){


Animal mammal;
//assign values to instance variables
 mammal.gives_birth =true;
  mammal.lay_egg =false;


    }


    /////////  Syntax to create an object dynamically in C++:
     class_name * objectName =newclass_name();



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

     #include <iostream> usingnamespacestd; 
     //creating class 
     class smartphone{ 
        //class body 
        //Data Members(Properties) 
        string model;  
        int year_of_manufacture; 2
        bool_5g_supported; 
        //Constructor 
        smartphone(stringmodel_string,intmanufacture,bool_5g_){ 
            //initialzing data members
             model = model_string;
              year_of_manufacture = manufacture;
               _5g_supported = _5g_; } 
               //methods 
               voidprint_details(){ 
                cout<<"Model : "<< model <<endl; 
                cout<<"Year of Manufacture : "<< year_of_manufacture<<endl; 
                cout<<"5g Supported : "<< _5g_supported<<endl; }
                 }; 
                 
                 
                 intmain(){ 
                    //creating objects of smartphone class 
                    
                    smartphoneiphone("iphone 11",2019,false); 
                    smartphoneredmi("redmi note 11 t",2021,true); 
                    smartphoneoneplus("oneplus nord",2020,true);
                    
                     //accessing class variables 
                     int iphone_manufacture_date = iphone.year_of_manufacture; 
                     bool redmi_support_5g = redmi._5g_supported; 
                     string oneplus_model = oneplus.model;
                      //calling methods on objects 
                      iphone.print_details(); 
                      redmi.print_details(); 

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                     