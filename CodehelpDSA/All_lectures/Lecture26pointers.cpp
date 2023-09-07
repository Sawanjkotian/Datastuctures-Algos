#include<iostream>
using namespace std;


int main()
{
    /*
    int arr[]={23, 122, 41, 67};

    cout<<*(arr+3);

    int i=3;
    cout<<i[arr];
    */

//    int temp[10];

//    cout<< sizeof(*temp)<<endl;
//    cout<< sizeof(temp)<<endl;

//    int *ptr = &temp[0];

//    cout<< sizeof(*ptr)<< endl;

/*
    int arr[10];

    // arr = arr+1;

    int *ptr = &arr[0 ];

    cout<< ptr <<endl;
    ptr = ptr + 1;

    cout<< ptr <<endl;
*/

//Cout in Integer array is different from cout in char array
    int arr[10];
    char ch[6]="abcde";

    cout<< arr << endl;

    cout<< ch << endl;

    char *c = &ch[0];

    cout << c << endl;

    return 0;

}