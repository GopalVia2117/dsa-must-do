#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int maxNormal(vector<int> arr){
    int maxi = arr[0];
    int prev = arr[0];

    for(int i = 1; i < arr.size(); i++){
        prev = max(prev + arr[i], arr[i]);
        maxi = max(maxi, prev);
    }
    return maxi;
}
int maxCircularSubArraySum(vector<int> arr){
    int maxi = maxNormal(arr);
    if(maxi < 0) return maxi;
    
    int mini = arr[0];
    int prev = arr[0];

    int sum = accumulate(arr.begin(), arr.end(), 0);

    for(int i = 1; i < arr.size(); i++){
        prev = min(prev + arr[i], arr[i]);
        mini = min(mini, prev);
    }
    return sum - mini;
}
int main(){
    vector<int> arr = {-10, -3, -7, -6, -5, -1, -11, -10, -8};
    cout << maxCircularSubArraySum(arr) << endl;
    return 0;
}