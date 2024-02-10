#include<iostream>
#include<vector>
using namespace std;

int maxEvenOddSubarray(vector<int> arr){
   int len = 1;
    int count = 1;
    for(int j = 1; j < arr.size(); j++){
        if((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) ||
            (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0)){
                count++;
                len = max(len, count);
            }
        else{
            count = 1;
        }
    }
  
    return len;
}
int main(){
    vector<int> arr = {10, 3, 7, 6, 5, 4, 11, 10, 8};
    cout << maxEvenOddSubarray(arr) << endl;
    return 0;
}