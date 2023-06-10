#include <iostream>
#include "message.h"
#include "User.h"
#include "Chat.h"

int main()
{
    Chat chat;

    chat.start();

    bool cont();
    {
        chat.showLoginMenu();

        while (chat.getCurrentUser()) {
            chat.showUserMenu();
        }

    }

    return 0;
}