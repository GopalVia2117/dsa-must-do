// check if kth bit is set or not
#include<iostream>
using namespace std;

int maxPieces(int length, vector<int>& pieces, int i){
    if(length == 0) return 0;
    if(i >= pieces.size()) return INT_MIN;
    

    int take = 0, notTake = 0;
    
    if(length >= pieces[i]){
        take = maxPieces(length - pieces[i], pieces, i);
        if(take != INT_MIN) take += 1;
    }
    notTake = maxPieces(length, pieces, i + 1);
    
    return max(take, notTake);
}

int main(){
    cout << maxPieces(5, {2, 5, 1}, 0) << endl;

    return 0;
}

