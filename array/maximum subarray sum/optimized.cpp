#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
   int maxi = arr[0];
   int prev = arr[0];
   for(int i = 1; i < arr.size(); i++){
       prev = max(prev + arr[i], arr[i]);
        maxi = max(maxi, prev);
   }
   return maxi;
}
int main(){
    vector<int> arr = {-10, -3, -8, -7, -1, -2, -3};
    cout << maxSubarraySum(arr) << endl;
    return 0;
}