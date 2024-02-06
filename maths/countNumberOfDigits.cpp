// Write a program to count the number of digits in a number

#include<iostream>
using namespace std;

int count(int number){
    if(number == 0) return 1;
    int c = 0;
    
    while(number > 0) {
        number = number / 10;
        c++;
    }
    return c;
}


// Make sure the number is in integer range
// Range of integer is 10^9 

int main(){
    cout << count(0) << endl;
    cout << count(123456) << endl;
    cout << count(81938883) << endl;
    cout << count(1) << endl;
}