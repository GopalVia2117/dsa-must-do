#include<iostream>
using namespace std;

int maxProfit(vector<int> arr){
    int max_profit = 0;

    
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > arr[i - 1]){
            max_profit += arr[i] - arr[i - 1];
        }
    }

    return max_profit;
}

int main(){
    vector<int> arr = {1, 5, 3, 8, 12};
    maxProfit(arr);
    return 0;
}