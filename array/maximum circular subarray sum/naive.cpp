#include<iostream>
#include<vector>
using namespace std;

int maxCircularSubArraySum(vector<int> arr){
   
    int maxi = arr[0];
  
    for(int i = 0; i < arr.size(); i++){
        int local_max = arr[i];
        int prev = arr[i];
        for(int j = i + 1; j < i + arr.size(); j++){
            prev = max(prev + arr[j % arr.size()], arr[j % arr.size()]);
            local_max = max(local_max, prev);
        }
        maxi = max(maxi, local_max);
    }

    return maxi;
}
int main(){
    vector<int> arr = {10, 3, 7, -6, 5, 4, -11, 10, 8};
    cout << maxCircularSubArraySum(arr) << endl;
    return 0;
}