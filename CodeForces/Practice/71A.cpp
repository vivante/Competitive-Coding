#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
		{
			string s;
			cin>>s;
			int len;
			len=s.length();
			if(len>10)
			{
				cout<<s[0]<<len-2<<s[len-1]<<"\n";
			}
			else
				cout<<s<<"\n";
		}
}
