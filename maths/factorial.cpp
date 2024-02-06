// Write a program to find  factorial of a number
#include<iostream>
using namespace std;

//recursive implementation O(n) T(n) = T(n - 1) + O(1) S(n) = O(n) Auxiliary space
int rfactorial(int number){
    if(number == 0) return 1;
   return number * rfactorial(number - 1);
}

//iterative implementation O(n) T(n) = T(n - 1) + O(1)  S(n) = O(1)
int ifactorial(int number){
    int factorial = 1;
    
    for(int i = 2; i <= number; i++){
        factorial = factorial * i;
    }
    return factorial;
}



// Make sure the number is in integer range
// Range of integer is 10^9 

int main(){
    cout << "Note: For integer data type the largest integer factorial within integer range possible is: " << 16 << endl;
    cout << "Recursive Test cases: " << endl;
    cout << rfactorial(1) << endl;
    cout << rfactorial(12) << endl;
    cout << rfactorial(3) << endl;
    cout << rfactorial(4) << endl;
    
    
    cout << "Iterative Test cases: " << endl;
    cout << ifactorial(11) << endl;
    cout << ifactorial(16) << endl;
    cout << ifactorial(8) << endl;
    cout << ifactorial(5) << endl;
    
    
}