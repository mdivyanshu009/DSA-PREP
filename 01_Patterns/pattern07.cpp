/*
Input: 3
Output:
  *
 ***  
*****
*/


#include <iostream>
using namespace std;
void printTriangle(int n) {
    for (int i=0;i<n;i++)
    {
        for (int j=n-i-1;j>0;j--)
        {
            cout << " ";
        }
        for (int j=0;j<2*i+1;j++)
        {
            cout << "*";
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