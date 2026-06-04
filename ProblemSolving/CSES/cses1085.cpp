#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)

ll n, k;
vector<ll>v;
bool isGood(ll mid)
{
	ll cnt = 1;
	ll sum = 0;
	for(int i = 0; i<n; i++)
	{

		if(v[i]> mid)
		{
			return false;
		}
		if(sum+v[i] > mid)
		{	sum = v[i];
			cnt++;
		}
		else{
			sum+=v[i];
		}
		//cout<< mid<<" sum is "<<sum<<" cnt = "<<cnt<<endl;
				
	}

	return cnt<=k;
}

void solve()
{
	cin >> n >> k;
	v.resize(n);
	for(auto &i: v) cin >> i;

	ll left = 0, right= 1e17;
	
	while(left<=right)
	{
		ll mid = (left + right) / 2;
		
		if( isGood(mid))
		{
			right= mid - 1;
		}
		else{
			left= mid + 1;
		}

	}
	cout<<left<<endl;

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