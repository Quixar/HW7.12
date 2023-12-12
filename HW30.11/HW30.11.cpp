#include <iostream>
#include <string>

using namespace std;


class ElectricKettle {
private:
    string brand;
    double capacity;
    int power;
    bool isPluggedIn;
    int waterLevel;

public:

    void SetBrand(string br)
    {
        brand = br;
    }

    string GetBrand()
    {
        return brand;
    }

    void SetCapacity(double cap)
    {
        capacity = cap;
    }

    double GetCapacity()
    {
        return capacity;
    }

    void SetPower(int pow)
    {
        power = pow;
    }

    int GetPower()
    {
        return power;
    }

    void SetWater(int wat)
    {
        waterLevel = wat;
    }

    int GetWater()
    {
        return waterLevel;
    }

    void SetPluggedIn(bool isPlug)
    {
        isPluggedIn = isPlug;
    }

    bool GetPluggedIn()
    {
        return isPluggedIn; 
    }

    void PuggedIn()
    {
        cout << "Kettle is plugged in\n";
    }

    void Unplug()
    {
        cout << " Kettle is unplagged\n";
    }

    void FillWater()
    {
        cout << "Kettle is filling with water\n";
    }

    void Boil()
    {
        cout << "kettle boils water\n";
    }

    void PourTea()
    {
        cout << "pour tea\n";
    }
};

class Book {
private:
    string title;
    string author;
    int pageCount;
    bool isHardcover;
    double price;

public:

    void SetTitle(string tit)
    {
        title = tit;
    }

    string GetTitle()
    {
        return title;
    }

    void SetAuthor(string aut)
    {
        author = aut;
    }

    string GetAuthor()
    {
        return author;
    }

    void SetPage(int pag)
    {
        pageCount = pag;
    }

    int GetPage()
    {
        return pageCount;
    }

    void SetHardCover(bool hard)
    {
        isHardcover = hard;
    }

    bool GetHardCover()
    {
        return isHardcover;
    }

    void GetPrice(double pr)
    {
        price = pr;
    }

    void Read()
    {

    }
    void BookmarkPage()
    {

    }
    void Review()
    {

    }
    void Lend()
    {

    }
    void CalculateDiscountPrice()
    {

    }
};

class Smartphone {
private:
    string brand;
    string model;
    int capacityGB;
    bool hasDualCamera;
    bool isWaterproof;

public:

    void SetBrand(string brn)
    {
        brand = brn;
    }

    string GetBrand()
    {
        return brand;
    }

    void SetModel(string mod)
    {
        model = mod;
    }

    string GetModel()
    {
        return model;
    }

    void SetCapacity(int cap)
    {
        capacityGB = cap;
    }

    int GetCapacity()
    {
        return capacityGB;
    }

    void SetCamera(bool dual)
    {
        hasDualCamera = dual;
    }

    bool GetCamera()
    {
        return hasDualCamera;
    }

    void SetWaterProof(bool proof)
    {
        isWaterproof = proof;
    }

    bool GetWaterProof()
    {
        return isWaterproof;
    }

    void MakeCall()
    {

    }
    void TakePhoto()
    {

    }
    void InstallApp()
    {

    }
    void CheckStorageSpace()
    {

    }
    void SetAlarm()
    {

    }
};

class Cat {
private:
    string name;
    int age;
    string color;
    bool isMale;
    bool hasCollar;

public :

    void SetName(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }

    void SetAge(int a)
    {
        age = a;
    }

    int GetAge()
    {
        return age;
    }

    void SetColor(string col)
    {
        color = col;
    }

    string GetColor()
    {
        return color;
    }

    void SetMale(bool male)
    {
        isMale = male;
    }

    bool GetMale()
    {
        return isMale;
    }

    void SetCollar(bool collar)
    {
        hasCollar = collar;
    }

    bool GetCollar()
    {
        return hasCollar;
    }

    void Meow()
    {

    }

    void Sleep()
    {

    }

    void Eat()
    {

    }

    void Purr()
    {

    }

    void Play() 
    {

    }
};

class RemoteControl {
private:
    string brand;
    bool hasBattery;
    int buttonsCount;
    bool isProgrammable;
    bool isTouchScreen;

public:

    void SetBrand(string b)
    {
        brand = b;
    }

    string GetBrand()
    {
        return brand;
    }

    void SetBattery(bool battery)
    {
        hasBattery = battery;
    }

    bool GetBattery()
    {
        return hasBattery;
    }

    void SetButtons(int buttons)
    {
        buttonsCount = buttons;
    }

    int GetButtons()
    {
        return buttonsCount;
    }

    void SetProgrammable(bool prog)
    {
        isProgrammable = prog;
    }

    bool GetProgrammable()
    {
        return isProgrammable;
    }

    void SetTouchScreen(bool touch)
    {
        isTouchScreen = touch;
    }

    bool GetTouchScreen()
    {
        return isTouchScreen;
    }

    void PressButton()
    {

    }

    void PowerOn()
    {

    }

    void PowerOff()
    {

    }

    void ProgramButton()
    {

    }

    void AdjustVolume()
    {

    }
};

int main()
{
    
}