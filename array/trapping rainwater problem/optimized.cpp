#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int> water){
    int res = 0;
   int lmax[water.size()] = {0};
   int rmax[water.size()] = {0};

  lmax[0] = water[0];
   for(int i = 1; i < water.size(); i++){
    lmax[i] = max(lmax[i - 1], water[i]);
   }

  rmax[water.size() - 1] = water[water.size() - 1];
   for(int i = water.size() - 2; i >= 0; i--){
    rmax[i] = max(rmax[i + 1], water[i]);
   }

   for(int i = 0; i< water.size(); i++){
    res += min(lmax[i], rmax[i]) - water[i];
   }
   return res;
}
int main(){
    vector<int> water = {2, 0, 2};
    cout << maxWater(water) << endl;
    return 0;
}