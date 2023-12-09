//Polymorphism = 
Polymorphism is considered one of the important features of Object-Oriented
Programming. Polymorphism is a concept that allows you to perform a single action in
different ways. Polymorphism is the combination of two Greek words.
The poly means many, and morphs means forms. So polymorphism means many forms. 
Let’s understand polymorphism with a real-life example.

Real-life example:  A person at the same time can have different characteristics. 
Like a man at the same time is a father, a husband, and an employee. 
So the same person possesses different behavior in different situations. 
This is called polymorphism.

                                                     
                                                     polymorphism
                                                     /      \
                                                    /        \
                                                   /          \ 
                                                            run time polymorphism
                                            compile                      \
                                            time                          \
                                            polymorphism   
                                               (Static)                     \
                                              /      \                      virtual final
                                             /        \
                                            /          \
                                           function     \
                                           overloading   \
                                                   
                                                        operator
                                                        overloading




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//function Over loading

class polymorphism{




   public:


    int add(int a,int b,int c){

      return a+b+c;
    }

    int add(int a,int b){
      return a+b;
    }



};

int main{


polymorphism pr;

pr.add(1,2); // in this the add funtion with two parameters will be called


pr.add(1,2,3);

//int this the function whith three prarmeters will be called



}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////