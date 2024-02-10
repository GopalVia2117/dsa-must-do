#include<iostream>
#include<vector>
using namespace std;


void calculateFrequencies(vector<int> arr){
    int freq = 1;
    int c_el = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(c_el == arr[i]){
            freq += 1;
        }
        else{
            cout << c_el << ":" << freq << endl;
            c_el = arr[i];
            freq = 1;
        }
    }

    cout << c_el << ":" << freq << endl;
}
int main(){
    // vector<int> arr = {10, 10, 10, 20, 25, 25, 29, 30, 32, 32};
    vector<int> arr = {10};
    calculateFrequencies(arr);
    return 0;
}