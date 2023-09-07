#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v, int m)
{
	
	int s=m;
	int e=v.size()-1;

	while(e>=s)
	{
		swap(v[e],v[s]);
		e--;
		s++;
	}
    return v;
}


int main(){

    vector<int> v;

    v.push_back(10);
    v.push_back(15);
    v.push_back(22);
    v.push_back(9);
    v.push_back(19);
    v.push_back(1);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i]<<endl;
    }
    cout<<endl;

    vector<int> ans =reverse(v, 4);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<" "<<ans[i]<<endl;
    }
       
}