#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)


bool isPossible(vector<ll>&v, ll mid,ll terget)
{
	ll cnt = 0 ;
	for(ll i: v)
	{
		cnt += (mid/i);
		if(cnt>=terget)
		{
			break;
		}
	}
	//cout<<"count "<<cnt<<endl;
	return cnt >= terget;
}

void solve()
{
	ll n, terget;
	cin >> n >> terget;
	vector<ll>v(n);
	for(int i = 0; i < n; i++){cin >> v[i];}

	ll left = 1, right = 1e18;
	while(left<=right)
	{
		ll mid = (left + right)/2;
		if(isPossible(v,mid,terget))
		{
			right= mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	cout<< left<<endl;
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