#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
long long int n=1000000;
bool sieve[n+1];

void createSieve(){
    for (int i = 2; i <=n; i++)
    {
        sieve[i] = true;
    }
    
    for (int i = 2; i*i <= n; i++){
        if (sieve[i] == true){
            for (int j = i*i; j <=n; j++)
            {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int n){
    vector<int> ds;
    for (int i = 2; i <=n; i++)
    {
        if (sieve[i]==true)
        {
           ds.push_back(i);
        }
        
    }
    
}

int main()
{
    createSieve();
    int t;
    cin>> t;
    while (t--)
    {
        int l, r;
        cin>> l >> r;

        //step 1: Generate all primes till sqrt(r)
        //vector<int> primes = generatePrimes(sqrt(r));

        //Step 2: Create a dummy array and mark all the size of r-l+1 as 1
        int dummy[r - l + 1];
        for (int i = 0; i < r-l+1; i++)
        {
            dummy[i]=true;
        }

        for (auto pr : primes)
        {
            int firstMultiple =(l/pr)*pr;
            if (firstMultiple < l)  firstMultiple+=pr;

            for (int j = max(firstMultiple, pr*pr); j <= r; j+=pr)
            {
                dummy[j-l]=0;
            }
        }
        for (int i = l; i <=r; i++)
        {
            if (dummy[i-l]==1)
            {
                cout<< i << " ";
            }
            
        }
        cout<<endl;
    }
    
    
}
*/