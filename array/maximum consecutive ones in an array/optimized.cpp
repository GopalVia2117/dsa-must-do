#include<iostream>
#include<vector>
using namespace std;

int maxConsecutiveOnes(vector<int> arr){
    int i = 0;
    int maxi = 0;
    int count = 0;
    while(i < arr.size()){
        if(arr[i] == 1){
            count++;
        }else{
            count = 0;
        }
        maxi = max(maxi, count);
        i++;
    }
    return maxi;
}
int main(){
    vector<int> arr = {0, 1,1,1,1,1,1,0,0,1,1,1,1,1,1,1};
    cout << maxConsecutiveOnes(arr) << endl;
    return 0;
}