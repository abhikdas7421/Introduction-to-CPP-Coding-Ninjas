#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        // Find minimum element in the array
        int min = arr[i];
        int minIndex = i;
        for (int j = (i + 1); j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void selectionSort2(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int min = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {8, 5, 1, 4, 6, 2};

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    selectionSort2(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}