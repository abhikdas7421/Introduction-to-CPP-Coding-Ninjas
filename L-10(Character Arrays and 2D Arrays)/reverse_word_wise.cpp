// Problem Description:- Reverse Word Wise

/*
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.

Input format :
    String in a single line

Output format :
    Word wise reversed string in a single line

Constraints :
    0 <= |S| <= 10^7
    where |S| represents the length of string, S.

Sample Input 1:
    Welcome to Coding Ninjas
Sample Output 1:
    Ninjas Coding to Welcome

Sample Input 2:
    Always indent your code
Sample Output 2:
    code your indent Always

*/

#include <iostream>
// #include "solution.h"
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char input[], int start, int end)
{
    int i = start;
    int j = end;
    while (i <= j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void reverseStringWordWise(char input[])
{
    // Write your code here
    int size = length(input);

    reverse(input, 0, size - 1);

    int start = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            reverse(input, start, i - 1);
            start = i + 1;
        }
        else if (i == size - 1)
        {
            reverse(input, start, i);
        }
    }
}

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
