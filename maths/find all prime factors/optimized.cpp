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
    
    if(n <= 1) return;
    
    while(n % 2 == 0){
        cout << 2 << endl;
        n /= 2;
    }
    
    while(n % 3 == 0){
        cout << 3 << endl;
        n /= 3;
    }
    
    for(int i = 5; i * i <= n; i += 6){
            while(n % i == 0){
                cout << i << endl;
                n /= i;
            }
            while(n % (i + 2) == 0){
                cout << i + 2 << endl;
                n /= (i + 2);
            }
        
    }
    
    if(n > 3) cout << n << endl;
}


int main(){
    printPrimeFactors(45);
    printPrimeFactors(1111);
    printPrimeFactors(36);
    printPrimeFactors(474);
}