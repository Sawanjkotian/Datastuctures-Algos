/*
#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<(17>>1)<<endl;
    cout<<(17<<1)<<endl;
}
*/
/*
#include<iostream>
using namespace std;

int main(){

    int a, b=1;
    a=10;

    if(++a)
        cout<< b;
    else
        cout<< ++b;
}
*/

/*
#include<iostream>
using namespace std;

int main(){

    int a=1;
    int b=a++;
    int c=++a;
    cout<< b<<endl;
    cout<< c;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<< i << endl;
    }
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int sum =0;

    for(int i=1; i<=n;i++)
    {
        sum +=i;
    }
    cout<<sum;
}
*/
/*
#include<iostream>
using namespace std;

int n=10;
int a=0;
int b=1;

int main(){

for (int i = 0; i <= n; i++)
{
    int nextNumber=a+b;
    cout<<nextNumber<<" ";

    a=b;
    b=nextNumber;
}

}
*/
/*
#include<iostream>
using namespace std;

int main()
{

    for (int i = 0; i <=5; i++){
        for (int j = i; j <= 5; j++)
        {
            cout<<i <<" " << j <<endl;
        }
        
    }
        
    
}
*/

/*
#include<iostream>
using namespace std;

int main(){

    int prod = 1;
    int sum =0;
    int n;
    cin>>n;

    while (n!=0)
    {
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;

        n = n/10;

    }

    int answer = prod - sum;
    cout<<"The answer is: "<< answer << endl;
    
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    
    int n;
    int count;
    cin>>n;
    while (n!=0)
    {
        if(n%1){

            int count =0;
            count++;
        
        n=n>>1;
    }
    return count;
    
}

*/
/*
//Converting digit to binary

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans =0;
    int i=0;

    while (n!=0)
    {
        int digit = n&1;
        ans=(digit * pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"Answer is "<< ans << endl;
    
}

*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int ans =0;
    int i=0;
    cin>>n;

    while (n!=0)
    {
        int bit = n%10;

        if(bit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    
}