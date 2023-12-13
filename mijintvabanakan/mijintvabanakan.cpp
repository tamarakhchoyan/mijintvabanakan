#include <iostream>
int main()
{
	const int n = 7;
	int a[n], sum = 0;
	int i;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for(i=0;i<n;++i)
	sum +=a[i];
	double res = double(sum) / n;
	std::cout << res;
	return 0;
}