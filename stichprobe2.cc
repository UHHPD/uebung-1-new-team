#include<fstream>
#include<iostream>
#include<cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream gout("varianzen.txt");
  std::ifstream gin("datensumme.txt");
  for(int i=1;i<=26;i++){
    double sum = 0;
     for(int j = 1;j<=9;j++){
      int a;
     fin >> a;
     sum += a;
   }
   double mean = sum/9;
   fout << mean << std::endl;
  
   sum = 0;
     for(int j = 1;j<=9;j++){
     double a;
     gin >> a;
     double diff = (a - mean)* (a-mean);
      sum += diff;
    }
   double varianz = sum/9;
   gout << varianz << std::endl;
   
   
  }
  fin.close();
  gin.close();
  fout.close();
  gout.close();
//gout.close;
  /*double sigma = sqrt(varianz);
  std::cout << sigma << std::endl;*/

}