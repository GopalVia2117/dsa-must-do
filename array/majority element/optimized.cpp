#include<iostream>
#include<vector>
using namespace std;

int findMajority(vector<int> arr){
    int curr = 0;
    int count = 1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == arr[curr]){
            count++;
        }
        else{
            count -= 1;

            if(count < 0){
                curr = i;
                count = 1;
            }
        }
    }

    if(count > 0) return curr;
    return -1;
}


int main(){
    // vector<int> arr = {8, 3, 4, 8, 8};
    // vector<int> arr = {3, 7, 4, 7, 7, 5};
    vector<int> arr = {20, 30, 40, 50, 50, 50, 50};
    cout << findMajority(arr) << endl; 
    return 0;
}