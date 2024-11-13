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
			return m; //�����ȸ�ؼЭȬ۵��A�^�ǥثe��m
		}
		else if (arr[m] > target)
		{
			r = m - 1; //�����Ȥj��ؼЭȡA����-1
		}
		else
		{
			l = m + 1; //�����Ȥp��ؼЭȡA�k��-1
		}
	}
	return -1; //���b�C���ɡA�^��-1
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