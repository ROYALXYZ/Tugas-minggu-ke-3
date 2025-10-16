#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    //Untuk mencari kuadrat sisi miring: \(c^{2}=a^{2}+b^{2}\)
    //Untuk mencari panjang sisi miring: \(c=\sqrt{a^{2}+b^{2}}\)
    
    
    cout << "Menghitung Sisi Miring (C) \n" ; 
    cout << "  |\\\n" ;
    cout << "  | \\\n" ;
    cout << "  |  \\\n" ;
    cout << "  |   \\\n" ;
    cout << "a |    \\ c\n" ;
    cout << "  |     \\\n" ;
    cout << "  |      \\\n" ;
    cout << "  --------- \n" ;
    cout << setw(8) << "b \n" ;

    cout << "Masukan Sisi A = ";
    double A;
    cin >> A;
    
    cout << "Masukan Sisi B = ";
    double B;
    cin >> B;
    
    //out << "A = " << A << " B = " << B << endl;
    double C = sqrt(pow(A, 2) + pow(B, 2));
    cout << fixed << setprecision(2);
    cout << "Sisi Miring adalah " << C << endl;
    
    system("PAUSE");
    return 0;
    
}