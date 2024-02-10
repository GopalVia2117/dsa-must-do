// check if a string is palindrome
#include<iostream>
using namespace std;

bool isPalindrome(string &s, int i){
    int n = s.size();
    
    if(n == 1) return true;
    if(i == n / 2) return true;
    
    return s[i] == s[n - i - 1] && isPalindrome(s, i + 1);
    
}

int main(){
    cout << isPalindrome("abba", 0) << endl;
    cout << isPalindrome("abcba", 0) << endl;
    cout << isPalindrome("a", 0) << endl;
    cout << isPalindrome("ab", 0) << endl;
    cout << isPalindrome("abcbab", 0) << endl;
    
    return 0;
}

