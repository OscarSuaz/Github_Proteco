#include<stdio.h>

float numeros[2];
void menu(){
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Salir\n");
}

void leerData(){
    printf("\nPrimer numero: ");
    scanf("%f",&numeros[0]);
    printf("\nSegundo numero: ");
    scanf("%f",&numeros[1]);
}


int main(int argc, char const *argv[])
{
    printf("Aló! Bienvenidos a la calculadora simple :)\n");
    printf("Aquí las opciones: \n");
    int operacion,cic=1;
    while (cic==1){
        printf("\n**********************************************************\n");
        menu();
        scanf("%i",&operacion);
        switch (operacion)
        {
        case 1:
            leerData();
            printf("La suma es: %0.3f",(numeros[0]+numeros[1]));
        break;
        
        case 2:
            leerData();
            printf("La resta es: %0.3f",(numeros[0]-numeros[1]));
        break;
        
        case 3:
            leerData();
            printf("La multiplicación es: %0.3f",(numeros[0]*numeros[1]));
        break;

        case 4:
            leerData();
            if(numeros[1]!=0){
                printf("La división es: %0.3f",(numeros[0]/numeros[1]));
            }else{
                printf("No se puede dividir entre 0 :(");
            }
        break;

        case 5:
            printf("Adiós!");
            cic=0;
        break;

        default:
            printf("Opción no válida");
        }
    }
    
    return 0;
}

