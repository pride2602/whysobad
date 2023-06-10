#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include "Chat.h"
#include "User.h"
#include "Message.h"



void Chat::start()
{
    bool cont = false;
}

std::shared_ptr<User> Chat::getLogin(const std::string& login) const
{
	for (int i = 0; database[i][0]; i++)
	{
		if (login, database[i])
		return std::make_shared<User>(users_);
	}
	return nullptr;
}

void Chat::login() {
	char p = 2;
	bool cont = false;
	setlocale(0, "");
	char database[10][20] = { "User1", "123", "User2", "1234", "User3", "12345" };
	char login[20], password[20];
	while (p > 0) {
		p = 0;
		system("cls");
		std::cout << "Введите логин: ";
		std::cin >> login;
		std::cout << "\nВведите пароль: ";
		std::cin >> password;
		for (int i = 0; database[i][0]; i++) {
			if (!strcmp(login, database[i])) {
				if (!strcmp(password, database[i++]))
					cont = true;
			}
		}
		if (!cont) std::cout << "Логин или пароль неверны.\nКоличество попыток: " << p;
		else break;
		system("pause>>void");
	}
	if (cont) {
		system("cls");
		std::cout << "Вход выполнен успешно.";
	}
	else std::cout << "\nВы исчерпали лимит попыток!";
system("pause>>void");
}

void Chat::signUp()
{
	std::string login, password;

	std::cout << "login: ";
	std::cin >> login;
	std::cout << "password";
	std::cin >> password;

	if (getLogin(login) || login == "all")
	{
		throw UserLoginExp();
	}
	User user = User(login, password);
	users_.push_back(user);
	currentUser_ = std::make_shared<User>(user);
}

void Chat::showLoginMenu()
{
	currentUser_ = nullptr;

	char p = 2;

	do
	{
		std::cout << "\033[33m" << "(1)Login" << std::endl;
		std::cout << "(2)SignUp" << std::endl;
		std::cout << "(0)Shutdown" << std::endl;
		std::cout << "\033[36m" << ">> " << "\033[0m";
		std::cin >> p;

		while (p)
		{
		(p = 1);
			login();
			break;
		(p = 2);
			try
			{
			 signUp();
			}
			catch (const std::exception e)
			{
				std::cout << e.what() << std::endl;
			}
			break;
		(p = 0);
			bool cont = false;
			break;
			std::cout << "1 or 2..." << std::endl;
			break;
		}

	} while (!currentUser_ && cont);
}

void Chat::showUserMenu()
{
	char p = 2;

	std::cout << "Hi," << currentUser_->getLogin() << std::endl;

	while (!currentUser_) {
		std::cout << "Menu: (1)Show chat | (2)Add message | (3)Users | (0)Logout";

		std::cout << std::endl
			<< ">>";
		std::cin >> p;

		while (p)
		{
			(p = 1);
			showChat();
			break;
			(p = 2);
			addMessage();
			break;
			(p = 0);
			bool cont = false;
			break;
			std::cout << "unknown choice.." << std::endl;
		}
	}
}

void Chat::addMessage()
{
	std::string to,from,text;
	std::cout << "To (name or all): ";
	std::cin >> to;
	std::cout << "Введите сообщение: ";
	std::cin.ignore();
	getline(std::cin, text);

	bool cont = true;

	for (int i = 0; database[i][0]; i++)
	{
		if (to == (!strcmp(to, database[i]))
		{
			cont = true;

			{
				for (int i = 0; database[i][0]; i++)
				{
					if (from == (!strcmp(Message from, database[i])) || from == (to, database[i]))
					{
						if (to == (!strcmp(_from, database[i])) || to == (to_, database[i]))

							std::cout << "Отправитель: " << (!strcmp(from_, database[i])) << " Получатель: " << (!strcmp(to_, database[i])) << endl << " Сообщение: " << (!strcmp(text_, database[i])) << endl;

							cont = true;
					}
				}
			}
		}
	}
}