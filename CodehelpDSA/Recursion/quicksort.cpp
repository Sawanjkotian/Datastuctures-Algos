#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;

    for (int i = s+1; i <=e; i++)
    {
        if(arr[i] <=pivot){
            cnt++;
        }
    }
    int pivotIndex =cnt+s;
    swap(arr[s], arr[pivotIndex]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j> pivotIndex)
    {
        if(arr[i] >= pivot && arr[j] <=pivot)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i] < pivot)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return pivotIndex;
    
}

void quickSort(int *arr, int s, int e)
{
    if(s>=e)
        return;
    
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main()
{
    int arr[10] = {2, 4 ,1, 6, 9, 28, 13, 11, 9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;
    
}


