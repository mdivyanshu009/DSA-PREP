/*
]Input: ‘N’ = 3

Output: 

1
2 3
4 5 6
*/


#include <iostream>
using namespace std;
void nNumberTriangle(int n) {

    int count =1;
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<=i;j++){
            cout << count << " ";
            count+=1;
        }
        cout<< endl;
    
    }
    
}
int main(){
    int n;
    cout << "Enter n:" ;
    cin >> n;
    nNumberTriangle(n);
    return 0;
}