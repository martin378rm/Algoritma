#include <iostream>

using namespace std;

int main() {
  int N;
  cout << "Masukkan nilai N : ";
  cin >> N;

  if (N > 50){
    N += 10;
  } else {
    N += 10;
    N += 10;
  }

  cout << "Nilai akhir N : " << N << endl;

  return 0;
}
