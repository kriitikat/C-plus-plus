#include <iostream>
#include <string>
using namespace std;

class CaesarCipher
{
private:
    int key;

public:
    CaesarCipher(int shift = 3)
    {
        key = shift;
    }
    string encode(const string &text)
    {
        string result = text;

        for (char &c : result)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c = 'A' + ((c - 'A' + key) % 26);
            }
            else if (c >= 'a' && c <= 'z')
            {
                c = 'a' + ((c - 'a' + key) % 26);
            }
        }
        return result;
    }

    string decode(const string &text)
    {
        string result = text;

        for (char &c : result)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c = 'A' + ((c - 'A' - key + 26) % 26);
            }
            else if (c >= 'a' && c <= 'z')
            {
                c = 'a' + ((c - 'a' - key + 26) % 26);
            }
        }
        return result;
    }
};

int main()
{
    string message;

    cout << "Enter message: ";
    getline(cin, message);

    CaesarCipher cipher(3); 

    string encrypted = cipher.encode(message);
    string decrypted = cipher.decode(encrypted);

    cout << "Encoded: " << encrypted << endl;
    cout << "Decoded: " << decrypted << endl;

    return 0;
}