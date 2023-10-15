#include <iostream>
#include <string>


using namespace std;

int main() {
  string nama;
  char golongan;
  int jumlah_jam_kerja, upah, upah_lembur = 0, jam_lembur = 0, jam_normal = 48;

  cout << "\nMasukkan nama : ";
  getline(cin, nama);
  cout << "Masukkan golongan (A/B/C/D): ";
  cin >> golongan;
  cout << "Masukkan jumlah jam kerja : ";
  cin >> jumlah_jam_kerja;
  cout << "\n\n\n";

  switch (golongan)
  {
  case 'A':
    upah = 4000;
    break;
  case 'B':
    upah = 5000;
    break;
  case 'C':
    upah = 6000;
    break;
  case 'D':
    upah = 7000;
    break;

    default:
    upah = 0;
    return 0;

  }

  if (upah != 0) {
        if (jumlah_jam_kerja > jam_normal){
            jam_lembur = jumlah_jam_kerja - jam_normal;
            upah_lembur = 3000 * jam_lembur;
            upah *= jumlah_jam_kerja;
            upah += upah_lembur;
        } else{
            upah *= jumlah_jam_kerja;
        }
  }

  cout << "==================================================\n";
  cout << "     PROGRAM SEDERHANA UNTUK MENGHITUNG GAJI\n";
  cout << "==================================================\n";

  cout <<" -----------------------------------------------------------\n";
  cout << " | jam lembur  =   " << jam_lembur << " jam" << endl;
  cout << " | upah lembur =   Rp. " << upah_lembur << endl;
  cout << " | NAMA        =   " << nama << endl;
  cout << " | Total Upah  =   Rp. " << upah << endl;
  cout <<" -----------------------------------------------------------\n\n\n";

    return 0;
}
