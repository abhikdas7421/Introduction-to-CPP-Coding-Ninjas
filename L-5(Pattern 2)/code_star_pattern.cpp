// Problem Description:- Code: Star Pattern

/*
Print the following pattern
Pattern for N = 4
    *
   ***
  *****
 *******
The dots represent spaces.

Input Format :
    N (Total no. of rows)

Output Format :
    Pattern in N lines

Constraints :
    0 <= N <= 50

Sample Input 1 :
    3
Sample Output 1 :
   *
  ***
 *****
Sample Input 2 :
    4
Sample Output 2 :
    *
   ***
  *****
 *******

*/

#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= ((2 * i) + 1); k++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
