#include<iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	cout << "2����� ������ ���� ������ ���غ�����"<<endl ;
	cin >> A >> B >> C;

	D = ((-1 * B) +- ((B * B) - (4 * A * C))) / (2 * A);	// ��Ʈ�� ��� �������?

	cout << "����? " << D << endl;	// �� to the ��.

	return 0;
}