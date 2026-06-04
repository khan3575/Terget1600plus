#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)

struct Event{
	int intime, outime;

	bool operator<(const Event& other) const{
		return intime < other.intime;
	}
};


void solve()
{
	int n;
	cin >> n;
	vector<Event> v(n);
	for(int i = 0; i< n; i++)
	{
		int 	}
	sort(v.begin(),v.end());

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