#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int choice;
	cout << "����� �� ������ ������� ����������������?" << endl;
	cout << "��� ����� (1)" << endl;
	cout << "���������� (2)" << endl;
	cout << "� �� ����, �������� �� ���� (3)" << endl;
	cout << "������������ (4)" << endl;
	cout << "��������� (5)" << endl;
	cout << "������������ (6)" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "������� �� Scratch, �����..." << endl;
		cout << "Python" << endl;
	}
	if (choice == 2)
	{
		cout << "����� ������ (1)" << endl;
		cout << "� ���� ���� ���� ��� �������� (2)" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "����� ���������\ �����?" << endl;
			cout << "� ���� �������� � ������� IT �������� (1)" << endl;
			cout << "� ������ ���� $$$ (2)" << endl;
			cout << "��� (3)" << endl;
			cout << "����. ���� (4)" << endl;
			cout << "��������� (5)" << endl;
			cout << "3D ���� (6)" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "Facebook (1)" << endl;
				cout << "Google (2)" << endl;
				cout << "Apple (3)" << endl;
				cout << "Microsoft (4)" << endl;
				cin >> choice;
				if (choice == 1, 2)
				{
					cout << "Python" << endl;
				}
				if (choice == 3)
				{
					cout << "Objective-C" << endl;
				}
				if (choice == 4)
				{
					cout << "C#" << endl;
				}
			}
			if (choice == 2)
			{
				cout << "Java" << endl;
			}
			if (choice == 3)
			{
				cout << "Frontend (��� ���������) (1)" << endl;
				cout << "������ (��, ��� �� ���-������) (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java script" << endl;
				}
				if (choice == 2)
				{
					cout << "���� �������� ��..." << endl;
					cout << "���������� (1)" << endl;
					cout << "������� (2)" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "��� ������� � Microsoft?" << endl;
						cout << "����� ��� (1)" << endl;
						cout << "������� (2)" << endl;
						cout << "���� (3)" << endl;
						cin >> choice;
						if (choice == 1)
						{
							cout << "C#" << endl;
						}
						if (choice == 2, 3)
						{
							cout << "Java" << endl;
						}
					}
					if (choice == 2)
					{
						cout << "������ ����������� ���-�� �����, �� �� ����� ���������?" << endl;
						cout << "�� (1)" << endl;
						cout << "��� (2)" << endl;
						cout << "�� ���� (3)" << endl;
						cin >> choice;
						if (choice == 1)
						{
							cout << "Javascript" << endl;
						}
						if (choice == 2, 3)
						{
							cout << "����� � ��� ������� �������?" << endl;
							cout << "���������(1)" << endl;
							cout << "Lego (2)" << endl;
							cout << "����������, �� ������� ����� (3)" << endl;
							cin >> choice;
							if (choice == 1)
							{
								cout << "Ruby" << endl;
							}
							if (choice == 2)
							{
								cout << "Python" << endl;
							}
							if (choice == 3)
							{
								cout << "PHP" << endl;
							}
						}

					}
				}
			}
			if (choice == 4)
			{
				cout << "��� ������� � Microsoft? (1)" << endl;
				cout << "����� ��� (1)" << endl;
				cout << "������� (2)" << endl;
				cout << "���� (3)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "C#" << endl;
				}
				if (choice == 2, 3)
				{
					cout << "Java" << endl;
				}
			}
			if (choice == 5)
			{
				cout << "����� ��?" << endl;
				cout << "IOS (1)" << endl;
				cout << "Android (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Objective-C" << endl;
				}
				if (choice == 2)
				{
					cout << "Java" << endl;
				}
			}
			if (choice == 6)
			{
				cout << "C++" << endl;
			}
		}
		if (choice == 2)
		{
			cout << "����� ��������\ �����?" << endl;
			cout << "3D ���� (1)" << endl;
			cout << "��������� (2)" << endl;
			cout << "����.���� (3)" << endl;
			cout << "��� (4)" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "C++" << endl;
			}
			if (choice == 2)
			{
				cout << "����� ��?" << endl;
				cout << "IOS (1)" << endl;
				cout << "Android (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java" << endl;
				}
				if (choice == 2)
				{
					cout << "Objective-C" << endl;
				}
			}
			if (choice == 3)
			{
				cout << "��� ������� � Microsoft? (1)" << endl;
				cout << "����� ��� (1)" << endl;
				cout << "������� (2)" << endl;
				cout << "���� (3)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "C#" << endl;
				}
				if (choice == 2, 3)
				{
					cout << "Java" << endl;
				}
			}
			if (choice == 4)
			{
				cout << "��� ������ ����� �������� � �������� �������, ��� twitter?" << endl;
				cout << "�� (1)" << endl;
				cout << "��� (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java script" << endl;
				}
				if (choice == 2)
				{
					cout << "������ ����������� ���-�� �����, �� �� ����� ���������?" << endl;
					cout << "�� (1)" << endl;
					cout << "��� (2)" << endl;
					cout << "�� ���� (3)" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Javascript" << endl;
					}
					if (choice == 2, 3)
					{
						cout << "����� � ��� ������� �������?" << endl;
						cout << "���������(1)" << endl;
						cout << "Lego (2)" << endl;
						cout << "����������, �� ������� ����� (3)" << endl;
						cin >> choice;
						if (choice == 1)
						{
							cout << "Ruby" << endl;
						}
						if (choice == 2)
						{
							cout << "Python" << endl;
						}
						if (choice == 3)
						{
							cout << "PHP" << endl;
						}
					}
				}
			}
		}
	}
	if (choice == 3)
	{
		cout << "Python" << endl;
	}
	if (choice == 4, 5, 6)
	{
		cout << "��� ���� ���� �� �������?" << endl;
		cout << "���.������ ���� ������ (1)" << endl;
		cout << "�� (2)" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "��� �������� �������" << endl;
			cout << "������� �������� (1)" << endl;
			cout << "������ �������� (2)" << endl;
			cout << "����������� �������� (3)" << endl;
			cout << "����� ������� ���� (�� ����� ����� �����) (4)" << endl;
			cin >> choice;
			if (choice == 1, 2)
			{
				cout << "Python" << endl;
			}
			if (choice == 3)
			{
				cout << "����� ������� �������?" << endl;
				cout << "������� (1)" << endl;
				cout << "������ (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java" << endl;
				}
				if (choice == 2)
				{
					cout << "C" << endl;
				}
			}
			if (choice == 4)
			{
				cout << "C++" << endl;
			}
		}
		if (choice == 2)
		{
			cout << "����� ��������\ �����?" << endl;
			cout << "3D ���� (1)" << endl;
			cout << "��������� (2)" << endl;
			cout << "����.���� (3)" << endl;
			cout << "��� (4)" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "C++" << endl;
			}
			if (choice == 2)
			{
				cout << "����� ��?" << endl;
				cout << "IOS (1)" << endl;
				cout << "Android (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java" << endl;
				}
				if (choice == 2)
				{
					cout << "Objective-C" << endl;
				}
			}
			if (choice == 3)
			{
				cout << "��� ������� � Microsoft? (1)" << endl;
				cout << "����� ��� (1)" << endl;
				cout << "������� (2)" << endl;
				cout << "���� (3)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "C#" << endl;
				}
				if (choice == 2, 3)
				{
					cout << "Java" << endl;
				}
			}
			if (choice == 4)
			{
				cout << "��� ������ ����� �������� � �������� �������, ��� twitter?" << endl;
				cout << "�� (1)" << endl;
				cout << "��� (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java script" << endl;
				}
				if (choice == 2)
				{
					cout << "������ ����������� ���-�� �����, �� �� ����� ���������?" << endl;
					cout << "�� (1)" << endl;
					cout << "��� (2)" << endl;
					cout << "�� ���� (3)" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Javascript" << endl;
					}
					if (choice == 2, 3)
					{
						cout << "����� � ��� ������� �������?" << endl;
						cout << "���������(1)" << endl;
						cout << "Lego (2)" << endl;
						cout << "����������, �� ������� ����� (3)" << endl;
						cin >> choice;
						if (choice == 1)
						{
							cout << "Ruby" << endl;
						}
						if (choice == 2)
						{
							cout << "Python" << endl;
						}
						if (choice == 3)
						{
							cout << "PHP" << endl;
						}
					}

				}



			}
		}
	}
}