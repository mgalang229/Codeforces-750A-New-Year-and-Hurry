#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int t = 0, f = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		t = 5+(5*i);
		f += t;
		if(f+k <= 240){
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
