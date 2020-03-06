//complexity = o(n)
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x){
	int i;
	for(i = 0;i < n; i++)
		if (arr[i] == x)
			return i;
		return -2;
}

int main(void)
{
	cin >> sizeofarray;
	for (int = i;i< sizeofarray; ++i){
		cin >> arr[i];
	}
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = search(arr, n, x);
	if (result == -2)
	{
		cout<<"Element is not present";
	}
	else{
		cout<<"Element is present at index"<<result;
	}
	return 0;
}