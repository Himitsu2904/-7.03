#include <iostream> //����������� ���������� �����-������
using namespace std; //����������� ���� std

int main() //������� ������� ���������, ����� �� ������
{
	setlocale(0, "ru"); //����������� ���� ���������
	/*��� ������ ����� �����. ���������������� �����������, ��������� ������� �������� ������� � ������� �
	��������� ��������� (�.�.�� �������� �������, ������� ����� �� ������ ������, ��������� � ����������, �������
	����� �� �������� ������).*/
	
	const int size = 10; //��������� ��������� ������� �������
	int arr[size], temp; //��������� ������� � ���������� ��� ������ ���������� ���� ���������� ����������
	int *mass = &arr[0]; //��������� ��������� �� ����� ������� �������� �������
	srand(time(0));
	//�������, ��������� ������� ������ ��� ��� ��������� ��������� �������� ����� �������������� ������ �����
	for (int i = 0; i < size; i++) //���� ��������� ��������� �������� ��������� �������
	{
		*(mass + i) = rand() % 21; //��������� ���������� �������� �������� �������
		cout << *(mass + i) <<"\t"; //����� �������� �������
	}
	cout << "\n������ � ���������� ����������: "<<endl;
	for (int i = 0; i < size; i+=2) //���� ������ ������� ��������� ��� (��)������� ���������
	{
		temp = *(mass + i); //������������ ��������� ���������� �������� �������� ��� ������ ��������
		*(mass + i) = *(mass + i + 1); //������������ �������� ��� ������ �������� �������� �������� ���������
		*(mass + i + 1) = temp; //������������ �������� ��� ������� �������� �������� ��������� ����������
		cout << *(mass + i) << "\t" << *(mass + i + 1) <<"\t"; //����� �������������� ���������
	}
}