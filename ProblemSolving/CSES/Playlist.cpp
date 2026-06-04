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
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}	
	deque<int> q;
	set<int> st;
	int ans=0;
	for(int i = 0; i< n ;i++)
	{

		auto it = st.find(v[i]);
		if(it != st.end()){
			while(q.front()!=v[i])
			{
				st.erase(q.front());
				q.pop_front();
			}
			q.pop_front();

			q.push_back(v[i]);
		}
		else{

			q.push_back(v[i]);
			st.insert(v[i]);
		}
		ans = max(ans, (int)q.size());
	}
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