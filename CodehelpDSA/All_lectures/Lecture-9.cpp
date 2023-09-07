//Arrays

/*
#include<iostream>
using namespace std;

int getMin(int arr[], int size){

    int min = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
    
}

int getMax(int arr[], int size){

    int max = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
    
}

int main()
{
    int size;
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }


    cout<< "Min & Max " << getMin(arr,size) << endl<< getMax(arr,size);

    return 0;
}
*/

//Sum of array elements
/*
#include<iostream>
using namespace std;


int sum(int arr[], int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }

    return sum;

}

int main()
{
    int size;
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"The sum of array is "<<sum(arr, size);

}
*/

/*
//Linear serach
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
            return 1;
        
    }
    
}

int main(){
    int size, key;
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key value: "<<endl;
    cin>>key;

    bool found = search(arr, size,key);

    if (found)
    {
        cout<<"Key found";
    }
    else{
        cout<<"Not found";
    }
}
*/

#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}

int main(){

    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};

    swapAlternate(even, 8);

    for (int i = 0; i < 8; i++)
    {
        cout<<even[i];
    }
    

}
