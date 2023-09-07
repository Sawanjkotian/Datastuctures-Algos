//Finding the pivot element in an array
/*
#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s=0; 
    int e=n-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    
}

int main()
{

    int arr[9] = {7,8,9,1,2,3,4,5,6};
    cout<<"The pivot index is"<<pivot(arr, 9);
}
*/

//=====================================================================

/*
//Finding an element in a sorted rotated array

//Imp

#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s=0; 
    int e=n-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    
}


int binarySearch(int arr[], int start, int end, int key)
{

    int mid= (start+end)/2;

    while (start <= end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }

        if (key>arr[mid])
        {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        
        mid = (start+end)/2;
    }
    return -1;
}


// this main or
int main()
{
    int key;
    
    int arr[9] = {7,8,9,1,2,3,4,5,6};
    cout<<"Enter the key value";
    cin>>key;

    int p = pivot(arr, 9);

    cout<<"The pivot index is"<<p<<endl;

    if (key==arr[p])
    {
        cout<<"found a match at "<<p;
    }
    else if (key>arr[p])
    {
        int value=binarySearch(arr, p, 8, key);
        if (value ==-1)
        {
            cout<<"Invalid";
        }
        else{
            cout<<"key found";

        }
    }
    else if (key<arr[p])
    {
        int value=binarySearch(arr, 0, p-1,key);
        if (value ==-1)
        {
            cout<<"Invalid";
        }
        else{
            cout<<"key found";

        }
        
        
    }
    return 0;

}

//this one

int findPosition(vector<int>& arr, int n, int k)
{
  int p = pivot(arr, n);

    if(k >= arr[p] && k <= arr[n - 1]) 
    {
        return binarySearch(arr, p, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, p - 1, k);
    }

}
*/

/*
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end =0;

    int mid= (start+end)/2;
    int ans =0;

    while (start <= end)
    {
        if (arr[mid]*arr[mid]==key)
        {
            return mid;
        }

        if (key>arr[mid]*arr[mid])
        {
            ans = mid
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the no.";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n ; i++)
    {
        arr[i]=i;
    }

    int index = binarySearch(arr, n, n);

    cout<<"The sqrt is "<<arr[index];
    
}

*/


// finding square root using binary search
#include<iostream>
using namespace std;

int binarySearch(int n){

    int s=0;
    int e=n;
    int mid=s+(e-s)/2;

    int ans = -1;

    while(s<=e)
    {
        cout<<"hello";
        int square = mid*mid;

        if(square == n)
            return mid;
        
        if(square < n){
            ans=mid;
            s=mid+1;
        }

        else {
          e = mid - 1;
        }
        mid = s + (e - s) / 2;
        
    }
    return ans;
}

double morePrecise(int n, int pres, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < pres; i++)
    {
        factor = factor/10;

        for (double j = ans; j*j < n; j+=factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
    int x;
    int n;
    cout<<"Enter N value";
    cin>>n;
    int tempSol = binarySearch(n);

    cout<<"The Square root is "<<tempSol<<endl;

    cout<<"The Square root is "<<morePrecise(n,3,tempSol);
}
