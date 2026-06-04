#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)


bool isValid(int x, int y, int k)
{
	if((x-k)<=y && y<=(x+k))
	{
		return true;
	}
	else return false;
}

void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> appartments(n),desired(m);
	for(int &i : appartments) cin >> i;
	for(int &i : desired) cin >> i;

	sort(appartments.begin(),appartments.end());
	sort(desired.begin(),desired.end());

	int ans= 0;
	int i = 0;
	for(int j = 0; j< m; j++)
	{//j = for desired
		while(i<n && appartments[i]< desired[j]-k)
		{
			i++;
		}

		if(isValid(desired[j], appartments[i], k))
		{
			i++;
			ans++;
		}
	}
	cout<<ans<<endl;
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