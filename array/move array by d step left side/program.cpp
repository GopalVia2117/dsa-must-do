#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void leftRotateByD(int arr[], int n, int d){
    if(d == 1) return;
    int d = d  % n;
    reverse(arr, arr + n);
    reverse(arr, arr + n - d);
    reverse(arr + n - d, arr + n);
}

int main(){
    int arr[] = {8, 0, 10, 0, 10, 0, 11, 23};
    leftRotateByD(arr, 8, 4);
    print(arr, 8);
    return 0;
}