#include<iostream>
using namespace std;

int moveZerosToEnd(int arr[], int n){
    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {8, 0, 10, 0, 10, 0, 11, 23};
    cout << moveZerosToEnd(arr, 8) << endl;
    return 0;
}