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
        
    }
}

int main(void)
{
    int num[] = {1, 5, 7, 23, 5, 22, 9};
    int n = 0;
    n = sizeof(num)/sizeof(num[0]);
    BubbleSort(num, n);
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", num[i]);
    }
    printf("\n");
}