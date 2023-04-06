#include <iostream>
#include <string>
using namespace std;

int compare(string a, string b)
{
    int size_a_b = a.size();
    for (int i = 0; i < size_a_b; i++)
    {
        if (a[i] != b[i])
        {
            int code_a = (int)a[i];
            int code_b = (int)b[i];
            if (code_a < code_b)
            {
                /*if the current letter in string a is uppercase and the current letter
            in string b is lowercase*/
                if ((65 <= code_a <= 90) && (97 <= code_b <= 122))
                {
                    if ((90 - code_a) == (122 - code_b))
                    {
                        if (i != (size_a_b - 1))
                        {
                            continue;
                        }
                        else
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        return (-1);
                    }
                }
                else
                {
                    return (-1);
                }
            }
            else if (code_a > code_b)
            {
                /*if the current letter in string a is lowercase and the current letter
            in string b is uppercase*/
                if ((97 <= code_a <= 122) && (65 <= code_b <= 90))
                {
                    if ((122 - code_a) == (90 - code_b))
                    {
                        if (i != (size_a_b - 1))
                        {
                            continue;
                        }
                        else
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
        else 
        {
            if (i != (size_a_b - 1))
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
    }
}

int main()
{
    string first_s, second_s;
    getline(cin, first_s);
    getline(cin, second_s);
    cout<<compare(first_s, second_s)<<endl;
    return 0;
}
