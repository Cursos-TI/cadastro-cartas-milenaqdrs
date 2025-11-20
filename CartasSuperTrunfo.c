#include <stdio.h>

    int main() {
    int população, pontosturísticos;
    double área, PIB;
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
  
    printf ("Digite o PIB: \n");
    scanf ("%.2f", &PIB);
  
    printf ("Digite os pontosturísticos: \n");
    scanf ("%d", &pontosturísticos);
    return 0;
    } 
