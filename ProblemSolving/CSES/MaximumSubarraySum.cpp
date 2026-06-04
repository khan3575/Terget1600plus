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
	vector<int>v(n);
	for(int i = 0; i< n; i++)
	{
		cin >> v[i];
	}
	int current_sum=v[0];
	int global_sum =v[0];
	for(int i = 1; i<n; i++)
	{
		current_sum = max(v[i], current_sum+v[i]);
		global_sum = max(global_sum,current_sum);
	}
	cout<<global_sum<<endl;
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