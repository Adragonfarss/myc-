#include <iostream>

using namespace std;

bool is_palindrome(string text)
{
    string reverse = "";

    for (int i = text.size() - 1; i >= 0; i--)
    {
        reverse += text[i];
    }

    if (reverse == text)
    {
        return true;
    }

    return false;
}

int main()
{
    cout << is_palindrome("mam") << endl;
    cout << is_palindrome("madam") << endl;
    cout << is_palindrome("father") << endl;
}