/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value of n:"<<endl;
    cin>>n;
    
    if(n>0){
        cout<< "The positive number is " << n << endl;
    }
    else if(n<0){
        cout<< "The negative number is " << n << endl;
    }
    else{
        cout<<"Zero"<<endl;
    }
    return 0;
}
*/

/* #include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"\nEnter a character: ";
    cin>>ch;

    if (ch>='A' && ch<='Z')
    {
        cout<<"Capital letter";
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"Small letter";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"Is a digit";
    }
    else
    {
        cout<<"Invalid";
    }

}*/

/*Sum of N integers
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    int sum=0;

    while (i<=n)
    {
        if(i%2==0)
        {
        sum=sum+i;
        }
        i+=1;
        
    }
    
    cout<<"Value of sum is"<<sum<<endl;
}
*/

/* Fareheight to Celcius
#include<iostream>
using namespace std;

int main()
{
    int f;
    cout<<"Enter the Fahrenheit Value";
    cin>>f;
    
    cout<<"Converting to Degree Celcius....................";

    float c;
    c=5/9*(f-32);

    cout<<"The value in degree celcius is "<<c<< endl;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    int i=2;
    while (i<n)
    {
        if( n % i==0)
        {
            cout<<"Is not a prime number";
        }
        else
        {
            cout<<"Is a prime number";
        }
        i=i+1;
    }
    
}
*/
/*
//Patterns using loops

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;

    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row+1-col;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    
}
*/
//==================================================================================

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch = 'A' +j -1;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
Output:
4
ABCD
ABCD
ABCD
ABCD

*/

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;
    int count = 1;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch = 'A' +count -1;
            cout<<ch;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
Output:
3
ABC
DEF
GHI

*/

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch = 'A' +i+j -2;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
3
ABC
BCD
CDE
*/

//Triangular pattern

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch = 'A' +i-1;
            cout<<ch;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
3
A
BB
CCC
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;
    int count=1;

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch = 'A' +count-1;
            cout<<ch;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
3
A
BC
DEF

*/

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;
    int count=1;

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch = 'A'+i+j-2;
            cout<<ch;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
Output
4
A
BC
CDE
DEFG
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int i=1 , n;

    cin>>n;
    int count=1;

    while (i<=n)
    {
        int j=1;
        char ch = 'A' +n-i;
        while (j<=i)
        {
            
            cout<<ch;
            ch+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}

///output:
3
C
BC
ABC
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        //space print
        int star = n -i+1;
        while (star)
        {
            cout<<"*";
            star=star-1;
        }

        //printing stars
        int j=1;
        while(j<=i)
        {
            cout<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}
4
****
***
**
*

*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        //space print
        int space=i-1;;
        while (space)
        {
            cout<<" ";
            space-=1;
        }

        //printing stars
            int star = n-i+1;
            while(star)
            {
                cout<<"*";
                star-=1;
            }
            cout<<endl;
            i+=1;
            
        }
        return 0;
        
    }
    4
****
 ***
  **
   *
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        //space print
        int space=i-1;;
        while (space)
        {
            cout<<" ";
            space-=1;
        }

        //printing stars
            int star = n-i+1;
            while(star)
            {
                cout<<i;
                star-=1;
            }
            cout<<endl;
            i+=1;
            
        }
        return 0;
        
    }

    
1111
 222
  33
   4
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while (i<=n)
    {
        //space print
        
        int space=i-1;;
        while (space)
        {
            cout<<" ";
            space-=1;
        }

        //printing stars
            int star = n-i+1;
            
            while(star)
            {
                
                
                cout<<count;
                count+=1;
                star-=1;
            }
            cout<<endl;
            i+=1;
            
        }
        return 0;
        
    }
    */
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space;
        space=n-i;
    while (space)
    {
        cout<<" ";
        space-=1;
    }
    int j=1;
    while (j<=i)
    {
        cout<<j;
        j+=1;
    }
    

    int start = i-1;
    while (start)
    {
        cout<<start;
        start = start-1;
    }
    cout<<endl;
    i+=1;
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int count=1;
        int num=n-i+1;
        while (num)
        {
            cout<<count;
            count++;
            num--;
        }
        int star = i-1;
        while (star)
        {
            cout<<"*";
            star--;
        }
        
        int car = i-1;
        while (car)
        {
            cout<<"*";
            car--;
        }
        int numb = n - i+1;
        while (numb)
        {
            cout<<numb;
            numb--;
        }
        
         cout<<endl;
        i++;

        
    }
    
}
5
1234554321
1234**4321
123****321
12******21
1********1
*/