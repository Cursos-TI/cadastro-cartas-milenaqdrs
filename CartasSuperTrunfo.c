#include <stdio.h>

    int main() {
    int população = 12325000 ;
    int pontosturísticos = 50;
    double área = 1521.11;
    double PIB = 699.28;
    char estado = 'A';
    char código [20] = 'A01';
    char cidade [20] = 'SP';
  
    printf ("Estado: \n");
    scanf ("%s", &estado);
    
    printf ("Código: \n");
    scanf ("%s", &código);
  
    printf ("Cidade: \n");
    scanf ("%s", &cidade);
  
    printf ("População: \n");
    scanf ("%d", &população);
  
    printf ("Área: \n");
    scanf ("%.2f", &área);
  
    printf ("PIB: \n");
    scanf ("%.2f", &PIB);
  
    printf ("PontosTurísticos: \n");
    scanf ("%d", &pontosturísticos);
    
    return 0;
    } 
