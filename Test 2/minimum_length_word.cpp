// Problem Description:- Minimum Length Word

/*
Given a string S (that can contain multiple words), you need to find the word which has minimum length.

Note :
    If multiple words are of same length, then answer will be first minimum length word in the string.

    Words are seperated by single space only.

Input Format :
    String S

Output Format :
    Minimum length word

Constraints :
    1 <= Length of String S <= 10^5

Sample Input 1 :
    this is test string
Sample Output 1 :
    is

Sample Input 2 :
    abc de ghihjk a uvw h j
Sample Output 2 :
    a
*/

#include <iostream>
// #include "solution.h"
using namespace std;

/* input - Input String
 *  output - Save the result in the output array (passed as argument). You don’t have to
 *  print or return the result
 */

int strlen(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void saveOutput(char input[], char output[], int start, int end)
{
    int j = 0;
    while (start <= end)
    {
        output[j] = input[start];
        j++;
        start++;
    }
    output[j] = '\0';
}

void minLengthWord(char input[], char output[])
{

    // Write your code here
    int min = 100000;
    int count = 0;
    int start = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {

        if (i == (strlen(input) - 1))
        {
            count++;
            if (min > count)
            {
                min = count;
                saveOutput(input, output, start, i);
            }
        }
        else if (input[i] != ' ')
        {
            count++;
        }
        else
        {
            if (min > count)
            {
                min = count;
                saveOutput(input, output, start, i - 1);
            }
            count = 0;
            start = i + 1;
        }
    }
}

int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}
