#include <stdio.h>
#include <time.h>
#include <unistd.h>
void bubbleSort(int a[], int size)
{

    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - (i + 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void merge(int a[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the temp arrays back into a[left..right]
    i = 0;    // Initial index of first subarray
    j = 0;    // Initial index of second subarray
    k = left; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) // Copy the remaining elements of L[], if there are any
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) // Copy the remaining elements of R[], if thereare any
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int left, int right) // left is for left index and right is right index of the sub-array of a to be sorted
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

void printArray(int *arr, int size)
{
	int i;
    for (i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
}

int main()
{
    int maxSize = 10;
    int array[10] = {1, 3, 42, 2, 41, 66, 66, 33, 98, 0};
    float milliSec;
    clock_t start, stop;
    start = clock(); // for starting the time calculation for bubble sort
    bubbleSort(array, maxSize);
    printf("The sorted array is\n");
    printArray(array, maxSize);
    sleep(1);
    stop= clock();                                              //for ending the time calculation for bubble sort
    milliSec = ((double)(stop-start) / CLOCKS_PER_SEC) * 1000; //time in milliseconds
    printf("\n bubble sorting took %f milliseconds to execute \n", milliSec);
    printf("\n\n------------------------------------------------------------------------------------------------------\n\n\n");

   
    start = clock();
    mergeSort(array, 0, (maxSize - 1));
    printf("The sorted array is\n");
    printArray(array, maxSize);
    sleep(1);
    stop = clock();
    milliSec = ((double)(stop-start)/ CLOCKS_PER_SEC) * 1000;
    printf("\n merge sorting took %f milliseconds  to execute \n", milliSec);
    return 0;
}
