#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
int jugador=1,error,empate=0,ganar=0;
char c1='1',c2='2',c3='3',c4='4',c5='5',c6='6',c7='7',c8='8',c9='9',
tiro,marca,respuesta='s';
clrscr();
printf("Alejandro Saavedra 2-E presenta:\n");
printf("Tres en raya realizado en Turbo C v3\n\n");
printf("Este juego es compatible con 2 jugadores\n\n");
printf("Jugador 1 = X (tacha)\n");
printf("Jugador 2 = O (c¡rculo)\n\n");
printf("Estos signos marcan espacios en el tablero\n");
printf("de 3x3 alternadamente. Un jugador gana si\n");
printf("consigue tener una l¡nea de tres en tres\n");
printf("que tengan su s¡mbolo, ya sea horizontal,\n");
printf("vertical o diagonal. Tambi‚n puedes jugar\n");
printf("con tus amigos y familiares.\n\n");
printf("Por favor, presiona una tecla para comenzar.");
getch();
do {
error=1;
clrscr();
printf("Tres en raya realizado en Turbo C v3\n");
printf("\n %c | %c | %c\n",c1,c2,c3);
printf("---+---+---\n");
printf("\n %c | %c | %c\n",c4,c5,c6);
printf("---+---+---\n");
printf("\n %c | %c | %c\n\n",c7,c8,c9);
if (jugador==1) {marca='X';}
else {marca='O';}
printf("Jugador %d, ­es tu turno! Tu ficha es la %c",jugador,marca);
printf("\n¨En qu‚ posici¢n quieres tu ficha?: ");
fflush(stdin);
scanf("%c",&tiro);
if (tiro=='1' && c1=='1') {c1=marca;}
else if (tiro=='2' && c2=='2') {c2=marca;}
else if (tiro=='3' && c3=='3') {c3=marca;}
else if (tiro=='4' && c4=='4') {c4=marca;}
else if (tiro=='5' && c5=='5') {c5=marca;}
else if (tiro=='6' && c6=='6') {c6=marca;}
else if (tiro=='7' && c7=='7') {c7=marca;}
else if (tiro=='8' && c8=='8') {c8=marca;}
else if (tiro=='9' && c9=='9') {c9=marca;}
else {printf("­Error! As¡ no es como te puedes mover\n"); error=2;}
if (c1=='X' || c1=='O') {
if (c2==c1 && c3==c1) {ganar=1;}
if (c4==c1 && c7==c1) {ganar=1;}
}
if (c5=='X'||c5=='O') {
if (c1 == c5 && c9 == c5) {ganar=1;}
if (c2 == c5 && c8 == c5) {ganar=1;}
if (c4 == c5 && c6 == c5) {ganar=1;}
if (c3 == c5 && c7 == c5) {ganar=1;}
}
if (c9=='X'||c9=='O'){
if (c6 == c9 && c3 == c9) {ganar=1;}
if (c7 == c9 && c8 == c9) {ganar=1;}
}
if ((c1 != '1' && c2 != '2' && c3 != '3' &&
c4 != '4' && c5 != '5' && c6 != '6' &&
c7 != '7' && c8 != '8' && c9 != '9') &&
ganar == 0) {empate=1;}
if (ganar==1 || empate==1) {
clrscr();
if (ganar==1) {
printf("­Felicitaciones, jugador %d! Ganaste el juego\n\n",jugador);
printf("\n %c | %c | %c\n",c1,c2,c3);
printf("---+---+---\n");
printf("\n %c | %c | %c\n",c4,c5,c6);
printf("---+---+---\n");
printf("\n %c | %c | %c\n\n",c7,c8,c9);
}
if (empate==1) {
printf("­Empate! ¨Qu‚ tal una revancha o un cafecito?\n");
printf("\n %c | %c | %c\n",c1,c2,c3);
printf("---+---+---\n");
printf("\n %c | %c | %c\n",c4,c5,c6);
printf("---+---+---\n");
printf("\n %c | %c | %c\n\n",c7,c8,c9);
}
printf("¨Quieres jugar de nuevo? Responde \"S\" (si) o \"N\" (no)\n");
fflush(stdin);
scanf("%c",&respuesta);
if (respuesta=='s' || respuesta=='S') {empate=0;jugador=2;ganar=0;
c1='1';c2='2';c3='3';c4='4';c5='5';c6='6';c7='7';c8='8';c9='9';}}
if (error==1) {if (jugador==1) {jugador=2;} else {jugador=1;}}
} while(respuesta=='s' || respuesta=='S');
exit(0);
return 0;
}