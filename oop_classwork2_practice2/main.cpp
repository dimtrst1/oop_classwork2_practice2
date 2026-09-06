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

class Notebook
{
private:
    string cpu;
    string motherboard;
    string rammem;
    string gpu;
    string vpu;
    int price;
    
public:
    void Init(string cp, string mb, string ram, string gp, string vp, int pr)
    {
        cpu = cp;
        motherboard = mb;
        rammem = ram;
        gpu = gp;
        vpu = vp;
        price = pr;
    }
    
    void PrintNote()
    {
        cout << "CPU is: " << cpu << endl;
        cout << "Motherboard is: " << motherboard << endl;
        cout << "Ram memory is: " << rammem << endl;
        cout << "Video card is: " << gpu << endl;
        cout << "Volume card is: " << vpu << endl;
        cout << "Price of notebook is: " << price << endl;
    }
    
    void SetCPU(string cp)
    {
        cpu = cp;
    }
    
    string GetCPU()
    {
        return cpu;
    }
    
    void SetMotherb(string mb)
    {
        motherboard = mb;
    }
    
    string GetMotherb()
    {
        return motherboard;
    }
    
    void SetRam(string ram)
    {
        rammem = ram;
    }
    
    string GetRam()
    {
        return motherboard;
    }
    
    void SetVideo(string gp)
    {
        gpu = gp;
    }
    
    string GetVideo()
    {
        return gpu;
    }
    
    void SetVolume(string vp)
    {
        vpu = vp;
    }
    
    string GetVolume()
    {
        return vpu;
    }
    
    void SetPrice(int pr)
    {
        price = pr;
    }
    
    int GetPrice()
    {
        return price;
    }
};

int main()
{
    Dot cor1;
    Notebook note1;
    
    cor1.Init(3, 2, 1);
    cor1.PrintCor();
    cor1.SetX(5);
    cor1.PrintCor();
    
    cout << endl;
    
    note1.Init("Intel", "BM-5460", "Hyperx", "Asus", "Fio", 30000);
    note1.PrintNote();
    note1.SetVideo("MSI");
    cout << endl;
    note1.PrintNote();
}
