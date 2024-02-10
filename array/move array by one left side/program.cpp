#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void leftRotate(int arr[], int n){
    int first = arr[0];
   for(int i = 0; i< n - 1; i++){
     arr[i] = arr[(i + 1)];
   }
   arr[n - 1] = first;
}

int main(){
    int arr[] = {8, 0, 10, 0, 10, 0, 11, 23};
    leftRotate(arr, 8);
    print(arr);
    return 0;
}