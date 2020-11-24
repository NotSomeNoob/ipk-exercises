#include <iostream>
#include <cmath>

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

double readDouble()
{
    double returnValue;
    std::cin >> returnValue;
    return returnValue;
}

int main()
{   
    double a;
    double b;
    double c;
    print("\nIPK Aufgabenblatt 2");
    print("Aufgabe 1");
    print("by Adam McKellar, Christian Jaenner, Cilian Kerskens");//* Jänner
    print("ax^2 + bx + c = 0");

    //Readout of Variables
    printh("\na = ");
    a = readDouble();
    printh("b = ");
    b = readDouble();
    printh("c = ");
    c = readDouble();

    //Calculations
    
        double x;
        double y;
        double z;

        try{
            // actual calculations
            z = sqrt((b*b)-(4*a*c));
            x = ((-b - z)/(2*a));
            y = ((-b + z)/(2*a));

            //check if NaN
            if(std::isnan(x) || std::isnan(y)){throw 1;}
            //check if -inf
            if(x == -1.0/0.0 || y == -1.0/0.0){throw 1;}

        }
        catch(int n)
        {
            print("\nEs konnte kein eindeutiges Ergebnis erreicht werden.\n");
            return 0;
        }
    
    std::cout << "Das Ergebnis fuer x1 ist: " << x << std::endl;
    std::cout << "Das Ergebnis fuer x2 ist: " << y << std::endl;

}