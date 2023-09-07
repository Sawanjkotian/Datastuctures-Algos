/*
#include<iostream>
using namespace::std;

int main(){
    int a,b;
    char ch;

    cout<<"Enter two values a & b"<<endl;
    cin>> a >> b;

    cout<<"Enter the operator"<<endl;
    cin>> ch;

    switch (ch)
    {
    case '-':
        cout<<" "<< a-b;
        break;

    case '*':
        cout<<" "<< a*b;
        break;

    case '+':
        cout<<" "<< a+b;
        break;
    
    default:
        break;
    }

}
*/
/*
#include<iostream>
using namespace::std;

int main(){

    int amount;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1: Rs100=amount/100;
            amount=amount%100;
            cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
    
    case 2: Rs50=amount/50;
            amount=amount%50;
            cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;

    case 3: Rs20=amount/20;
            amount=amount%20;
            cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;  

    case 4: Rs1=amount/1;
            amount=amount%1;
            cout<<"No of 1 Rupee notes required are="<<Rs1<<endl;  
            break;
    }
}
*/

/*
//Starting to use funcitons
//Program to find the combination
#include<iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){

    int num = factorial(n);
    int denom=factorial(r) * factorial(n-r);
    int com= num/denom;
    cout<<"The combination is "<< com <<endl;
}

int main(){

    int N,R;
    cout<<"Enter the value of N & R"<<endl;
    cin>> N >> R;
    nCr(N,R);
}
*/

/*
#include<iostream>
using namespace std;

int Ap(int num){

    int ap = 3*num+7;
    return ap;
}

int main(){

    int n;

    cout<<"Enter the nth term: ";
    cin>>n;
    cout<<"The nth term is:";
    int ap =Ap(n);
    cout<<ap;
    

}
*/


#include<iostream>
using namespace std;

int count=0;
int bitnos(int n)
{
    int bit;
    int count=0;
        while (n!=0)
        {
            if(n&1)
                count++;
        }

        return count;

}

int main()
{
    int a,b;
    int no_a, no_b;
    cout<<"Enter the value of a & b"<<endl;
    cin>>a;
    cout<<"no_a"<<bitnos(a);
    // no_b = bitnos();

    int total = no_a+no_b;
    cout<<"total no. of bits:"<<total;
    
}


