// print all divisors of a number in sorted order

#include<iostream>
using namespace std;

void printDivisors(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cout << i << endl;
    }
}

int main(){
    printDivisors(35);
    printDivisors(100);
    printDivisors(1024);
    return 0;
}