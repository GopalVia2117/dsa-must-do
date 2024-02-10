// compute x raise to the power of n
#include<iostream>
using namespace std;

int power(int x, int n){
    if(n == 1) return x;

    int pownby2 = power(x, n / 2);
    int temp = pownby2 * pownby2;
    
    if(n % 2 == 0) return temp;
    return temp * x;
}

int main(){
    cout << power(1, 2) << endl;
    cout << power(10, 3) << endl;
    cout << power(2, 10) << endl;
    cout << power(88, 5) << endl;
    cout << power(77, 3) << endl;
    return 0;
}