#include <bits/stdc++.h>
using namespace std;

void printSubsets(int index, vector<int>& arr, vector<int>& temp) {
    if(index == arr.size()) {
        for(int x : temp) cout << x << " ";
        cout << endl;
        return;
    }

    // include element
    temp.push_back(arr[index]);
    printSubsets(index + 1, arr, temp);

    // exclude element
    temp.pop_back();
    printSubsets(index + 1, arr, temp);
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> temp;

    printSubsets(0, arr, temp);
}