#include<fstream>
#include<iostream>

int main(){
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  int i=1;
  while(i<=234){
    i++;
    int a;
    int b;
    int c;
    fin >> a;
    fin >> b;
    c = a + b;
    fout << c << std::endl;
  }
  fout.close();
}