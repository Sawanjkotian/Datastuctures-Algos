#include<iostream>
#include<stdio.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for(int i=0; i<len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int p1 = 0;
    int p2 = 0;
    mainArrayIndex = s;
    while(p1<len1 && p2 < len2)
    {
        if(first[p1]<second[p2])
        {
            arr[mainArrayIndex++]=first[p1++];
        } 
        else
        {
            arr[mainArrayIndex++]=second[p2++];
        }
    }
    while(p1<len1)
    {
        arr[mainArrayIndex++] = first[p1++];
    }

    while(p2<len2)
    {
        arr[mainArrayIndex++] = second[p2++];
    }

    delete []first;
    delete []second;
    
}

void mergeSort(int arr[], int s, int e)
{
    if(e<=s)
        return;
    
    int mid = (s+e)/2;

    // Sort the left part
    mergeSort(arr, s, mid);

    //Sort the right part
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}


int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n-1);

    cout <<"Hello" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
    
}