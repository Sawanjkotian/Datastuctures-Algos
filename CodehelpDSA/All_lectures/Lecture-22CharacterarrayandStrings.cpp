#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

bool ispalindrome(char ch[], int n)
{
    int s = 0;
    int e = n-1;

    while (e>=s)
    {
        if(toLowerCase(ch[s])!=toLowerCase(ch[e]))
        {
            return 0;
        }
        
        else
        {
            s++;
            e--;
        }
    }
    return 1;
    
}

int getlen(char ch[])
{
    int count=0;
    for (int i = 0; ch[i]!='\0'; i++)
    {
        count++;
    }

    return count;
    
}

void getrev(char ch[], int n)
{
    int s = 0;
    int e = n-1;
    
    while (s<e)
    {
        swap(ch[s++],ch[e--]);
    }
    
}

int main()
{
    char ch[20];

    cout<<"Enter your name: ";
    cin>>ch;   


    cout<<"Hello, nice to see you!,"<<ch<<endl;

    int n =getlen(ch);
    cout<<"The count of the string is: "<<n<<endl;

    getrev(ch, n);

    cout<<"The reverse of the String is: "<<ch<<endl;

    int flag =ispalindrome(ch, n);

    if(flag)
    {
        printf("Is a palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    

    return 0;
}

//To find the no. of times a character has repeated in a string
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        
        for(int i=0; i<str.size();i++)
        {
            char ch = str[i];
            int number = 0;
            if(ch>='a' && ch<='z')
            {
                 number= ch - 'a';
                
            }
            else
            {
                int count = ch - 'A';
            }
            arr[number]++;
        }
        
        int maxi = -1;
        int ans = 0;
        
        for(int i=0; i<26; i++)
        {
            if(arr[i]>maxi)
            {
                ans=i;
                maxi=arr[i];
            }
        }
        
        char finalans = 'a'+ans;
        return finalans;

    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends


//Code to add @40 in place of space in a string

#include <bits/stdc++.h> 
string replaceSpaces(string &str){

	string temp = "";
	for(int i = 0; i<str.size();i++)
	{
		if(str[i]==' ')
		{
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');

		}
		else
		{
			temp.push_back(str[i]);
		}
	}
	return temp;

}

//Permutation in the string

class Solution {

private: 
    bool checkEqual(int a[26], int b[26])
    {
        for(int i=0; i<26;i++){
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {

        int count1[26]={0};

        for(int i=0; i<s1.length(); i++)
        {
            int index = s1[i]-'a';
            count1[index]++;
        }

        int i=0;
        int k = s1.length();
        int count2[26]={0};

        while(i<k && i<s2.length())
        {
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1,count2))
            return 1;

        while(i<s2.length())
        {
            char newChar = s2[i];
            int index = newChar-'a';
            count2[index]++;

            char oldChar = s2[i-k];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            if(checkEqual(count1,count2))
            return 1;
        }

        return 0;
        
    }
};


//443. String Compression
class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int ansIndex = 0;
        int n=chars.size();

        while(i<n)
        {
            int j = i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }

            chars[ansIndex++]=chars[i];

            int count = j-i;

            if(count>1)
            {
                string cnt = to_string(count);
                for(char ch:cnt)
                {
                    chars[ansIndex++]=ch;
                }
            }
            i=j;

        }
        return ansIndex;
    }
};