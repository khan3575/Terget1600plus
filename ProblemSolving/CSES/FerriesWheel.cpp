#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)



void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int &i : v) cin >> i;

	sort(v.begin(),v.end());
	int cnt= 0;
	int ignored=0;
	int left = 0 , right = n-1;

	while(left<=right)
	{
		if(left==right)
		{
			cnt++;
			break;
		}
		//cout<< left<<" "<< right<<endl;
		if(v[left]+v[right] > k)
		{
			right--;
			ignored++;
		}
		else{
			left++;
			right--;
			cnt++;
		}

	}
	cout<< cnt+ignored<<endl;
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