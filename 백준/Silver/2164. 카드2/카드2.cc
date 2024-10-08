#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	queue<int> q;

	int N, temp;
	cin >> N;

	for (int i = 1; i <= N; i++) q.push(i);

	while (q.size() > 1) {
		q.pop();
		if (q.size() == 1) break;

		q.push(q.front());
		q.pop();
	}

	cout << q.front();
	return 0;
}