#include<iostream>
#include<algorithm>
using namespace std;

void leadersInArray(int arr[], int n){
    int cl = arr[n - 1];
    cout << cl << endl;

    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > cl){
            cout << arr[i] << endl;
            cl = arr[i];
        }
    }
}

int main(){
    int arr[] = {10, 5, 6, 7, 8, 9};
    leadersInArray(arr, 6);
  
    return 0;
}