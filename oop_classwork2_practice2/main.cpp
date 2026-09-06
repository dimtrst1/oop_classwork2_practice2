#include <iostream>
using namespace std;

class Dot
{
private:
    int x;
    int y;
    int z;
    
public:
    void Init(int xx, int yy, int zz)
    {
        x = xx;
        y = yy;
        z = zz;
    }
    
    void PrintCor()
    {
        cout << "Your coordinates are: " << endl;
        cout << "X is: " << x << endl;
        cout << "Y is: " << y << endl;
        cout << "Z is: " << z << endl;
    }
    
    void SetX(int xx)
    {
        x = xx;
    }
    
    int GetX()
    {
        return x;
    }
    
    void SetY(int yy)
    {
        y = yy;
    }
    
    int GetY()
    {
        return y;
    }
    
    void SetZ(int zz)
    {
        z = zz;
    }
    
    int GetZ()
    {
        return z;
    }
};

int main()
{
    Dot cor1;
    
    cor1.Init(3, 2, 1);
    cor1.PrintCor();
    cor1.SetX(5);
    cor1.PrintCor();
}
