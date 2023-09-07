// Binary Search problems
//Problem on finding the first and last occurrence of the key in an array

#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int key)
{
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(arr[mid]== key)
        {
            ans = mid;
            e = mid-1;
        }
        else if (key > arr[mid])
        {
            s=mid+1;
        }
        else if (key < arr[mid])
        {
              e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}

int lastOccur(int arr[], int n, int key)
{
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(arr[mid]== key)
        {
            ans = mid;
            s = mid+1;
        }
        else if (key > arr[mid])
        {
            s=mid+1;
        }
        else if (key < arr[mid])
        {
              e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}

int main()
{
    int even[5]={1, 2, 3, 3, 5};
    cout<<"The first occurence of 3 is at index "<< endl <<firstOccur(even, 5, 3);

    cout<<"The last occurence of 3 is at index "<< endl <<lastOccur(even, 5, 3);

    return 0;
    
}