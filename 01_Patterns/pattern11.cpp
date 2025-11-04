/*
Input: ‘N’ = 3

Output: 
1
0 1
1 0 1
*/


#include <iostream>
using namespace std;
void nBinaryTriangle(int n) {

    for (int i=1;i<=n;i++)
    {
        for (int j=i;j>=1;j--)
        {
            cout << j%2 << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    nBinaryTriangle(n);
    return 0;
}