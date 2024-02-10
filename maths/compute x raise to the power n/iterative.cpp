// compute x raise to the power of n iterative solution
#include<iostream>
using namespace std;

int power(int x, int n){
    int ans = 1;
    while(n > 0){
        if(n % 2 == 1)
            ans *= x;
        
        x *= x;
        n /= 2;

    }
    return ans;
}

int powerbit(int x, int n){
    int ans = 1;
    while(n > 0){
        if(n & 1)
            ans *= x;
        
        x *= x;
        n = n >> 1;
    }
    return ans;
}

int main(){
    cout << power(1, 2) << endl;
    cout << power(10, 3) << endl;
    cout << power(2, 10) << endl;
    cout << power(88, 5) << endl;
    cout << power(77, 3) << endl;
    return 0;
}