#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0, a = 0, a_rem = n, b = 0, b_rem = n;
		for(int i = 1; i <= 2 * n; ++i) {
			int curr = s[i - 1] - '0';
			++ans;
			if(i % 2) {
				if(curr) ++a;
				--a_rem;
			} else {
				if(curr) ++b;
				--b_rem;
			}
			if(a > b + b_rem || b > a + a_rem) break;
		}
		cout << ans << '\n';
	}

	return 0;
}

/*
At the beginning, both teams have N scorable goals.
With each passing chance, their scorable goals decrease by 1, regardless of whether they score a goal.
If a team has scored more than the opponent's current goals and the remaining scorable goals combined, that team will win even if opponent scores all remaining goals.
* So, the result can be decided at that point.
*/

/*
Teams A and B are having a penalty shoot-out to decide the winner of their football match. Each team gets to take a shot N times, and the team with the higher number of scored goals at the end wins. If the number of goals scored during the shoot-out by each team turns out to be the same even after all 2N shots, then they stop and agree that the result is a draw.

The two teams take shots alternately — team A shoots first, then team B shoots, then team A and so on until team B takes its N-th shot (at which point each team has taken exactly N shots). Even though all 2N shots are taken, the result of the shoot-out is often known earlier — e.g. if team A has already scored N−1 goals and team B has missed at least two shots, team A is definitely the winner.

For each shot, you know whether it was a goal or a miss. You need to find the earliest moment when the winner is known — the smallest s (0≤s≤2N) such that after s shots, the result of the shoot-out (whether team A won, team B won or the match is drawn) would be known even if we did not know the results of the remaining 2N−s shots.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a string S with length 2⋅N, where for each valid i, the i-th character is '0' if the i-th shot was a miss or '1' if it was a goal.
Output
For each test case, print a single line containing one integer — the smallest s such that after s shots, the result of the shoot-out is known.

Constraints
1≤T≤105
1≤N≤105
S contains only characters '0' and '1'
the sum of N over all test cases does not exceed 106
Example Input
2
3
101011
3
100001
Example Output
4
6
Explanation
Example case 1: After four shots, team A has scored 2 goals and team B has scored 0 goals. Whatever happens afterwards, team A is guaranteed to win, since even if team B scored their last (and only) goal and team A did not score their last goal, team A would still win by 1 goal.

Example case 2: Team A scores the first goal and after that, neither team scores any goals until the last shot. Up till then, there is always a possibility that the match could end in a draw if team B scored a goal with its last shot, or in the victory of team A if it was a miss. We can only guarantee the result after the last shot.
*/
