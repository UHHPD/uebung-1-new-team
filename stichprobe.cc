#include<fstream>
#include<iostream>
#include<cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  int sum = 0;
   for(int i = 1;i<=234;i++){
    int a;
    fin >> a;
    sum += a;
  }
  double mean = sum/234;
  std::cout << mean << std::endl;
  fin.close();

  std::ifstream gin("datensumme.txt");
   sum = 0;
   for(int i = 1;i<=234;i++){
    int a;
    gin >> a;
    int diff = (a - mean)* (a-mean);
    sum += diff;
  }
  double varianz = sum/234;
  std::cout << varianz << std::endl;
  gin.close();

  double sigma = sqrt(varianz);
  std::cout << sigma << std::endl;

}