// Problem Description:- (Number Star Pattern)

/*
Print the following pattern for given number of rows.

Input format :
Line 1 : N (Total number of rows)

Sample Input : 5

Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main()
{

    // Write your code here
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= (n - i); j++)
        {
            cout << j;
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "**";
        }
        for (int j = (n - i); j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
