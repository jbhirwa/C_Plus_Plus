#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            string str(argv[i]);
            for (size_t j = 0; j < str.size(); j++)
            {
                if (str[j] >= 'a' && str[j] <= 'z')
                    cout << (char)toupper(str[j]);
                else
                    cout << str[j];
            }
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}