//Input/Output and searching in 2D array
/*
#include<iostream>
using namespace std;

int isPresent(int arr[][4],int target,int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
        
    }
    return 0;
}

int main()
{
    // int arr[3][4];

    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the 2D array"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }

    int target;

    cout<<"Enter the target value: ";

    cin>>target;

    if(isPresent(arr,target,3,4))
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}
*/

//Printing the sum of 2D array in column and row fashion

#include<iostream>
using namespace std;

int sumOfRows(int arr[][4], int row, int col)
{

    int sum0=0, sum1=0,sum2=0,sum3=0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if(j==0 && i<4)
            {
                sum0+=arr[i][j];
            }
            if(j==1 && i<4)
            {
                sum1+=arr[i][j];
            }
            if(j==2 && i<4)
            {
                sum2+=arr[i][j];
            }
             if(j==3 && i<4)
            {
                sum3+=arr[i][j];
            }
        }
        
    }

    cout<<"sum0: "<<sum0<<endl;
    cout<<"sum1: "<<sum1<<endl;
    cout<<"sum2: "<<sum2<<endl;
    cout<<"sum3: "<<sum3<<endl;
}

int main()
{
    int arr[3][4];

    cout<<"Enter the 2D array"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }

    sumOfRows(arr,3,4);

}


//Spiral Print

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int total = row*col;
        int count = 0;

        int startingRow=0;
        int startingCol=0;
        int endingCol=col-1;
        int endingRow=row-1;

        while(count<total)
        {
            for(int index=startingCol; count<total && index<=endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

             for(int index=startingRow; count<total && index<=endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            for(int index=endingCol; count<total && index>=startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            for(int index=endingRow; count<total && index>=startingRow;index-- )
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};



#include<iostream>
using namespace std;

int thesum(int a, int b)
{
    int sum = a+b;
    return sum;
}

int main()
{
    int a, b;
    cin>>a>>b;

    int sum = thesum(a,b);

    cout<<"The sum value "<<sum;
}