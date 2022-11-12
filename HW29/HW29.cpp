#include <iostream>
#include <fstream>
#include <string>

using namespace std;


bool overwrite(string path, string str)
{
    ifstream in(path);
    if (in.is_open() == false)
    {
        return false;
    }
    else
    {
        in.close();
    }


    ofstream out(path);

    if (out.is_open())
    {
        out << str;
        out.close();
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << overwrite("g:\\temp\\123.txt", "qwe") << endl;
    cout << overwrite("g:\\temp\\12345.txt", "qwe") << endl;
}
