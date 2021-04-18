#include <iostream>

using namespace std;

int main5()
{
	int nums[5];

	nums[0] = 10;


	int nums1[5] = { 10,20,30 };

	cout << sizeof(nums1) << endl;

	cout << sizeof(nums1) / sizeof(nums1[0]) << endl;



	int points[2][3];
	int points_1[2][3] =
	{
		{1,2,3},
		{4,8,9}
	};

	int points_2[2][3] = { 6,7,8,9,10 ,11 };
	int points_3[][3] = { 3,4,56,7,8,9 };




	return 0;
}