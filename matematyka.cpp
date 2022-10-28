#include <bits/stdc++.h>
double pitagoras(int przyprostokatna_1, int przyprostokatna_2)
{
    return sqrt((pow(przyprostokatna_1,2)+pow(przyprostokatna_2,2)));
}
bool czySkromna(int n) {
  int dl = log10(n);
  int mn = 10;
  for (int i = 0; i < dl; i++) {
    int a = n / mn;
    int b = n % mn;
    if (b != 0 && n % b == a)
      return true;
    mn *= 10;
  }
  return false;
}
bool czyDoskonala(int n){
  int suma = 0;
  for (int i = 1; i <= n/2; i++)
    if(n % i == 0)
      suma += i;
  return (suma == n);
}
