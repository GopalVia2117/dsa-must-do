#include<iostream>
#include<vector>
using namespace std;

int findMajority(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        int local_count = 0;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == arr[i]) local_count++;
        }

        if(local_count > arr.size() / 2){
           return i;
        }
    }
    return -1;
}


int main(){
    // vector<int> arr = {8, 3, 4, 8, 8};
    // vector<int> arr = {3, 7, 4, 7, 7, 5};
    vector<int> arr = {20, 30, 40, 50, 50, 50, 50};
    cout << findMajority(arr) << endl; 
    return 0;
}