#include <iostream>
#include <ctime>                                      
#include <cstdlib>     

int main()


{
    srand(time(0));

    printf("\n\nLanzamiento de 36000 jugadas: ");

    int lanzamiento;
    int Frecuencia[13] = { 0 };

    for (int i = 1; i <= 36000; i++)
    {  
        lanzamiento = (1 + rand() % 6) + (1 + rand() % 6); 
        Frecuencia[lanzamiento]++;

    }

    for (int n = 2; 12 >= n; n++)
     
    printf("\nLa frecuencia de %d es: %d", n, Frecuencia[n]);

    return 0;

}