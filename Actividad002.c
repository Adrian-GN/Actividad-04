#include<stdio.h>
#include<conio.h>
void mostrar(int x, char arreglo[50]){
printf("%s\n", arreglo);}
main()
{
	struct{
        char ti[50], nom[50],sal[50], fuer[50];
    }personaje[5];
    int op,i,n[4],f, m, x, l, h, j, per;
    float p, s;
    char arreglo[50], resp;
    do{
    printf("\tBienvenido\nPor favor ingrese el número de la opción deseada:\n1.Num. enteros\n2.Función\n3.Personaje\n4. Mostar Personajes\n");
    scanf("%i", &op);
    switch(op){
    case 1:
    	system("CLS");
        for(i=0;i<5;i++){
        printf("\nIngrese el %i numero:\n", i+1);
        scanf("%i", &n[i]);
        s=s+n[i];}
    p=s/5;
    for(f=0;f<5;f++){
        printf("%i", n[f]);
        printf("\n");}
        printf("____________\nsuma: %.0f\npromedio: %.2f",s, p);
    break;
    case 2:
    	system("CLS");
        printf("\nIngrese las veces a repetir el arreglo:\n", p+1);
        scanf("%i", &m);
        printf("Ingrese una palabra\n");
        scanf("%s", &arreglo);
    for(l=0;l<m;l++)
        mostrar(x,arreglo);
    break;
    case 3:
    	printf("\nIngrese la cantidad de personajes a capturar: \n(Con un maximo de 5)"); scanf("%i", &per);
    for(i=0;i<per;i++)
{

	       printf("Ingresa el nombre del %i° personje:\n",i+1);
			    fflush(stdin);gets(personaje[i].nom);
			    printf("Ingresa el tipo: \n");
			    fflush(stdin);gets(personaje[i].ti);
			    printf("¿Cual es la fuerza: \n");
			    fflush(stdin);gets(personaje[i].fuer);
			    printf("Ingrese la salud: \n");
			    fflush(stdin);gets(personaje[i].sal);}
	    break;
	case 4:
		if(per>0){
			for(f=0;f<per;f++)
				printf("Personaje %i:\nNombre: %s\ntipo: %s\nFuerza: %s\nSalud: %s\n", f+1, personaje[f].nom, personaje[f].ti, personaje[f].fuer, personaje[f].sal);}
		else
		printf("\nNo hay personajes registrados\n");
		break;
		default:
		printf("\nOpcion no valida\n");}
	    printf("\n�Desea repetir el programa? 1=si 0=no\n");
	    scanf("%s", &resp);
	}while(resp!='0');
system("pause");
}
