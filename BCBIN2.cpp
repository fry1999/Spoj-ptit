#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 1e4;
int root[maxn+1], p;
 
int Get(int u)
{
	if (!root[u]) return u;
	return root[u] = Get(root[u]);
}
 
int main()
{
	ios::sync_with_stdio(0);//?
	cin.tie(NULL); cout.tie(NULL);//?
	cin >> p;
	while (p--)
	{
		int u, v, type;
		cin >> u >> v >> type;
		int U = Get(u), V = Get(v);
		if (type == 1) { if (U != V) root[U] = V; }
		else
.			if (U == V) cout << 1 << "\n";
			else cout << 0 << "\n";
	}
	return 0;
}
