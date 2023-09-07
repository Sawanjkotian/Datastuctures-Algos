/* Program to recieve an input and reverse it and return 0 if it's out of range from int
#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int ans=0;
    while (n!=0)
    {
            int dig=n%10;

                if(ans>INT8_MAX/10 && ans<INT8_MIN/10)
                    return 0;

        ans=(ans*10)+dig;
        n=n/10;
    }
    return ans;
    
    

    
}
*/


/*To get get the complement of a number

#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int m=n;
    int mask=0;

    if(n==0){
        return 1;
    }

    while (n!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(-n) & mask;
    cout<<"ans: "<<+ans;
}
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n ;
    cout<<"enter a value"<<endl;
    cin>>n;
    for (int i = 0; i <= 30; i++)
    {
        printf("hello");
        int ans=pow(2,i);
        if (ans==n)
        {
            printf("truee");
            return true;

        }
    }
    
    printf("hello");
    
}