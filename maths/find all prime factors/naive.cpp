#include<iostream>
using namespace std;


bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void printPrimeFactors(int n){
    if(n == 2){
        cout << n << endl;
        return;
    }
    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            int x = i;
            while(n % x == 0){
                cout << i << endl;
                x = x * i;
            }
        }
    }
}


int main(){
    printPrimeFactors(45);
    printPrimeFactors(2);
    printPrimeFactors(36);
}