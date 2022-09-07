#include <iostream> 
#include <Windows.h> 
using namespace std;

class Cord
{
private:
    char* cordinatx;
    //char* cordy;
    //char* cordez;

public:

    Cord() // конструктор по умолчанию
    {
        cout << "Constructor by Cord\n";
        char* cordinatx = nullptr;
        //char* cordy = nullptr;
        //char* cordz = nullptr;
    }

    Cord(const char* x, const char* y, const char* z)
    {
        //cout << "Cord: x =";
        cordinatx = new char[strlen(x) + 1];
        strcpy_s(cordinatx, strlen(x) + 1, x);

        ////cout << "Cord: y =\n";
        //cordy = new char[strlen(y) + 1];
        //strcpy_s(cordy, strlen(y) + 1, y);

        ////cout << "Cord: z =\n";
        //cordez = new char[strlen(z) + 1];
        //strcpy_s(cordez, strlen(z) + 1, z);

    }


    void Print()
    {
        cout << "Cord: x = " << cordinatx << "\n";
        //cout << "Cord: y = " << cordy << "\n";
        //cout << "Cord: z = " << cordez << "\n";
    }
    void Input() {
        char buf[200];
        cout << "Enter your point : ";
        cin.getline(buf, 200);
        if (cordinatx != nullptr) {
            cout << cordinatx << " is removed! \n";
            delete[]cordinatx;
        }
        //cordy = new char[strlen(buf) + 1];
        //strcpy_s(cordy, strlen(buf) + 1, buf);
        //cin.getline(buf, 200);
        //if (cordy != nullptr) {
        //    cout << cordy << " is removed! \n";
        //    delete[]cordy;
        //}
        //cordez = new char[strlen(buf) + 1];
        //strcpy_s(cordez, strlen(buf) + 1, buf);
        //cin.getline(buf, 200);
        //if (cordez != nullptr) {
        //    cout << cordez << " is removed! \n";
        //    delete[]cordez;
        //}
    }
    ~Cord() // деструктор
    {
        cout << "Destructor\n";
        delete[]cordinatx;
        //delete[]cordy;
        //delete[]cordez;
    }
    void Setcordinatx(char* x)
    {
        cordinatx = x;
    }
    char* Getcordinatx()
    {
        return cordinatx;
    }

    //void Setcordy(char* y)
    //{
    //    cordy = y;
    //}
    //char* Getcordy()
    //{
    //    return cordy;
    //}
    //void Setcordz(char* z)
    //{
    //    cordez = z;
    //}
    //char* Getcordz()
    //{
    //    return cordez;
    //}
};

int main()
{
    setlocale(LC_ALL, "RUS");
    Cord obj1("12", "17", "02");
    obj1.Print();
    obj1.Input();
    obj1.Print();

}
