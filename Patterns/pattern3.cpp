/*
Input: 3
Output:
1
1 2 
1 2 3 
*/


#include <iostream>
using namespace std;
void printTriangle(int n) {

    for (int i=1; i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << j << " ";
            
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    printTriangle(n);
    return 0;
}