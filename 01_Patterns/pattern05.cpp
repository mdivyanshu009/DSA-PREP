/*
Input: 3
Output:
* * * 
* *  
* 

*/


#include <iostream>
using namespace std;
    void printRevTriangle(int n) {

        for (int i=1;i<=n;i++)
        {
            for (int j=n-i+1;j>=1;j--)
            {
                cout << "* ";
            }
            cout << endl;
        }        
    }
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    printRevTriangle(n);
    return 0;
}