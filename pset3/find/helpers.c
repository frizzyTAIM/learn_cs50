 /**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"
#include "stdio.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search_ver1(int value, int values[], int n)
{
    //implement a searching algorithm

    for (int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            return true;
        }
    }
    return false;
}


bool search(int value, int values[], int n)
{
    int min = 0, max = n - 1;

    while (n > 0)
    {
        int middle = (max - min) / 2 + min;

        if (values[middle] == value)
        {
            return true;
        }
        else if (values[middle] > value)
        {
            max = middle - 1;
        }
        else if (values[middle] < value)
        {
            max = middle + 1;
        }

        n = max - min + 1;
    }

    return false;
}




/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int tmp = values[min];
            values[min] = values[i];
            values[i] = tmp;
        }
        printf("%i \n", values[i]);

    }

    return;
}