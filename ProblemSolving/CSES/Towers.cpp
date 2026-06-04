#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)



void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);

	multiset<ll> topElements;
	for(int i = 0; i< n; i++)
	{
		cin >> v[i];
	}
	int ans=0;
	for(int i = 0; i < n; i++)
	{
		auto it = topElements.upper_bound(v[i]);
		if(it == topElements.end())
		{
			topElements.insert(v[i]);
		}
		else{
			topElements.erase(it);
			topElements.insert(v[i]);
		}
	}
	ans = topElements.size();

	cout<< ans<<endl;
}

int main()
{
	Unsync_IO;
	int test = 1;
	//cin >> test; 
	while(test--)
	{
		solve();
	}
} 