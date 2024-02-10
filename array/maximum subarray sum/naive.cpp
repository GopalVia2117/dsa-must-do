#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
   int maxi = arr[0];
   
   for(int i = 0; i < arr.size(); i++){
        int local_max = 0;
        for(int j = i; j < arr.size(); j++){
            local_max += arr[j];
            maxi = max(maxi, local_max);
        }
   }
   return maxi;
}
int main(){
    vector<int> arr = {-10, -3, -8, -7, -1, -2, -3};
    cout << maxSubarraySum(arr) << endl;
    return 0;
}