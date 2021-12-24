// Problem Description:- (Decimal to Binary)

/*
Given a decimal number (integer N), convert it into binary and print.

The binary number should be in the form of an integer.

Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.

Input format :
    Integer N
Output format :
    Corresponding Binary number (long)

Constraints :
    0 <= N <= 10^5

Sample Input 1 :
    12
Sample Output 1 :
    1100

Sample Input 2 :
    7
Sample Output 2 :
    111
*/

#include <iostream>
using namespace std;

long long int calPow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        long long int ans = 1;
        long long int i = 1;
        while (i <= n)
        {
            ans *= x;
            i++;
        }

        return ans;
    }
}

int main()
{
    // Write your code here
    long long int decimal;
    cin >> decimal;

    long long int binary = 0;
    long long int count = 0;
    while (decimal)
    {
        long long int rem = decimal % 2;

        binary = binary + (rem * calPow(10, count));
        count++;
        decimal = decimal / 2;
    }

    cout << binary;

    return 0;
}