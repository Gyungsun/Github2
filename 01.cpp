#include<iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	
	float x1 = 0;
	float x2 = 0;

	cout << "2����� ������ ���� ������ ���غ�����"<<endl ;
	cin >> A >> B >> C;

	x1 = ((-1 * B) + (float)sqrt(B * B - 4 * A * C)) / (2 * A);
	x2 = ((-1 * B) - (float)sqrt(B * B - 4 * A * C)) / (2 * A);
	
	cout << "����? " << endl;
	cout << x1 << endl;
	cout << x2 << endl;

	return 0;
}