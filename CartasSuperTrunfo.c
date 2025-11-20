#include <stdio.h>

    int main() {
    int população, pontosturísticos;
    double área, pib;
    char estado, código, cidade; 
  
    printf ("Digite o estado: \n");
    scanf ("%s", &estado);
    
    printf ("Digite o código: \n");
    scanf ("%s", &código);
  
    printf ("Digite a cidade: \n");
    scanf ("%s", &cidade);
  
    printf ("Digite a população: \n");
    scanf ("%d", &população);
  
    printf ("Digite a área: \n");
    scanf ("%.2f", &área);
  
    printf ("Digite o pib: \n");
    scanf ("%.2f", &pib);
  
    printf ("Digite os pontosturísticos: \n");
    scanf ("%d", &pontosturísticos);
    return 0;
    } 
