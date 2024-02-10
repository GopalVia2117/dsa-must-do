// check if kth bit is set or not
#include<iostream>
using namespace std;

//check if last bit is set or not
bool isSetLast(int n){
    return (n & 1 > 0);
}

// check if kth bit from last  is set or not
bool isSet(int n, int k){
    return (n & (1 << (k - 1)) != 0); // or (n & (1 >> (k - 1))) != 0
}

int main(){
    cout << isSetLast(7) << endl;
    cout << isSetLast(8) << endl;

    cout << isSet(8, 3) << endl;
    cout << isSet(8, 4) << endl;
    return 0;
}