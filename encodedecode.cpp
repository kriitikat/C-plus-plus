#include <iostream>
#include <string>
using namespace std;
string encode(const string &text, int shift = 3)
{
    string result = text;

    for (char &c : result)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + ((c - 'A' + shift) % 26);
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = 'a' + ((c - 'a' + shift) % 26);
        }
    }
    return result;
}

string decode(const string &text, int shift = 3)
{
    string result = text;

    for (char &c : result)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + ((c - 'A' - shift + 26) % 26);
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = 'a' + ((c - 'a' - shift + 26) % 26);
        }
    }

    return result;
}

int main()
{
    string message;

    cout << "Enter message: ";
    getline(cin, message);

    string encrypted = encode(message);
    string decrypted = decode(encrypted);

    cout << "Encoded: " << encrypted << endl;
    cout << "Decoded: " << decrypted << endl;

    return 0;
}