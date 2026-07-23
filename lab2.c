#include <stdio.h>

void BubbleSort(int array1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array1[j] > array1[j+1])
            {
                int temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;
            }
        }
    }
}

void SelectionSort(int array1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array1[min] > array1[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = array1[min];
            array1[min] = array1[i];
            array1[i] = temp;
        }
    }
}


int main(void)
{
    int num[] = {1, 7, 23, 5, 22, 9};
    int n = 0;
    n = sizeof(num)/sizeof(num[0]);
    SelectionSort(num, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\n");
}