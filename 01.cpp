#include<iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

	cout << "2차방식 방정식 근의 공식을 구해보세요"<<endl ;
	cin >> A >> B >> C;

	D = ((-1 * B) +- ((B * B) - (4 * A * C))) / (2 * A);	// 루트를 어떻게 계산하지?

	cout << "답은? " << D << endl;	// 폭 to the 망.

	return 0;
}