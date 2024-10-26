#include <stdio.h>

void insert(int arr[], int arrLen, int x, int pos)
{
    for (int i = arrLen - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
}

int main()
{

    int arr[100] = {5, 9, 13, 11, 2};

    int arrLen = 5;
    int x = 17;
    int pos = 2;

    insert(arr, arrLen, x, pos);
    arrLen++;

    for (int i = 0; i < arrLen; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
