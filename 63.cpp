#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	std::vector<int> v; int n;
	while (cin >> n)
	{
		v.push_back(n);
	} int ans = 0;
	for (int j = 0; j < v.size() - 1; ++j)
	{
		for (int i = j + 1; i < v.size(); ++i)
		{
			if (v[j] > 2 * v[i]) {ans++;}
		}
	}
	cout << ans;
}