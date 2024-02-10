// check if kth bit is set or not
#include<iostream>
using namespace std;

int sumOfDigits(int number){
    if(number == 0) return 0;
    
    return number % 10 + sumOfDigits(number / 10);
    
}

int main(){
    cout << sumOfDigits(10089762) << endl;
    cout << sumOfDigits(123456789) << endl;
    cout << sumOfDigits(1) << endl;
    cout << sumOfDigits(0) << endl;
    
    return 0;
}

