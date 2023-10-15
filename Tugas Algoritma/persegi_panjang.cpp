#include <iostream>
#include <math.h>
using namespace std;

int main()
{

  int panjang, lebar, n, luas, keliling, diagonal;

  cout << panjang + panjang <<endl;
  cout << "==============================================" << endl;
  cout << "MENU EMPAT PERSEGI PANJANG" << endl;
  cout << "1. Hitung luas" << endl;
  cout << "2. Hitung Keliling" << endl;
  cout << "3. Hitung panjang diagonal" << endl;
  cout << "4. Keluar program" << endl;
  cout << "==============================================" << endl;
  cout << "Pilih nomor : ";
  cin >> n;

  switch (n)
  {
  case 1:
    cout << "Masukan panjang = ";
    cin >> panjang;
    cout << "Masukan lebar = ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "luas = " << luas << endl;
    break;
  case 2:
    cout << "Masukan panjang = ";
    cin >> panjang;
    cout << "Masukan lebar = ";
    cin >> lebar;
    keliling = panjang + lebar + panjang + lebar;
    cout << "keliling = " << keliling << endl;
    break;
  case 3:
    cout << "Masukan panjang = ";
    cin >> panjang;
    cout << "Masukan lebar = ";
    cin >> lebar;
    diagonal = pow(panjang, 2) + pow(lebar, 2);
    cout << "diagonal = " << diagonal << endl;
  case 4:
    cout << "keluar program .........................\n";
    break;
  default:
    cout << "inputan tidak diketahui\n";
  }
  return 0;
}