// print all divisors of a number

#include<iostream>
using namespace std;

void printDivisors(int n){
    int i;
    for(i = 1; i* i < n; i++){
        if(n % i == 0) cout << i << endl;
    }

    for(; i >= 1; i--){
        if(n % i == 0) cout << n / i << endl;
    }
}

int main(){
    printDivisors(256);
    printDivisors(768);
    printDivisors(9999);
    return 0;
}