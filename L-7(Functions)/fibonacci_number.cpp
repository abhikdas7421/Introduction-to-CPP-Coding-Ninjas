// Problem Description:- (Fibonacci Number)

/*
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.

Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
    where F(0) = 0 and F(1) = 1

Input Format :
    Integer N

Output Format :
    true or false

Constraints :
    0 <= n <= 10^4

Sample Input 1 :
    5
Sample Output 1 :
    true

Sample Input 2 :
    14
Sample Output 2 :
    false
*/

#include <iostream>
using namespace std;

bool checkMember(int n)
{

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    int t1 = 0;
    int t2 = 1;
    while (t1 <= n)
    {
        if (t1 == n)
        {
            return true;
        }
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    if (checkMember(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}