#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
int x,y,lineas;
inicio: //Definamos el inicio en caso de error, ¨vale?
clrscr();
gotoxy(19,5);
textcolor(2);
cprintf("­Vamos a generar un tri ngulo invertido!");
gotoxy(19,7);
textcolor(15);
cprintf("¨Cu ntas lineas necesita tu tri ngulo? ");
scanf("%d",&lineas);
if (lineas<=4.99 || lineas>=20.01 || isalpha(lineas)) {
//Detecta si el valor es numero o letras
clrscr();
fflush(stdin); //Limpiemos los datos para evitar un loop de error
//si el valor son letras
gotoxy(19,5);
textcolor(4);
cprintf("ERROR: El valor es inv lido, esto puede ser porque:");
gotoxy(19,6);
textcolor(4);
cprintf("* Supera el limite m ximo de lineas (de 5 a 20)");
gotoxy(19,7);
textcolor(4);
cprintf("* El valor es una letra o un s¡mbolo no num‚rico");
gotoxy(19,8);
textcolor(4);
cprintf("Por favor intenta de nuevo presionando una tecla.");
textcolor(15);
getch();
goto inicio;
} else {
clrscr();
textcolor(14);
cprintf("Aqu¡ est  tu tri ngulo invertido, espero te guste");
printf("\n");
for(x=lineas;x>=0;x--) { //Usemos for para la figura
for(y=lineas-x;y>=0;y--) {
printf(" ");
}
for(y=2*x;y>=0;y--) { //y es 2 para imprimir la figura de las 2 mitades
printf("*");
}
printf("\n");
}
textcolor(1);
cprintf("Para salir, presiona cualquier tecla.");
getch();
}
}

