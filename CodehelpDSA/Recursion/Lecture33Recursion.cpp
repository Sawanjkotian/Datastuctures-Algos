/*
//Checking if the Array is Sorted or not
#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    bool remainingPart;
    if(size == 0 || size == 1)
        return true;

    if(arr[0]>arr[1])
        return false;
    else{
        remainingPart = isSorted(arr + 1, size - 1);
    }

    return remainingPart;
}

int main(){

    int arr[5] = {2 ,4 ,6, 8, 9};
    int size = 5;

    bool ans = isSorted(arr , size);
    
    if (ans)
    {
        cout <<"Array is sorted" << endl;
    }
    else{
        cout << "not sorted" << endl;
    }
    
}

//Implementing Linear Search using Recursion
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{
    if(size == 0)
        return false;

    if(arr[0] == k)
        return true;

    bool remainingPart = linearSearch(arr+1, size - 1, k);
    return remainingPart;
}


int main()
{
    int arr[7] = {1, 7, 6, 4, 5, 3};
    int size = 7;
    int k = 11;
    bool ans = linearSearch(arr, size, k);

    if(ans){
        cout<< "Key found" <<endl;
    }
    else{
        cout<<"Key not found" << endl;
    }
}
*/

#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int k)
{
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
    {
        return true;
    }

    if(arr[mid]>k)
        return binarySearch(arr, mid+1, e, k);
    else
        return binarySearch(arr,s, mid - 1, k);
}

int main()
{
    int arr[5] = {2, 5, 6, 7};
    int size = 5;
    int k = 6;

    cout << "Present or not " << binarySearch(arr, 0, 5, k);

    return 0;
}