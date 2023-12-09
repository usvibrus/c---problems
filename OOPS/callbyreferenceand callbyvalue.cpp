//INT A FUNCTION PARAMETERS CAN BE PASSED BY TWO METHODS 
// CALL BY VALUE
//CALL BY VALUE

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//1//  CALL BY VALUE


#include <iostream>

// Function to increment a number by 1 (call by value)
void incrementByValue(int num) {
    num++;
}

int main() {
    
    int number = 5;
    incrementByValue(number);
    cout << "Number after incrementByValue: " << number << endl; // Output: Number after incrementByValue: 5
    return 0;
}
// WHEN WE PASS BY VALUE THE ORIFGINAL VALUES NOT CHANGES IT REMAINS SAME , here we are just sending copy of varible
//In this example, the incrementByValue function receives a copy of the number variable.
// Inside the function, it increments the copy, but the original number variable remains unchanged.

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------








//CALL BY REFERENCE


#include <iostream>


int incrementByreference(int &a){


    a++;
}


int main(){

    int a=5;



    incrementByreference(a);


cout << "Number after incrementByreference: " << number << endl; // Output: Number after incrementByValue: 6
    return 0;
}

// this callbyreference directly chages the main variable due to passed by reference

//incrementByReference function receives a reference to the number variable. 
//Inside the function, it increments the original variable, 
//and you can see that the value of number is changed outside the function.

//Call by reference passes a reference to the original variable, allowing changes inside the function to modify the original variable