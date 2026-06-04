#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)

vector<int>v;
vector<int>pos;
int n, m;

void solve()
{
	cin >> n >> m ;
	v.resize(n+1);
	pos.resize(n+1);

	for(int i = 1; i<=n; i++)
	{
		cin >>v[i];
		pos[v[i]]=i;
	}
	int ans = 1;
	for(int i = 1; i<n; i++)
	{
		if(pos[i+1]<pos[i])
		{
			ans++;
		}
	}
	//cout<<ans<<endl;
	while(m--)
	{
		int x, y;
		cin >> x >>y;
		if(x==y)
		{
			cout<<ans<<endl;
			continue;
		}

		int val1=v[x];
		int val2=v[y];

		set<pair<int,int>>st;

		if(val1>1) st.insert({val1-1, val1});
		if(val1<n) st.insert({val1, val1+1});
		if(val2>1) st.insert({val2-1, val2});
		if(val2<n) st.insert({val2, val2+1});

		for(auto &p : st)
		{
			if(pos[p.second]< pos[p.first])
			{
				ans--;
			}
		}

		swap(pos[val1], pos[val2]);
		swap(v[x],v[y]);
		for(auto& p : st) {
			if(pos[p.second] < pos[p.first]) {
				ans++;
			}
		}
		cout<<ans<<endl;
		
	}
	
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