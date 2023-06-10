#pragma once
#include <vector>
#include <exception>
#include <memory>
#include "message.h"


struct UserLoginExp : public std::exception
{
	const char* what()  const noexcept override { return "error:user login is busy"; }
};

class Chat {
	bool cont = false;
	char database[10][20] = { "User1", "123", "User2", "1234", "User3", "12345" };
	char login[20], password[20];
    std::vector<User> users_;
	std::vector<Message> messages_;
	std::shared_ptr<User> currentUser_ = nullptr;

	void login();
	void signUp();
	void showChat() const;
	void addMessage();
	std::vector<User>& getUsers() { return users_; }
	std::vector<Message>& getMessages() { return messages_; }
	std::shared_ptr<User> getLogin(const std::string& login) const;

public:
	void start();
	std::shared_ptr<User> getCurrentUser() const { return currentUser_; }
	void showLoginMenu();
	void showUserMenu();
};