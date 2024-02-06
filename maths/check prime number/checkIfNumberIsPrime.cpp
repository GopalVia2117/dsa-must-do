#include<iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;

    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    cout << isPrime(17) << endl;
    cout << isPrime(9) << endl;
}