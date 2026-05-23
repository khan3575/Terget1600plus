#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)

ll n, k;
vector<ll>v;

bool isPossibleMedian(ll mid)
{
	ll cost = 0;
	for(int i =  n/2; i< n; i++)
	{
		if(v[i] < mid)
		{
			cost += (mid-v[i]);
		}

		if(cost> k)
		{
			break;
		}
	}
	//cout<< "cost " <<cost<<endl;
	return cost <= k;
}

void solve()
{
	cin >> n >> k;
	v.resize(n);
	for(auto &i: v) cin >> i;



	sort(v.begin(),v.end());
	ll left = 0, right = 1e15;
	while(left<=right)
	{
		//cout<< left<<" "<< right<<endl;
		ll mid = (left + right)/2;
		if(isPossibleMedian(mid))
		{
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	cout<<right<<endl;

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