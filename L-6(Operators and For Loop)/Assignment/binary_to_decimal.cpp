// Problem Description:- (Binary to decimal)

/*
Given a binary number as an integer N, convert it into decimal and print.

Input format :
    An integer N in the Binary Format
Output format :
    Corresponding Decimal number (as integer)

Constraints :
    0 <= N <= 10^9

Sample Input 1 :
    1100
Sample Output 1 :
    12

Sample Input 2 :
    111
Sample Output 2 :
    7
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write your code here
    int binary;
    cin >> binary;

    int decimal = 0;

    int count = 0;
    while (binary)
    {
        int rem = (binary % 10);

        decimal = decimal + (rem * pow(2, count));
        count++;
        binary = binary / 10;
    }

    cout << decimal;

    return 0;
}
