// vectins.cpp
// ������������ ������� insert(), erase()

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[] = { 100, 110, 120, 130 }; // ������ ���� int
	vector<int> v(arr, arr + 4); // ���������������� ������ ��������
	
	cout << "\n����� ��������: ";
	for (int j = 0; j < v.size(); j++) // ������� ��� ��������
		cout << v[j] << ' ';
	
	v.insert(v.begin() + 2, 115); // �������� 115 � ������� 2
	cout << "\n����� �������: ";
	for (int j = 0; j < v.size(); j++) // ������� ��� ��������
		cout << v[j] << ' ';

	v.erase(v.begin(),v.begin() + 2); // ������� ������� �� 2 �������
	cout << "\n����� ��������: ";
	for (int j = 0; j < v.size(); j++) // ������� ��� ��������
		cout << v[j] << ' ';

	cout << endl;
	return 0;
}