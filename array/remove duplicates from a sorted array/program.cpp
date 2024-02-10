#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int start = 0;

    int i = 1;
    while(i < n){
        if(arr[i] == arr[start]){
            i++;
            continue;
        }
        else{
            arr[start + 1] = arr[i];
            start++;
            i++;
        }
    }

    return start;
}

int main(){
    int arr[] = {10, 15, 20, 30, 40, 45, 50};
    cout << removeDuplicates(arr, 7) + 1 << endl;
    return 0;
}