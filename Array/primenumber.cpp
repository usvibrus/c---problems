#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}




int main() {
    int n;
    cin>>n;
  

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
/////////////////////////////////////////////////////

cheaking if number is prime or not


int n;
cin>>n;

bool flag=true;
for(int i=0;i<n/2;i++){

if(n%i==0){
flag=false;


}


}

if(flag){
    cout<<"prime";
}else{cout<<"not prime";ou}