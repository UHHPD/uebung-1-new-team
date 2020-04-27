#include<fstream>
#include<iostream>

int main(){
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  for(int i = 1;i<=234;i++){
    int a;
    int b;
    fin >> a;
    fin >> b;
    int c = a + b;
    fout << c << std::endl;
  }
  fout.close();
  fin.close();
}