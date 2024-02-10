// check if kth bit is set or not
#include<iostream>
using namespace std;

int helper(int number){
    if(number == 0) return 0;

    return number % 10 + helper(number / 10);
}

int digitalSum(int number){
    if(number / 10 == 0) return number;

    return digitalSum(helper(number));
}

int main(){
    cout << digitalSum(456) << endl;
    cout << digitalSum(123456789) << endl;
    cout << digitalSum(1) << endl;
    cout << digitalSum(0) << endl;
    cout << digitalSum(777) << endl;

    return 0;
}

