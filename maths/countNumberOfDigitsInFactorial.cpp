#include<iostream>
using namespace std;

int digitsInFactorial(int N)
 {
        if(N == 0 || N == 1) return 1;
        
        double temp = ((N * log10(N / M_E) + log10(2 * M_PI * N) / 2.0));
        
        return floor(temp) + 1;
}

int main(){
    cout << digitsInFactorial(120) << endl;
}