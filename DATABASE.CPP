#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>
main() {
clrscr();
FILE *fp, *ft;
char a,b,c,resp;
struct database {
char libro[100],autor[100],precio[100],numero[100];
};
struct database e;
char numero[100],cliente[100],target[100];
long int recsize;
fp=fopen("c:/datos.txt","rb+");
if(fp==NULL) {
fp=fopen("c:/datos.txt","wb+");
if(fp==NULL)
{
puts("ERROR: La base de datos no est  configurada correctamente.");
puts("Por favor, contacta al administrador para solucionar el problema.");
puts("Si t£ eres el programador, checa correctamente tu c¢digo y");
puts("verifica que la ubicaci¢n del archivo sea la correcta.");
puts("\n");
printf("Este programa se cerrar  automaticamente en 10 segundos.");
sleep(10);
exit(0);
}}
recsize=sizeof(e);
while(1) {
inicio:
clrscr();
gotoxy(23,5); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(23,6); printf("³ şşş BIBLIOTECA 'A TODO COLOR' şşş ³");
gotoxy(23,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(23,9); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(23,10); printf("³  1. Administrador                ³");
gotoxy(23,11); printf("³  2. Cliente                      ³");
gotoxy(23,12); printf("³  Otro. Salir del men£            ³");
gotoxy(23,13); printf("³                                  ³");
gotoxy(23,14); printf("³ Selecciona tu interfaz           ³");
gotoxy(23,15); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
fflush(stdin);
gotoxy(48,14);
b=getche();
if (b=='1') {
gotoxy(23,5); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(23,6); printf("³ şşş BIBLIOTECA 'A TODO COLOR' şşş ³");
gotoxy(23,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(23,9); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(23,10); printf("³  1. Agregar nuevo libro          ³");
gotoxy(23,11); printf("³  2. Editar libro existente       ³");
gotoxy(23,12); printf("³  3. Eliminar libro existente     ³");
gotoxy(23,13); printf("³  4. Buscar libro existente       ³");
gotoxy(23,14); printf("³                                  ³");
gotoxy(23,15); printf("³ Selecciona tu opcion             ³");
gotoxy(23,16); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
fflush(stdin);
gotoxy(46,15);
c=getche();
clrscr();
switch(c) {
case'1':
fseek(fp,0,SEEK_END);
a='S';
while(a=='S'||a=='s')
{clrscr();
gotoxy(20,10);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,11);printf("³ Registro de nuevos libros şşşşşşş ³");
gotoxy(20,12);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(20,13);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,14);printf("³ Libro     :                       ³");
gotoxy(20,15);printf("³ Autor     :                       ³");
gotoxy(20,16);printf("³ Precio    :                       ³");
gotoxy(20,17);printf("³ Libro No. :                       ³");
gotoxy(20,18);printf("³                                   ³");
gotoxy(20,19);printf("³ ¨Registrar otro libro? (s/n):     ³");
gotoxy(20,20);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(34,14);gets(e.libro);
gotoxy(34,15);gets(e.autor);
gotoxy(34,16);gets(e.precio);
gotoxy(34,17);gets(e.numero);
fwrite(&e,recsize,1,fp);
fflush(stdin);
gotoxy(52,19);a=getche();}
break;
case'2' :
clrscr();
a='S';
while(a=='S'||a=='s')
{
gotoxy(20,10);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,11);printf("³ Edici¢n de libros existentes şş ³");
gotoxy(20,12);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,13);printf("³ Libro No. :                     ³");
gotoxy(20,14);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,15);printf("³ Libro     :                     ³");
gotoxy(20,16);printf("³ Autor     :                     ³");
gotoxy(20,17);printf("³ Precio    :                     ³");
gotoxy(20,18);printf("³ Libro No. :                     ³");
gotoxy(20,19);printf("³                                 ³");
gotoxy(20,20);printf("³ ¨Editar otro libro? (s/n):      ³");
gotoxy(20,21);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(34,13);gets(numero);
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
{if(strcmp(e.numero,numero)==0)
{gotoxy(34,15);gets(e.libro);
gotoxy(34,16);gets(e.autor);
gotoxy(34,17);gets(e.precio);
gotoxy(34,18);gets(e.numero);
fseek(fp,-recsize,SEEK_CUR);
fwrite(&e,recsize,1,fp);
break;}}
fflush(stdin);
gotoxy(49,20);a=getche();
}
break;
case'3':
clrscr();
a='S';
while (a=='S'||a=='s')
{
gotoxy(20,10);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,11);printf("³ Eliminaci¢n de libros existentes  ³");
gotoxy(20,12);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,13);printf("³ Libro No. :                       ³");
gotoxy(20,14);printf("³                                   ³");
gotoxy(20,15);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(34,13);gets(numero);
ft=fopen("c:/temp.dat","wb");
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
if(strcmp(e.numero,numero)!=0)
{fwrite(&e,recsize,1,ft);}
fclose(fp);
fclose(ft);
remove("c:/datos.txt");
rename("c:/temp.dat","c:/datos.txt");
fp=fopen("c:/datos.txt","rb+");
gotoxy(22,14);printf("¨Eliminar otro libro? (s/n):");
fflush(stdin);
gotoxy(51,14);a=getche();
}
break;
case'4':
clrscr();
a='S';
while (a=='S'||a=='s')
{clrscr();
gotoxy(20,10);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,11);printf("³ Buscar libro existente şşşşşşş ³");
gotoxy(20,12);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,13);printf("³ Libro No. :                    ³");
gotoxy(20,14);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,15);printf("³ Libro     :                    ³");
gotoxy(20,16);printf("³ Autor     :                    ³");
gotoxy(20,17);printf("³ Precio    :                    ³");
gotoxy(20,18);printf("³ N£mero    :                    ³");
gotoxy(20,19);printf("³                                ³");
gotoxy(20,20);printf("³ ¨Buscar otro libro? (s/n):     ³");
gotoxy(20,21);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(34,13);gets(numero);
rewind(fp);
while(fread(&e,recsize,1,fp) == 1){
if(strcmp(e.numero,numero) == 0)
{gotoxy(34,15);printf(e.libro);
gotoxy(34,16);printf(e.autor);
gotoxy(34,17);printf(e.precio);
gotoxy(34,18);printf(e.numero);
}}
fflush(stdin);
gotoxy(49,20);a=getche();
}}
} else if (b=='2') {
clrscr();
rewind(fp);
gotoxy(20,10);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,11);printf("³ Servicio al cliente şşşşşşşşşşşşş ³");
gotoxy(20,12);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,13);printf("³ Tu nombre  :                      ³");
gotoxy(20,14);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(35,13);gets(cliente);
clrscr();
printf("Buenos dias, Sr(a). %s. ¨Qu‚ libro te gustaria comprar hoy?\n",cliente ? cliente : "An¢nimo");
printf("Por favor echa un vistazo a la lista y presiona una tecla para continuar.\n");
printf("Si la lista aparece vac¡a, presiona N para regresar al men£.");
printf("\n\n");
while(fread(&e,recsize,1,fp)==1){
printf("# %s | Libro: \"%s\" | Autor: %s | Precio: $%s",e.numero,e.libro,e.autor,e.precio);
printf("\n");
}
getch();
clrscr();
gotoxy(20,10);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,11);printf("³ Compra/renta de libros şşşşşşş ³");
gotoxy(20,12);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,13);printf("³ N£mero:                        ³");
gotoxy(20,14);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,15);printf("³ Libro     :                    ³");
gotoxy(20,16);printf("³ Autor     :                    ³");
gotoxy(20,17);printf("³ Precio    :                    ³");
gotoxy(20,18);printf("³ Cliente   :                    ³");
gotoxy(20,19);printf("³ ¨Quieres este libro? (s/n)     ³");
gotoxy(20,20);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(30,13);gets(numero);
rewind(fp);
while(fread(&e,recsize,1,fp) == 1){
if(strcmp(e.numero,numero) == 0) {
gotoxy(34,15);printf(e.libro);
gotoxy(34,16);printf(e.autor);
gotoxy(34,17);printf(e.precio);
gotoxy(34,18);printf(cliente);
}
}
gotoxy(49,19);
resp=getche();
if (resp=='S' || resp=='s') {
clrscr();
gotoxy(23,5); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(23,6); printf("³ şşş BIBLIOTECA 'A TODO COLOR' şşş ³");
gotoxy(23,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(32,11); printf(cliente);
gotoxy(23,9); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(23,10); printf("³ Tu compra ha sido exitosa.       ³");
gotoxy(23,11); printf("³ Fue un placer atenderte.         ³");
gotoxy(23,12); printf("³ De parte de Biblioteca \"A TODO   ³");
gotoxy(23,13); printf("³ COLOR\" te queremos decir:        ³");
gotoxy(23,14); printf("³ ­Disfruta de tu libro! ^-^       ³");
gotoxy(23,15); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(23,17); printf("Presiona una tecla para volver al men£.");
getch();
} else {
clrscr();
fflush(stdin);
goto inicio;
}
} else {
fclose(fp);
exit(0);
}
}
}
