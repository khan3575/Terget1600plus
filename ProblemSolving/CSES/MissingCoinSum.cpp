#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)



void solve()
{
	int n; cin >> n;
	vector<int>v(n+1);
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v[x]= i;
	}

	int round=1;
	for(int i = 1; i< n; i++)
	{
		if(v[i+1]<v[i])
		{
			round++;
		}
		else{
			continue;
		}
	}
	cout<<round<<endl;
	
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