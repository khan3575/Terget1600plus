#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)



void solve()
{
	int n, m;
	cin >> n>> m;
	multiset<int> st;
	for(int i = 0; i< n ; i++)
	{
		int x;
		cin >> x;
		st.insert(x);
	}

	while(m--)
	{
		int x;
		cin>> x;
		auto it = st.upper_bound(x);
		if(it == st.begin())
		{
			cout<<-1<<endl;
		}
		else{
			cout<< *(--it)<<endl;
			st.erase(it);
		}
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