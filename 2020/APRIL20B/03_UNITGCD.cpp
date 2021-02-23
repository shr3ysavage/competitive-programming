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
		if(n == 1) {
			cout << 1 << '\n';
			cout << 1 << ' ' << 1 << '\n';
		} else {
			cout << n / 2 << '\n';
			if(n % 2) {
				cout << 3 << ' ' << 1 << ' ' << 2 << ' ' << n << '\n';
			} else {
				cout << 2 << ' ' << 1 << ' ' << 2 << '\n';
			}
			for(int i = 4; i <= n; i += 2) {
				cout << 2 << ' ' << i - 1 << ' ' << i << '\n';
			}
		}
	}

	return 0;
}

/*
There are (N / 2) even numbers.
So, by Pigeonhole principle, we can't put any two even integers on the same day, since it would violate the given condition.
There are 2 cases:
* N is even: Read 2 pages every day, with adjacent page numbers because two adjacent numbers are never co-prime.
* N is odd: Read pages 1, 2 and N on the first day, then 2 pages with adjacent page numbers every day.
TWO ADJACENT NUMBERED PAGES CAN NEVER HAVE THE SAME PRIME DIVIDING THEM.
*/

/*
Unit GCD
Chef has a recipe book. He wishes to read it completely as soon as possible so that he could try to cook the dishes mentioned in the book.

The pages of the book are numbered 1 through N. Over a series of days, Chef wants to read each page. On each day, Chef can choose to read any set of pages such that there is no prime that divides the numbers of two or more of these pages, i.e. the numbers of pages he reads on the same day must be pairwise coprime. For example, Chef can read pages 1, 3 and 10 on one day, since (1,3), (3,10) and (1,10) are pairs of coprime integers; however, he cannot read pages 1, 3 and 6 on one day, as 3 and 6 are both divisible by 3. Since chef might get bored by reading the same recipe again and again, Chef will read every page exactly once.

Given N, determine the minimum number of days Chef needs to read the entire book and the pages Chef should read on each of these days.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case:

First, print a line containing a single integer D ― the minimum number of days required to read the book. Let's number these days 1 through D.
Then, print D lines describing the pages Chef should read. For each valid i, the i-th of these lines should contain an integer Ci followed by a space and Ci space-separated integers ― the numbers of pages Chef should read on the i-th day.
If there are multiple solutions with the minimum number of days, you may print any one.

Constraints
1≤T≤10
1≤N≤106
Subtasks
Subtask #1 (20 points): N≤100
Subtask #2 (80 points): original constraints

Example Input
1
5
Example Output
2
3 1 2 5
2 3 4
Explanation
Example case 1:

On the first day, Chef should read three pages: 1, 2 and 5.
On the second day, Chef should read the remaining two pages: 3 and 4.
There are other valid solutions as well.
*/