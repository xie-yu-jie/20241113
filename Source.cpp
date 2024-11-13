#include<iostream>
#include<string>
#include<vector>
using namespace std;

template<typename T>
int binary_search(int l, int r, T target, T arr[])
{
	int m = (l + r) / 2;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (arr[m] == target)
		{
			return m; //當中間值跟目標值相等，回傳目前位置
		}
		else if (arr[m] > target)
		{
			r = m - 1; //當中間值大於目標值，左邊-1
		}
		else
		{
			l = m + 1; //當中間值小於目標值，右邊-1
		}
	}
	return -1; //當不在列表里時，回傳-1
}

int main()
{
	int n, q;
	char t;

	cin >> t >> n >> q;
	
	if (t == 'i')
	{
		int arr[30];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < q; i++)
		{
			int target;
			cin >> target;
			int re = binary_search(0, n-1, target, arr);
			cout << re << endl;
		}

	}
	if (t == 's')
	{
		string arr[100];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < q; i++)
		{
			string target;
			cin >> target;
			int re = binary_search(0, n-1, target, arr);
			cout << re << endl;
		}
	}

	return 0; 
}