// compute x raise to the power of n
#include<iostream>
using namespace std;

int power(int x, int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= x;
    }
    return ans;
}

int main(){
    cout << power(1, 2) << endl;
    cout << power(10, 3) << endl;
    cout << power(2, 10) << endl;
    return 0;
}