#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)

int current_move=0;

void solve(int disks, char starting, char ending, char spare, int move)
{
	if(disks==0)
	{
		return;
	}
	solve(disks-1, starting , spare, ending, move);

	// move the element to last
	current_move++;
	if(current_move==move)
	{
		cout<<disks<<" : "<<starting <<" => "<<ending<<endl;
		return;

	}
	solve(disks-1, spare, ending, starting, move);
	
}

int main()
{
	Unsync_IO;
	int test = 1;
	cin >> test; 
	while(test--)
	{
		int n, a;
		cin >> n >> a;
		current_move=0;
		solve(n, 'A', 'C', 'B', a);
	}
} 