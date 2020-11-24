#include <iostream>

// print line shortcut
void print(std::string getPrinted)
{
    std::cout << getPrinted << std::endl;
}

// print line shortcut; ohne Zeilenumsprung
void printh(std::string getPrinted)
{
    std::cout << getPrinted << std::flush;
}

int readInt()
{
    int returnValue;
    std::cin >> returnValue;
    return returnValue;
}

void collatz(int number)
{
    std::cout << "Ihre eingetippte Nummer war: a = " << number << "\n" << std::endl;

    bool truthSerum = true;
    while(truthSerum)
    {
        if((number%2) == 0)
        {
            number = number / 2;
        }
        else
        {
            number = (number * 3) + 1;
        }
        
        std::cout << "Zahlen werden berechnet -- " << number << std::endl;

        if(number == 1 || number == 1 || number == -1 || number == -5 || number == -17)
        {
            truthSerum = false;
            std::cout << "\nDie Nummer " << number << " wurde erreicht.\n" << std::endl;
        }
    }

}

int main()
{
    print("\nIPK Aufgabenblatt 2");
    print("Aufgabe 2");
    print("by Adam McKellar, Christian Jaenner, Cilian Kerskens");//* Jänner

    printh("\nGeben Sie einen Wert (als Ganze Zahl) ein: ");
    
    collatz(readInt());

}