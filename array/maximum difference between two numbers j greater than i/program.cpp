#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int maxDifference(int arr[], int n){
   int mini = arr[0];
    int max_diff = INT_MIN;

   for(int i = 1; i < n; i++){
     max_diff = max(max_diff, arr[i] - mini);
     mini = min(mini, arr[i]);
   }

   return max_diff;
}

int main(){
    int arr[] = {-8, 0, 10, 0, 10, 0, 100, 23};
    cout << maxDifference(arr, 8);
  
    return 0;
}