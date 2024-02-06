// Write a program to get number of trailing zeros in the factorial of a number

#include<iostream>
using namespace std;


int trailingZeros(int number){
    int fives = 0;

    for(int j = 5; j<= number; j = j * 5){
        fives += number / j;
    }
   

    return fives;
}

int main(){
    cout << trailingZeros(100);
}