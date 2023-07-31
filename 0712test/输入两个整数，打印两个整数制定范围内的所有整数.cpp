#include<iostream>
 
using namespace std;
 
int main()
{
	int val1 = 0, val2 = 0, num=0;
	cout << "Enter two number:" << endl;
	cin >> val1 >> val2;
	//abs == 取绝对值
	while (abs(val1-val2) != 1 && val1 != val2)
	{
		if (val1 < val2)
		{	
			++val1;
			num = val1;	
			cout << num << endl;
		}
		else
		{
			--val1;
			num = val1;
			cout << num << endl;
		}	
	}
	return 0;
}