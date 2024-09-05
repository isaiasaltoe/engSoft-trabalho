#include <stdio.h>
 
int main() {
float N, zeroum;
int cem, cinquenta, vinte, dez, cinco, dois, um, meio, zerovinte, zerodez, zerocinco;
    scanf("%f", &N);
    cem = N / 100;
    cinquenta = (N - cem*100) / 50;
    vinte = ((N - cem*100) - cinquenta*50) / 20;
    dez = ((N - cem*100) - (cinquenta*50) - (vinte*20)) / 10;
    cinco = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10)) / 5;
    dois = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5)) / 2;
    um = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5)) - (dois*2);
    meio = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5) - (dois*2) - um) / 0.5;
    zerovinte = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5) - (dois*2) - (um) - (meio*0.5) )/ 0.25;
    zerodez = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5) - (dois*2) - (um) - (meio*0.5) - (zerovinte*0.25)) / 0.10;
    zerocinco = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5) - (dois*2) - (um) - (meio*0.5) - (zerovinte*0.25) - (zerodez*0.10) ) / 0.05;
    zeroum = ((N - cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5) - (dois*2) - (um) - (meio*0.5) - (zerovinte*0.25) - (zerodez*0.10) - (zerocinco*0.05)) /0.010; 
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%.0f moeda(s) de R$ 0.01\n", cem, cinquenta, vinte, dez, cinco, dois, um, meio, zerovinte, zerodez, zerocinco, zeroum);
    
    return 0;
}