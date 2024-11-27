#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
float precio,cantidad,total;
char tipo,nombre[80];
clrscr();
gotoxy(19,5);
textbackground(4);
textcolor(15);
cprintf("            PIZZERIA LOS RAPIDITOS            ");
gotoxy(19,7);
textbackground(0);
textcolor(1);
cprintf("Bienvenido a la Pizzeria \"Los rapiditos\".");
//Inserte "\" entre las comillas para que la PC
//no los confunda como signos de valor
gotoxy(19,8);
textcolor(1);
cprintf("La pizzer¡a donde la velocidad no tiene precio.");
//La velocidad no pero las pizzas si (? sorry~
gotoxy(19,10);
textcolor(2);
cprintf("Brindaremos tus ordenes a la cocina, donde");
gotoxy(19,11);
textcolor(2);
cprintf("los chefs har n tu pedido y entregar n la");
gotoxy(19,12);
textcolor(2);
cprintf("mejor exquisitez a la puerta de tu casa.");
gotoxy(19,14);
textcolor(128 + 14);
cprintf("PROMOCION DE LA SEMANA:");
gotoxy(19,15);
textcolor(128 + 14);
cprintf("10 por ciento menos en m s de 5 art¡culos.");
gotoxy(19,17);
textcolor(14);
cprintf("­Presiona una tecla para empezar!");
getch();


orden:
clrscr();
gotoxy(19,5);
textbackground(4);
textcolor(15);
cprintf("            PIZZERIA LOS RAPIDITOS            ");
fflush(stdin); //fflush al teclado para que la orden no se mezcle
gotoxy(19,7);
textbackground(0);
textcolor(15);
cprintf("¨C¢mo te llamas? ");
gets(nombre);
gotoxy(19,8);
textcolor(15);
cprintf("Men£: [P] Personal | [M] Mediano | [F] Familiar");
gotoxy(19,9);
textcolor(15);
cprintf("¨Qu‚ pizza quieres? ");
scanf("%c",&tipo);
if (tipo=='P' || tipo=='p') { //Si el tipo es P o p
precio=50.00;
} else if (tipo=='M' || tipo=='m') { //Si el tipo es M o m
precio=100.00;
} else if (tipo=='F' || tipo=='f') { //Si el tipo es F o f
precio=180.00;
} else { //De lo contario
gotoxy(19,10);
textcolor(15);
cprintf("Tipo de orden inv lida.");
gotoxy(19,11);
textcolor(15);
cprintf("Reintentando en 3 segundos...");
sleep(3);
goto orden;
}

gotoxy(19,10);
textcolor(15);
cprintf("Esa pizza cuesta $%.2f, Sr(a). %s",precio,nombre);
gotoxy(19,11);
textcolor(15);
cprintf("¨Cu ntas pizzas quieres? ");
scanf("%f",&cantidad);
if (cantidad>=5) { //Si la cantidad es mayor a 5
total=(cantidad*precio)-(cantidad*precio)*0.10;
} else { //De lo contrario
total=0.00;
}
gotoxy(19,12);
textcolor(15);
cprintf("Pagar s en total $%.2f por tu orden",total);
gotoxy(19,14);
textcolor(1);
cprintf("Su pizza ya esta lista, Sr(a) %s.",nombre);
gotoxy(19,15);
textcolor(2);
cprintf("Gracias por tu visita, que tengas un buen d¡a :)");
gotoxy(19,16);
textcolor(14);
cprintf("Saliendo del programa en 8 segundos...");
sleep(8);
exit(0);
}