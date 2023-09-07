/*
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the value of N: "<<endl;
    cin>>n;

    int** arr = new int*[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    //Taking Input

    cout << "Enter the Array values: "<< endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr[i][j]<<" ";
        }
    }
    
    
}
*/
#include<iostream>
#include<vector>

vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[2*i]=nums[i];
            }
             if(nums[i]<0)
            {
                ans[2*i+1]=nums[i];
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {-1,-2,-3,1,2,3};
    rearrangeArray(nums);

}