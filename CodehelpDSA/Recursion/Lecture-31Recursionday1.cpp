/*
#include<iostream>
using namespace std;


int factorial(int n)
{
    if(n==0)
        return 1;

    
    int smallProblem = factorial(n-1);
    int biggerProblem = n*smallProblem;

    return biggerProblem;
}

int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);

    cout << ans << endl;


    return 0;
}
*/

/*
//To Find the powers of 2^n
#include<iostream>
using namespace std;


long long int power(int n)
{
    //Base case Section
    if(n==0)
        return 1;

    //Recursive Relation
    long long int sp = power(n-1);
    long long int bp = 2*sp;
    return bp;
}
int main()
{
    int n;
    cin >> n;

    long long int ans = power(n);

    cout << ans << endl;

    return 0;
}
*/

#include<iostream>
using namespace std;

void counting(int n)
{
    if(n==0){
        return ;
    }

    cout<< n << endl;

    return counting(n-1);
}

int main()
{
    int n;
    cin >> n;

    counting(n);

    return 0;
}

//Fibboncci Series

class Solution {
public:
    int fib(int n) {
        
        if(n==0)
            return 0;

        if(n==1)
            return 1;

        int fNum = fib(n-1);
        int sNum = fib(n-2);

        return fNum+sNum;
    }
};