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
puts("ERROR: La base de datos no est� configurada correctamente.");
puts("Por favor, contacta al administrador para solucionar el problema.");
puts("Si t� eres el programador, checa correctamente tu c�digo y");
puts("verifica que la ubicaci�n del archivo sea la correcta.");
puts("\n");
printf("Este programa se cerrar� automaticamente en 10 segundos.");
sleep(10);
exit(0);
}}
recsize=sizeof(e);
while(1) {
inicio:
clrscr();
gotoxy(23,5); printf("�����������������������������������Ŀ");
gotoxy(23,6); printf("� ��� BIBLIOTECA 'A TODO COLOR' ��� �");
gotoxy(23,7); printf("�������������������������������������");
gotoxy(23,9); printf("����������������������������������Ŀ");
gotoxy(23,10); printf("�  1. Administrador                �");
gotoxy(23,11); printf("�  2. Cliente                      �");
gotoxy(23,12); printf("�  Otro. Salir del men�            �");
gotoxy(23,13); printf("�                                  �");
gotoxy(23,14); printf("� Selecciona tu interfaz           �");
gotoxy(23,15); printf("������������������������������������");
fflush(stdin);
gotoxy(48,14);
b=getche();
if (b=='1') {
gotoxy(23,5); printf("�����������������������������������Ŀ");
gotoxy(23,6); printf("� ��� BIBLIOTECA 'A TODO COLOR' ��� �");
gotoxy(23,7); printf("�������������������������������������");
gotoxy(23,9); printf("����������������������������������Ŀ");
gotoxy(23,10); printf("�  1. Agregar nuevo libro          �");
gotoxy(23,11); printf("�  2. Editar libro existente       �");
gotoxy(23,12); printf("�  3. Eliminar libro existente     �");
gotoxy(23,13); printf("�  4. Buscar libro existente       �");
gotoxy(23,14); printf("�                                  �");
gotoxy(23,15); printf("� Selecciona tu opcion             �");
gotoxy(23,16); printf("������������������������������������");
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
gotoxy(20,10);printf("�����������������������������������Ŀ");
gotoxy(20,11);printf("� Registro de nuevos libros ������� �");
gotoxy(20,12);printf("�������������������������������������");
gotoxy(20,13);printf("�����������������������������������Ŀ");
gotoxy(20,14);printf("� Libro     :                       �");
gotoxy(20,15);printf("� Autor     :                       �");
gotoxy(20,16);printf("� Precio    :                       �");
gotoxy(20,17);printf("� Libro No. :                       �");
gotoxy(20,18);printf("�                                   �");
gotoxy(20,19);printf("� �Registrar otro libro? (s/n):     �");
gotoxy(20,20);printf("�������������������������������������");
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
gotoxy(20,10);printf("���������������������������������Ŀ");
gotoxy(20,11);printf("� Edici�n de libros existentes �� �");
gotoxy(20,12);printf("���������������������������������Ĵ");
gotoxy(20,13);printf("� Libro No. :                     �");
gotoxy(20,14);printf("���������������������������������Ĵ");
gotoxy(20,15);printf("� Libro     :                     �");
gotoxy(20,16);printf("� Autor     :                     �");
gotoxy(20,17);printf("� Precio    :                     �");
gotoxy(20,18);printf("� Libro No. :                     �");
gotoxy(20,19);printf("�                                 �");
gotoxy(20,20);printf("� �Editar otro libro? (s/n):      �");
gotoxy(20,21);printf("�����������������������������������");
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
gotoxy(20,10);printf("�����������������������������������Ŀ");
gotoxy(20,11);printf("� Eliminaci�n de libros existentes  �");
gotoxy(20,12);printf("�����������������������������������Ĵ");
gotoxy(20,13);printf("� Libro No. :                       �");
gotoxy(20,14);printf("�                                   �");
gotoxy(20,15);printf("�������������������������������������");
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
gotoxy(22,14);printf("�Eliminar otro libro? (s/n):");
fflush(stdin);
gotoxy(51,14);a=getche();
}
break;
case'4':
clrscr();
a='S';
while (a=='S'||a=='s')
{clrscr();
gotoxy(20,10);printf("��������������������������������Ŀ");
gotoxy(20,11);printf("� Buscar libro existente ������� �");
gotoxy(20,12);printf("��������������������������������Ĵ");
gotoxy(20,13);printf("� Libro No. :                    �");
gotoxy(20,14);printf("��������������������������������Ĵ");
gotoxy(20,15);printf("� Libro     :                    �");
gotoxy(20,16);printf("� Autor     :                    �");
gotoxy(20,17);printf("� Precio    :                    �");
gotoxy(20,18);printf("� N�mero    :                    �");
gotoxy(20,19);printf("�                                �");
gotoxy(20,20);printf("� �Buscar otro libro? (s/n):     �");
gotoxy(20,21);printf("����������������������������������");
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
gotoxy(20,10);printf("�����������������������������������Ŀ");
gotoxy(20,11);printf("� Servicio al cliente ������������� �");
gotoxy(20,12);printf("�����������������������������������Ĵ");
gotoxy(20,13);printf("� Tu nombre  :                      �");
gotoxy(20,14);printf("�������������������������������������");
gotoxy(35,13);gets(cliente);
clrscr();
printf("Buenos dias, Sr(a). %s. �Qu� libro te gustaria comprar hoy?\n",cliente ? cliente : "An�nimo");
printf("Por favor echa un vistazo a la lista y presiona una tecla para continuar.\n");
printf("Si la lista aparece vac�a, presiona N para regresar al men�.");
printf("\n\n");
while(fread(&e,recsize,1,fp)==1){
printf("# %s | Libro: \"%s\" | Autor: %s | Precio: $%s",e.numero,e.libro,e.autor,e.precio);
printf("\n");
}
getch();
clrscr();
gotoxy(20,10);printf("��������������������������������Ŀ");
gotoxy(20,11);printf("� Compra/renta de libros ������� �");
gotoxy(20,12);printf("��������������������������������Ĵ");
gotoxy(20,13);printf("� N�mero:                        �");
gotoxy(20,14);printf("��������������������������������Ĵ");
gotoxy(20,15);printf("� Libro     :                    �");
gotoxy(20,16);printf("� Autor     :                    �");
gotoxy(20,17);printf("� Precio    :                    �");
gotoxy(20,18);printf("� Cliente   :                    �");
gotoxy(20,19);printf("� �Quieres este libro? (s/n)     �");
gotoxy(20,20);printf("����������������������������������");
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
gotoxy(23,5); printf("�����������������������������������Ŀ");
gotoxy(23,6); printf("� ��� BIBLIOTECA 'A TODO COLOR' ��� �");
gotoxy(23,7); printf("�������������������������������������");
gotoxy(32,11); printf(cliente);
gotoxy(23,9); printf("����������������������������������Ŀ");
gotoxy(23,10); printf("� Tu compra ha sido exitosa.       �");
gotoxy(23,11); printf("� Fue un placer atenderte.         �");
gotoxy(23,12); printf("� De parte de Biblioteca \"A TODO   �");
gotoxy(23,13); printf("� COLOR\" te queremos decir:        �");
gotoxy(23,14); printf("� �Disfruta de tu libro! ^-^       �");
gotoxy(23,15); printf("������������������������������������");
gotoxy(23,17); printf("Presiona una tecla para volver al men�.");
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
