//Book allocation Problem
#include<iostream>
using namespace std;


bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount>m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        } 
    }
    return true;
}


int main()
{
    int arr[4]={10, 20, 30 ,40};
    int s=0;
    int sum=0;
    int m=0;
    cout<<"Enter the value of 'm': "<<endl;
    cin>>m;

    for (int i = 0; i < 4; i++)
    {
        sum+=arr[i];
    }

    int e=sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (isPossible(arr, 4, m, mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"The minimum value is "<<ans<<endl;
    
}


//Painter's Partition Problem
/*
bool isPossible(vector<int> &boards, int mid, int k)
{
    int PaintCount = 1;
    int boardSum=0;

    for(int i=0; i<boards.size(); i++)
    {
        if(boardSum+boards[i]<=mid)
        {
            boardSum+=boards[i];
        }
        else
        {
            PaintCount++;
            if(PaintCount>k || boards[i]>mid)
            {
                return false;
            }
            boardSum = boards[i];
        }
    }
    return true;

}



int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    // int n = sizeof(boards);

    for(int i=0; i<boards.size(); i++)
    {
        sum+=boards[i];
    }
    int e=sum;
    int ans=-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(boards, mid, k))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
*/

/*
//Aggressive Cows Problem

bool isPossible(vector<int> &stalls, int mid, int k)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0; i<stalls.size();i++)
    {
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    int s=0;
    sort(stalls.begin(),stalls.end());
    // int n = sizeof(boards);
    int maxi = -1;
    for(int i=0; i<stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(stalls, mid, k))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
*/

//Bubble sort

