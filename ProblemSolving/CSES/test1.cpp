#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define Unsync_IO ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)


void jump(int n, char fromRod, char toRod, char auxRod)
{
	if(n==0)
	{
		return;
	}
	cout<< n<<  " "<<fromRod<<" "<<toRod<<" "<<auxRod<<endl;
	jump(n-1, fromRod , auxRod , toRod);
	jump(n-1,  auxRod, toRod, fromRod);

}

void solve()
{
	jump(3,'a','b','c');
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