#include <iostream>
using namespace std;

int main()
{
	int nums[6] = { 1,1,2,2,2,8 };
	int K, Q, R, B, N, P;

	cin >> K >> Q >> R >> B >> N >> P;
	cout << nums[0] - K << " " << nums[1] - Q << " " << nums[2] - R << " " << nums[3] - B << " " << nums[4] - N << " " << nums[5] - P << endl;

	return 0;
}