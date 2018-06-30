#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int choice;
	cout << "Зачем вы хотите изучить программирование?" << endl;
	cout << "Для детей (1)" << endl;
	cout << "Заработать (2)" << endl;
	cout << "Я не знаю, выберите за меня (3)" << endl;
	cout << "Поразвлечься (4)" << endl;
	cout << "Интересно (5)" << endl;
	cout << "Саморазвитие (6)" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Начните со Scratch, затем..." << endl;
		cout << "Python" << endl;
	}
	if (choice == 2)
	{
		cout << "Найти работу (1)" << endl;
		cout << "У меня есть идея для стартапа (2)" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Какая платформа\ сфера?" << endl;
			cout << "Я хочу работать в крупной IT компании (1)" << endl;
			cout << "Я просто хочу $$$ (2)" << endl;
			cout << "Веб (3)" << endl;
			cout << "Корп. софт (4)" << endl;
			cout << "Мобильная (5)" << endl;
			cout << "3D игры (6)" << endl;
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
				cout << "Frontend (Веб интерфейс) (1)" << endl;
				cout << "Бэкенд (то, что за веб-сайтом) (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java script" << endl;
				}
				if (choice == 2)
				{
					cout << "Хочу работать на..." << endl;
					cout << "Корпорацию (1)" << endl;
					cout << "Стартап (2)" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Что скажете о Microsoft?" << endl;
						cout << "Люблю его (1)" << endl;
						cout << "Неплохо (2)" << endl;
						cout << "Фууу (3)" << endl;
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
						cout << "Хотите попробовать что-то новое, но не очень трудоёмкое?" << endl;
						cout << "Да (1)" << endl;
						cout << "Нет (2)" << endl;
						cout << "Не знаю (3)" << endl;
						cin >> choice;
						if (choice == 1)
						{
							cout << "Javascript" << endl;
						}
						if (choice == 2, 3)
						{
							cout << "Какая у вас любимая игрушка?" << endl;
							cout << "Пластилин(1)" << endl;
							cout << "Lego (2)" << endl;
							cout << "Старенький, но любимый мишка (3)" << endl;
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
				cout << "Что скажите о Microsoft? (1)" << endl;
				cout << "Люблю его (1)" << endl;
				cout << "Неплохо (2)" << endl;
				cout << "Фууу (3)" << endl;
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
				cout << "Какая ОС?" << endl;
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
			cout << "Какая плтформа\ сфера?" << endl;
			cout << "3D игры (1)" << endl;
			cout << "Мобильная (2)" << endl;
			cout << "Корп.софт (3)" << endl;
			cout << "Веб (4)" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "C++" << endl;
			}
			if (choice == 2)
			{
				cout << "Какая ОС?" << endl;
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
				cout << "Что скажите о Microsoft? (1)" << endl;
				cout << "Люблю его (1)" << endl;
				cout << "Неплохо (2)" << endl;
				cout << "Фууу (3)" << endl;
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
				cout << "Ваш сервис будет работать в реальном времени, как twitter?" << endl;
				cout << "Да (1)" << endl;
				cout << "Нет (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java script" << endl;
				}
				if (choice == 2)
				{
					cout << "Хотите попробовать что-то новое, но не очень трудоёмкое?" << endl;
					cout << "Да (1)" << endl;
					cout << "Нет (2)" << endl;
					cout << "Не знаю (3)" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Javascript" << endl;
					}
					if (choice == 2, 3)
					{
						cout << "Какая у вас любимая игрушка?" << endl;
						cout << "Пластилин(1)" << endl;
						cout << "Lego (2)" << endl;
						cout << "Старенький, но любимый мишка (3)" << endl;
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
		cout << "Уже есть идея на миллион?" << endl;
		cout << "Нет.Просто хочу начать (1)" << endl;
		cout << "Да (2)" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Мне нравится учиться" << endl;
			cout << "Простым способом (1)" << endl;
			cout << "Лучшим способом (2)" << endl;
			cout << "Трудненьким способом (3)" << endl;
			cout << "Очень сложный путь (но потом будет легче) (4)" << endl;
			cin >> choice;
			if (choice == 1, 2)
			{
				cout << "Python" << endl;
			}
			if (choice == 3)
			{
				cout << "Какая коробка передач?" << endl;
				cout << "Автомат (1)" << endl;
				cout << "Ручная (2)" << endl;
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
			cout << "Какая плтформа\ сфера?" << endl;
			cout << "3D игры (1)" << endl;
			cout << "Мобильная (2)" << endl;
			cout << "Корп.софт (3)" << endl;
			cout << "Веб (4)" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "C++" << endl;
			}
			if (choice == 2)
			{
				cout << "Какая ОС?" << endl;
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
				cout << "Что скажите о Microsoft? (1)" << endl;
				cout << "Люблю его (1)" << endl;
				cout << "Неплохо (2)" << endl;
				cout << "Фууу (3)" << endl;
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
				cout << "Ваш сервис будет работать в реальном времени, как twitter?" << endl;
				cout << "Да (1)" << endl;
				cout << "Нет (2)" << endl;
				cin >> choice;
				if (choice == 1)
				{
					cout << "Java script" << endl;
				}
				if (choice == 2)
				{
					cout << "Хотите попробовать что-то новое, но не очень трудоёмкое?" << endl;
					cout << "Да (1)" << endl;
					cout << "Нет (2)" << endl;
					cout << "Не знаю (3)" << endl;
					cin >> choice;
					if (choice == 1)
					{
						cout << "Javascript" << endl;
					}
					if (choice == 2, 3)
					{
						cout << "Какая у вас любимая игрушка?" << endl;
						cout << "Пластилин(1)" << endl;
						cout << "Lego (2)" << endl;
						cout << "Старенький, но любимый мишка (3)" << endl;
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