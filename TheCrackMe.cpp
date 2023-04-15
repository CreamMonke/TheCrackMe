#include <iostream>

int main()
{
    start:
    std::string username;
    std::cout << "Enter Username: ";
    std::cin >> username;

    if (username.length() < 3) { std::cout << "Username must be longer than 2 characters!\n\n"; goto start; }

    std::string password;
    std::cout << "Enter Password: ";
    std::cin >> password;
    std::cout << "\n";

    std::string answer = username;
    int len = username.length();
    for (int i = 0; i < len; i++)
    {
        int num = (int)username[i];
        num += len * 2 + i;
        num = num > 126 ? 126 : num;
        answer[i] = (char)num;
    }

    if (password == answer) { std::cout << "Correct!\n\n"; }
    else { std::cout << "Try Again...\n\n"; goto start; }
    
    system("pause");
}