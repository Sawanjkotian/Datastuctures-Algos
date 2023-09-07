
/*
Finding the reverse of the string

#include<iostream>
using namespace std;

void reverse(int i, int j, string& st)
{
    while(i>j)
        return;

    swap(st[i],st[j]);
    i++;
    j--;
    reverse(i, j, st);

}

int main()
{
    string st = "abcd";
    int i = 0;
    int j = st.length()-1;
    reverse(i , j , st);
    cout << st << endl;

    return 0;
}
*/

/*
Check if the given stirng is Palindrome
#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    while(i>j)
        return true;

    
    if(str[i]!=str[j])
        return false;
    else
        return checkPalindrome(str, i+1, j-1);

}


int main()
{
    string name = "999";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if (isPalindrome)
    {
        cout<<"It's a Palindrome"<<endl;
    }
    else
    {
        cout<<"Not"<<endl;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b==0)
        return 1;

    if(b==1)
        return a;
    
    int ans = power(a,b/2);

    if(b%2 == 0)
        return ans*ans;
    else
        return a*ans*ans;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << endl;

    int ans = power(a,b);

    cout << " Answer is " << ans << endl;

    return 0;
}