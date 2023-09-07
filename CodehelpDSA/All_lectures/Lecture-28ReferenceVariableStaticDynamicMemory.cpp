#include<iostream>
using namespace std;


/*
void update(int& n)
{
    n++;
}


int main()
{
    /*
    int i = 5;

    int& j = i;

    cout<< i << endl;
    i++;
    j++;
    cout << i << endl;
    cout << j << endl;
    

   int n = 10;

   cout<<" Before "<< n << endl;
   update(n);
   cout<<" After "<< n << endl;
   
}
*/
/*
int main()
{
    char ch = 'q';
    cout<< sizeof(ch) << endl;

    char* c = &ch;

    cout<< sizeof(c) << endl;
}
*/

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << endl << " " << arr[i] << endl;
    }
    

    return 0;
    
}