#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct _data
{
	int number;
	int rank;
};
bool cmp1(const _data &a, const _data &b)
{
	if (a.number < b.number)
		return 1;
	else
		return 0;
}
bool cmp2(const _data& a, const _data& b)
{
	if (a.rank < b.rank)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	cin >> n;

	vector<_data> d(n);
	for (int i = 0; i < n; i++)
	{
		cin >> d[i].number;
		d[i].rank = i;
	}

	sort(d.begin(), d.end(), cmp1);

	for (int i = 0; i < n; i++)
		d[i].number = i;

	sort(d.begin(), d.end(), cmp2);

	for (int i = 0; i < n; i++)
		cout << d[i].number << ' ';
}