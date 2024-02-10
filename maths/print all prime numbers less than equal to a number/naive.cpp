// print all prime numbers less than or equal to a number
#include<iostream>
using namespace std;


bool isPrime(int number){
    if(number == 1) return false;

    if(number == 2 || number == 3) return true;
    if(number % 2 == 0 || number % 3 == 0) return false;

    for(int i = 5; i * i <= number; i += 6){
        if(number % i == 0) return false;
        if(number % (i + 2) == 0) return false;
    }

    return true;
}
void printPrimes(int number){
    for(int i = 2; i <= number; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
}

int main(){
    printPrimes(23);
    printPrimes(63);
    printPrimes(102);
    return 0;
}