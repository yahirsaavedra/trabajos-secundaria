#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
int i,j,c,count=0,ans=0,flag=0,*ptr;
char a[1][64]={"PRUEBA"},b[10],alpha,d='_',intentos[1][64];
clrscr();
c=strlen(&a[0][0]);
printf("\n\n\t\t\t** EL AHORCADO **\n\n\t\t\t");
for(i=0;i<c;i++){printf("%c ",d);b[i]=d;}
while (count<6) {
flag=0;
printf("\n\n\t\tIngresa una letra: ");
alpha=getche();
for(i=0;i<c;i++) {
if (alpha==a[0][i]) {b[i]=a[0][i];flag=1;ans++;}}
clrscr();
printf("\n\n\t\t\t** EL AHORCADO **\n\n\t\t\t");
for(i=0;i<c;i++)
printf("%c ",b[i]);
if(flag==0) {count++;
if (6-count>0) {
printf("\n\n\t\t­Fallaste!\n\t\tIntentos restantes: %d",6-count);
} else {printf("\n\n\t\tLa palabra era %s",a);}
} else {
if (c-ans>0) {
printf("\n\n\t\t­Acertaste!\n\n\t\tEst s a %d letra(s) de completar.",c-ans);
} else {
printf("\n\n");}}
if(ans==c) break;}
if (ans==c) printf("\n\n\t\t­Felicidades! Acertaste a la palabra.");
else printf("\n\n\n\t\t­Suerte para la pr¢xima! Perdiste.");
getch();}
