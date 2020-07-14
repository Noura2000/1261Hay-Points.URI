#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string, int>mp;
	long long tot = 0;
	string s;
	int n, m,sal;
	cin >> n >> m;
	while (n--)
	{
		cin >> s >> sal;
		mp.insert(make_pair(s, sal));
	}
	while (m--)
	{
		cin >> s;
		tot = 0;
		while (s != ".")
		{
			if (mp.count(s)) tot += mp[s];
			cin >> s;
		}
		cout << tot << endl;
	}
	return 0;
}