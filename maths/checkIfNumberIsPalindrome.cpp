// Write a program to check if a number is palindrome

#include<iostream>
using namespace std;

bool isPalindrome(int number){
    int duplicate = number;
    int revNumber = 0;
    
    while(duplicate > 0) {
        int rem = duplicate % 10;
        duplicate /= 10;
        revNumber = revNumber * 10 + rem;
    }
    return number == revNumber;
}


// Make sure the number is in integer range
// Range of integer is 10^9 

int main(){
    cout << isPalindrome(1) << endl;
    cout << isPalindrome(123456) << endl;
    cout << isPalindrome(83738) << endl;
    cout << isPalindrome(45254) << endl;
}