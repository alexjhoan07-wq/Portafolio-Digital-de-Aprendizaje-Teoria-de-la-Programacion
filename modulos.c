#include <stdio.h>
float calculoES(int k);
float calculoAA(int k);
float calculoAPE(int k);
float calculoACD(int k);
float CalculoPromedioUnidad(int j);

int main (){
    int numeroDeUnidad=1;
    const int TOTALUNIDAD = 3;
    float sumaDeLasUnidades = 0;

    for(numeroDeUnidad ; numeroDeUnidad <= TOTALUNIDAD ;numeroDeUnidad++){
        float notaTotalUnidad =  CalculoPromedioUnidad(numeroDeUnidad);
        sumaDeLasUnidades = sumaDeLasUnidades + notaTotalUnidad;
    }
    float notaFinal= sumaDeLasUnidades/TOTALUNIDAD;
    printf("La nota final del anio es: %.2f \n", notaFinal);
    if(notaFinal>=7){
        printf("Aprobado");
    }else if(notaFinal>=2.5 && notaFinal<7){
        printf("Supletorio");
    }else{
    printf("Reprobado");
    }
    return 0;
    
    return 0;
    
}

float calculoES(int k){
    float evaluacion, porE;
    float portafolio, porP;
    printf("\nCALCULO DE LA ES\n");
    do {
        printf("Ingrese la nota de la evaluacion sumativa de la unidad %i\n ",k);
        scanf("%f", &evaluacion);
    }while(evaluacion<0  || evaluacion>10);
    do {
        printf("Ingrese la nota del portafolio de la unidad %i\n ",k);
        scanf("%f", &portafolio);
    }while(portafolio<0 || portafolio>10);
    do {
        printf("Ingrese el porcentaje para la Evaluacion:\n");
        scanf("%f", &porE);
        printf("Ingrese el porcentaje para el Portafolio: \n");
        scanf("%f", &porP);
    }while((porE+porP)!=100);
    
    float resultado=(evaluacion*(porE/100))+(portafolio*(porP/100));
    printf("El promedio de la Evaluacion Sumativa en la Unidad %i es:%.2f \n", k, resultado);
    
    float resultadoPonderadoEs=resultado*0.35;
    return resultadoPonderadoEs;
}
float calculoAA(int k){
    float promedioAA, notaAA, sumaAA = 0;
    int numeroDeActividadesAA;
    printf("\n CALCULO DE NOTAS DEL AA \n");
    do{
        printf("Ingrese el numero de actividades de la Unidad %i\n", k);
        scanf("%i", &numeroDeActividadesAA);
    } while(numeroDeActividadesAA < 0);
    for(int i = 1; i <= numeroDeActividadesAA; i++){
        do{
            printf("Ingrese la nota de la actividad %i\n", i);
            scanf("%f", &notaAA);
        } while(notaAA < 0 || notaAA > 10);
        sumaAA = sumaAA + notaAA;
    }
    promedioAA = sumaAA/numeroDeActividadesAA * 0.2;
    return promedioAA;
}
float calculoAPE(int k){
    float promedioAPE, notaAPE, sumaAPE = 0;
    int numeroDeActividadesAPE;
    printf("\n CALCULO DE NOTAS DEL APE \n");
    do{
        printf("Ingrese el numero de actividades de la Unidad %i\n", k);
        scanf("%i", &numeroDeActividadesAPE);
    } while(numeroDeActividadesAPE < 0);
    for(int i = 1; i <= numeroDeActividadesAPE; i++){
        do{
            printf("Ingrese la nota de la actividad %i\n", i);
            scanf("%f", &notaAPE);
        } while(notaAPE < 0 || notaAPE > 10);
        sumaAPE = sumaAPE + notaAPE;
    }
    promedioAPE = sumaAPE/numeroDeActividadesAPE * 0.25;
    return promedioAPE;
}
float calculoACD(int k){
    float promedioACD, notaACD, sumaACD = 0;
    int numeroDeActividadesACD;
    printf("\n CALCULO DE NOTAS DEL ACD \n");
    do{
        printf("Ingrese el numero de actividades de la Unidad %i\n", k);
        scanf("%i", &numeroDeActividadesACD);
    } while(numeroDeActividadesACD < 0);
    for(int i = 1; i <= numeroDeActividadesACD; i++){
        do{
            printf("Ingrese la nota de la actividad %i\n", i);
            scanf("%f", &notaACD);
        } while(notaACD < 0 || notaACD > 10);
        sumaACD = sumaACD + notaACD;
    }
    promedioACD = sumaACD/numeroDeActividadesACD * 0.2;
    return promedioACD;
}
float CalculoPromedioUnidad(int j){
    
    float ponderadoACD = calculoACD(j);
    printf("La nota ponderada del ACD unidad %i es; %.2f\n", j, ponderadoACD);
    float ponderadoAPE = calculoAPE(j);
    printf("La nota ponderada del APE unidad %i es; %.2f\n", j, ponderadoAPE);
    float ponderadoAA = calculoAA(j);
    printf("La nota ponderada del AA unidad %i es; %.2f\n", j, ponderadoAA);
    float ponderadoES = calculoES(j);
    printf("La nota ponderada de ES unidad %i es; %.2f\n", j, ponderadoES);
    float notaTotalUnidad = ponderadoACD + ponderadoAPE + ponderadoAA + ponderadoES;
    printf("Promedio final de la unidad %i es; %.2f\n", j, notaTotalUnidad);

    return notaTotalUnidad;
    
    
}
