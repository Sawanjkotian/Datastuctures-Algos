/* #include<iostream>
using namespace std;

int main()
{
    int num = 10;

    cout<< num << endl;

    cout<<"The Address of num is "<< &num;
}
*/

#include<iostream>
using namespace std;

int main(){

    /*int num = 5;

    int *p = &num;

    cout<<" Before "<<num<<endl;
    (*p)++;
    cout<<" after "<<num<<endl;

//copying a pointer

int *q = p;
cout<< p <<" - " << q << endl;
cout<< *p <<" - "<<*q << endl;

*/
// important concept

int i=3;
int *t=&i;
//cout << (*t)++ <<endl;
*t = *t + 1;
cout << *t << endl;

cout<< " before t" << t << endl;
t = t+1;
cout<<" After t " << t << endl;

    return 0;
}