#include <iostream>
using namespace std;

int main() {
    //Creating Array
    int arr[12]={1,2,3,3,4,5,6,7,8,1,2,3};

    //Creating HashArray
    int hash[13] = {0};
    for (int i = 0; i < 12; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "No of Query:" << endl;
    cin >> q;
    while (q--) {
        int number;
        cout << "Enter query:" << endl;
        cin >> number;

        cout << number << " :"<< hash[number] << endl;
    }
    return 0;
}