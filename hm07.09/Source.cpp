#include <iostream> 
#include <Windows.h> 
using namespace std;

class Cord
{
private:
    char* cordinatx;


public:

    Cord() // конструктор по умолчанию
    {
        cout << "Constructor by Cord\n";
        char* cordinatx = nullptr;

    }

    Cord(const char* x, const char* y, const char* z)
    {
        //cout << "Cord: x =";
        cordinatx = new char[strlen(x) + 1];
        strcpy_s(cordinatx, strlen(x) + 1, x);



    }


    void Print()
    {
        cout << "Cord: x = " << cordinatx << "\n";

    }
    void Input() {
        char buf[200];
        cout << "Enter your point : ";
        cin.getline(buf, 200);
        if (cordinatx != nullptr) {
            cout << cordinatx << " is removed! \n";
            delete[]cordinatx;
        }

    }
    ~Cord() // деструктор
    {
        cout << "Destructor\n";
        delete[]cordinatx;

    }
    void Setcordinatx(char* x)
    {
        cordinatx = x;
    }
    char* Getcordinatx()
    {
        return cordinatx;
    }

};

int main()
{
    setlocale(LC_ALL, "RUS");
    Cord obj1("12", "17", "02");
    obj1.Print();
    obj1.Input();
    obj1.Print();

}
