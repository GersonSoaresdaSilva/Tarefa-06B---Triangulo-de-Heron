/*Fórmula de Heron
p = (a + b + c) / 2   ---   A = sqrt (p * (p-a) * (p-b) * (p-c))
Heron de Alexandria é o responsável por elaborar uma fórmula matemática que calcula a área de um triângulo em função das medidas dos seus três lados.*/

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double ladoA, ladoB, ladoC, sPer, areaT;

double lerLadoA (double *ptrLdA);
double lerLadoB (double *ptrLdB);
double lerLadoC (double *ptrLdC);
double somarP   (double *ptrLdA, double *ptrLdB, double *ptrLdC);
double calcArea (double *ptrPer, double *ptrLdA, double *ptrLdB, double *ptrLdC);
void   lerLados ();
void   formArea ();
void   exibir   ();
void   controle ();

int main () {
  system ("clear");
  setlocale(LC_ALL, "Portuguese");
  controle ();
  return 0;
}

double lerLadoA (double *ptrLdA) {
  cout << "\nInforme a medida do lado A.: ";
  cin >> ladoA;
  return ladoA;
}

double lerLadoB (double *ptrLdB) {
  cout << "\nInforme a medida do lado B.: ";
  cin >> ladoB;
  return ladoB;
}

double lerLadoC (double *ptrLdC) {
  cout << "\nInforme a medida do lado C.: ";
  cin >> ladoC;
  return ladoC;
}

double somarP   (double *ptrLdA, double *ptrLdB, double *ptrLdC) {
  sPer = (*ptrLdA + *ptrLdB + *ptrLdC) / 2;
  return sPer;
}

double calcArea (double *ptrPer, double *ptrLdA, double *ptrLdB, double *ptrLdC) {
  areaT = sqrt(sPer * (sPer - *ptrLdA) * (sPer - *ptrLdB) * (sPer - *ptrLdC) );
  return areaT;
}

void   lerLados () {
  system ("clear");
  cout << "\n***   Ler lados do Triângulo  ***" << endl;
  lerLadoA (&ladoA);
  lerLadoB (&ladoB);
  lerLadoC (&ladoC);
  system ("sleep 4");
}

void   formArea () {
  sPer = somarP(&ladoA, &ladoB, &ladoC);
  areaT = calcArea(&sPer, &ladoA, &ladoB, &ladoC);
  system ("clear");
  cout << "\nCálculo realizado com Sucesso!" << endl;
  system ("sleep 4");
}

void   exibir   () {
  system ("clear");
  cout << "\n*** Exibir Resultados  ***" << endl;
  cout << "\nValor do Perímetro..: " << sPer << endl;
  cout << "\nArea do Triângulo...: " << areaT << endl;
  system ("sleep 4");
}

void   controle () {
  int optItem;
  while  (true) {
    system ("clear");
    cout << "\n***  Menu de Controle  ***";
    cout << "\n1 - Ler valores \n2 - Calcular \n3 - Exibir \n4 - Sair \nOpção.: ";
    cin >> optItem;
    switch (optItem) {
      case 1: lerLados ( ); break;
      case 2: formArea ( ); break;
      case 3: exibir   ( ); break;
      case 4: exit     (0);
      default: cout << "\nOpção Inválida!" << endl; system("sleep 4"); break;
    }

  }
}