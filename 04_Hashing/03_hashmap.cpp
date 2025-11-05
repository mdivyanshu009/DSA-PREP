#include <iostream>
#include <map>
using namespace std;

int main() {
    //Creating Array
    int arr[12]={1,2,3,3,4,5,6,7,8,1,2,3}; 

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < 12; i++) {
        mp[arr[i]]++;
    }

    int q;
    cout << "No of Query:" << endl;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }
    return 0;
}