#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int> water){
    int res = 0;

    for(int i = 1; i < water.size() - 1; i++){
        int lmax = water[i];

        for(int j = 0; j < i; j++){
            lmax = max(lmax, water[j]);
        }

        int rmax = water[i];
        for(int j = i + 1; j < water.size(); j++){
            rmax = max(rmax, water[j]);
        }

        res = res + min(lmax, rmax) - water[i];
    }

    return res;
}
int main(){
    vector<int> water = {2, 0, 2};
    cout << maxWater(water) << endl;
    return 0;
}