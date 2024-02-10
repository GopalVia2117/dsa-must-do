// print all prime numbers less than or equal to a number
// sieve of eratosthenes
#include<iostream>
#include<vector>
using namespace std;


void findPrimes(int number, vector<bool>& sieve){
    sieve[1] = false;
    for(int i = 2; i <= number; i++){
        if(sieve[i]){
            for(int j = i * i; j <= number; j += i){
                sieve[j] = false;
            }
        }
    }
}
void printPrimes(int number){
    vector<bool> sieve(number + 1, true);

    findPrimes(number, sieve);

    for(int i = 1; i <= number; i++){
        if(sieve[i] == true) cout << i << " ";
    }
    cout << endl;
}

int main(){
    printPrimes(23);
    printPrimes(63);
    printPrimes(102);
    return 0;
}