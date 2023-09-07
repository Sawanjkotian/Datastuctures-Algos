/*#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n ==0)
        return 1;

    int small = factorial(n-1);
    int big = n*small;

    return big;
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);

    cout<< ans << endl;

}
*/

/*
#include<iostream>
using namespace std;

int power(int n)
{
    if(n ==0)
        return 1;

    int small = power(n-1);
    int big = 2*small;

    return big;
}

int main()
{
    int n;
    cin >> n;

    int ans = power(n);

    cout<< ans << endl;
}
*/

// #include<iostream>
// using namespace std;

// int count(int n)
// {
//     if(n ==0)
//         return 1;

    
//     cout << n <<endl;
//     int val = count(n-1);

//     return val;

// }

// int main()
// {
//     int n;
//     cin >> n;

//     count(n);
// }

#include<iostream>
using namespace std;

void steps(int src, int dest)
{
    cout << "src: " <<src << "destination: " << dest << endl;
    if(src == dest)
    {
        cout<<"Destination Reached"<<endl;
        return ;
    }
    src++;

    steps(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    steps(src, dest);
}
