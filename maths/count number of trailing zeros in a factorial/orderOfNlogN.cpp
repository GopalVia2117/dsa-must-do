// Write a program to get number of trailing zeros in the factorial of a number

#include<iostream>
using namespace std;


int trailingZeros(int number){
    int twos = 0;
    int fives = 0;

    for(int j = 1; j<= number; j++){
        int i = j;
        
        while(i % 2 == 0){
            twos++;
            i /= 2;
        }
    
         while(i % 5 == 0){
            fives++;
           i /= 5;
        }
    }
   

    return min(twos, fives);
}

int main(){
    cout << trailingZeros(100);
}