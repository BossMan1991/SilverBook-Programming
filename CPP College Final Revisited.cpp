/*
Corey Roark
Exercise: Assignment 5
Due:  Tuesday, December 12, 2017
A program that takes what the user knows about his circuit, and calculates the entire power wheel and outputs the calculated values.
*/

//Libraries to be included:
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
//Standard Namespace for ease of use of cout and cin.
using namespace std;
//Functions and variables that are to be used globally through out the program.
float Voltage(float V);
float Current(float I);
float Power(float P);
float Resist(float R);
float V, P, R, I, aV, aR, aI, aP, aV1, aV2, aV3;
float aI1, aI2, aI3, aP1, aP2, aP3, aR1, aR2, aR3;
char yn1, yn2, yn3, yn4;
//Main function of the program.
int main()
{
    //Character variables used for the switch statement and the do...while loop.
    char ex;
    char yn;
    //Main greeting of the program that lets the user know what the program does and how it does it.
    cout << "  ****************************************************** \n" << "  **Hello and welcome to the Power Wheel Calculator!!!** \n"
        << "  ****************************************************** \n"
        << "How this program will work:  This program will ask you for four values relating to your circuit. \n \n" << "1) Voltage \n" << "2) Current \n" << "3) Power \n" << "4) Resistance \n \n"
        << "Once you have entered your known values, all the unknowns will be \n" << "solved by using the power wheel. \n \n";

    system("pause");
    system("cls");
    //do..while loop that holds the switch/case statements that ask the user which values they have to input for the program.
    do
    {


        //Asks for the users voltage reading.
        cout << "Do you know your circuit's voltage? y/n \n";
        cin >> yn1;

        switch (yn1)
        {
        case 'y':
        case 'Y':
        {
            cout << "Enter your Voltage. \n";
            cin >> V;
            break;
        }

        }
        system("cls");
        //Asks for the users current reading.
        cout << "Do you know your circuit's current? y/n \n";
        cin >> yn2;
        switch (yn2)
        {
        case 'y':
        case 'Y':
        {
            cout << "Enter your Current. \n";
            cin >> I;
            break;
        }
        }
        system("cls");
        //Asks for the users power reading.
        cout << "Do you know your circuit's Power? y/n \n";
        cin >> yn3;
        switch (yn3)
        {
        case 'y':
        case 'Y':
        {
            cout << "Enter your power. \n";
            cin >> P;
            break;
        }
        }
        system("cls");
        //Asks for the user's resistance reading.
        cout << "Do you know your circuit's Resistance? y/n \n";
        cin >> yn4;
        switch (yn4)
        {
        case 'y':
        case 'Y':
        {
            cout << "Enter your Resistance. \n";
            cin >> R;
            break;
        }
        }

        system("cls");

        //Outputs for the math functions of the Power Wheel calculator.
        if ((yn3 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Voltage is, " << aV1 << " Volts \n";
        }
        if ((yn2 == 'y') && (yn3 == 'y'))
        {
            cout << "Your Voltage is, " << aV2 << " Volts \n";
        }
        if ((yn2 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Voltage is, " << aV3 << " Volts \n";
        }
        //Current outputs
        if ((yn1 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Current is, " << aI1 << " Amps \n";
        }
        if ((yn1 == 'y') && (yn3 == 'y'))
        {
            cout << "Your Current is, " << aI2 << " Amps \n";
        }
        if ((yn3 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Current is, " << aI3 << " Amps \n";
        }
        //Power Outputs
        if ((yn1 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Power is, " << aP1 << " Watts \n";
        }
        if ((yn2 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Power is, " << aP2 << " Watts \n";
        }
        if ((yn2 == 'y') && (yn4 == 'y'))
        {
            cout << "Your Power is, " << aP3 << " Watts \n";
        }
          // cout << Current (I) << "\n";
          // cout << Power (P) << "\n";
          // cout << Resist (R) << "\n";


       //Asks the user if they want to re-enter new data in the calculator.
        cout << "If you would like to exit the program type 'exit'.  If you want to run the program again, enter 'y'. \n";
        cin >> ex;

        system("cls");
        //Lets the user restart or exit the program.
    } while ((ex == 'y') || (ex == 'Y'));
    cout << "Thanks for using the power wheel!";

    return 0;
}
//Function that handles the voltage aspect of the power wheel.
float Voltage(float V, float aV1, float aV2, float aV3)
{
    aV1 = sqrt(P * R);
    aV2 = P / I;
    aV3 = I * R;
    return 0;
}
//Function that handles the Current aspect of the Power Wheel.
float Current(float I, float aI1, float aI2, float aI3)
{
    aI1 = V / R;
    aI2 = P / V;
    aI3 = sqrt(P / R);


    return 0;
}
//Function that handles the Power aspect of the Power Wheel.
float Power(float P, float aP1, float aP2, float aP3)
{

    aP1 = pow(V, 2) / R;
    aP2 = pow(I, 2) * R;
    aP3 = V * I;

    return 0;
}
//Function that handles the Resistance aspect of the Power Wheel.
float Resist(float R, float aR1, float aR2, float aR3)
{

    aR1 = V / I;
    aR2 = pow(V, 2) / P;
    aR3 = P / pow(I, 2);

    return 0;
}

/*
    How the everloving fuck this thing got me an A, I'll never know.
To be honest, Vinny had some pretty low standards to begin with. 
I'm going to see if I can rebuild it with a better interface and
without the stupid zero being returned.

    First in C++, then in C#, then I'll try to host it on a webpage.
*/




