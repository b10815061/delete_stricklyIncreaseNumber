#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	int length;
	int thereshold;
	cin.tie(0);
	cin >> length;
	int out = length;
	cin.tie(0);
	cin >> thereshold;
	int flag = 1;
	unsigned int* arr = new unsigned int[length]();
	for (int i = 0, pos = 0; i < length; i = i + 1)
	{
		cin.tie(0);
		cin >> arr[pos];
		if (pos > 0) {
			for (int g = 1; g <= thereshold; g++)
			{
				if (pos - g >= 0) {
					if (arr[pos] > arr[pos - g]) {
						flag++;
						if (flag == thereshold) {
							for (int j = flag; j > 0; j--)
							{
								arr[pos + 1 - j] = 0;
							}
							pos = pos - flag;
							flag = 1;
							out -= thereshold;
						}
					}
					else {
						flag = 1;
						break;
					}
				}
				else {
					flag = 1;
					break;
				}
			}
		}
		pos = pos + 1;

	}
	for (int i = 0; i<out; i = i + 1)
	{
		cout << arr[i] << " ";
	}
	return 0;
}