// Problem Description:- Code: Diamond of stars

/*
Print the following pattern for the given number of rows.

Note: N is always odd.

Pattern for N = 5
  *
 ***
*****
 ***
  *
The dots represent spaces.

Input format :
    N (Total no. of rows and can only be odd)

Output format :
    Pattern in N lines

Constraints :
    1 <= N <= 49

Sample Input 1:
    5
Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
    3
Sample Output 2:
  *
 ***
  *
*/

#include <iostream>
using namespace std;

int main()
{

    /*
        Read input as specified in the question.
        Print output as specified in the question.
    */
    int n;
    cin >> n;

    for (int i = 1; i < ((n + 1) / 2); i++)
    {
        for (int j = i; j < ((n + 1) / 2); j++)
        {
            cout << ' ';
        }
        for (int j = 1; j < i; j++)
        {
            cout << '*';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    for (int i = 1; i <= ((n + 1) / 2); i++)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << ' ';
        }
        for (int j = i; j < ((n + 1) / 2); j++)
        {
            cout << '*';
        }
        for (int j = i; j <= ((n + 1) / 2); j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}