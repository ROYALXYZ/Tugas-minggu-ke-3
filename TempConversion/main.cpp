#include <iostream>

using namespace std;


//rumus konversi celcius ke reamur = 4/5 * c

//rumus konversi celcius ke fahrenheit (c * 9/5) + 32

int main()

{

cout << "Konversi Suhu Celcius \n \n ";

cout << "Masukan Suhu Celcius:     " << char(248) << "C"  << "\b\b\b\b\b\b\b";

double C;

cin >> C;

double rumusReamur = (4.0/5.0 * C);

double rumusFahrenheit = (C * 9.0/5.0) + 32;

cout << " Konversi\n";

cout << " Reamur = " << rumusReamur << char(248) << "R" << endl;

cout << " Fahrenheit = " << rumusFahrenheit << char(248) << "F" << endl;

    system("PAUSE");

return 0;

}