#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int hexto_decimal(char deger_hex[]){

int length = strlen(deger_hex);
int taban_deger = 1;
int decimal_deger = 0;
for(int i=length-1;i>=0;i--){
   if(deger_hex[i]>='0' && deger_hex[i]<='9'){
    decimal_deger +=(deger_hex[i]-48)*taban_deger;
    taban_deger=taban_deger*16;
   }
    else if(deger_hex[i]>='A' && deger_hex[i]<= 'F'){
        decimal_deger+=(deger_hex[i]-55)*taban_deger;
        taban_deger=taban_deger*16;
    }

}
return decimal_deger;
}

int main ()
{
int value;
int taban_deger;
int taban_deger2;
int temp;
int arr[100];
int sonuc;
int i;
printf("*************");
printf("Istediginiz Tabandaki Sayiyi 10'luk Tabana Ceviren Programa Hosgeldiniz...");
printf("*************\n");
printf("\n10'luk tabana donusturmek istediginiz sayi kac tabanindadir?:\n");
scanf("%d",&taban_deger2);
if(taban_deger2==16){
    printf("\n DIKKAT! 16'lik tabanda gireceginiz sayi icin lutfen buyuk harf kullaniniz!\n");
}
printf("\n%d lik tabandaki sayiyi giriniz:\n",taban_deger2);
scanf("%d",&temp);
printf("***************");

if(taban_deger2==16){
    char sayi_hex[20];
scanf("%s",&sayi_hex);
printf("\n%d'lik tabandan 10'luk tabana donusturulmus sayi:\n",taban_deger2);
printf("%d",hexto_decimal(sayi_hex));
}
else{

value=0;
sonuc=0;
for(int i=0;i<100;i++){
 arr[i]=0;
 }
for(i=0;i<100;i++){
if(temp>=10){
 arr[i]=temp%10;
 temp=temp-arr[i];
 temp=temp/10;
}
else if(temp<10){
 arr[i]=temp;
 break;
 }
 }
int temp2=0;
for(int i=0;i<100;i++){
 sonuc=sonuc+arr[temp2]*pow(taban_deger2,i);
 temp2++;
 }
value=sonuc+0;

printf("\n");
printf("%d tabanindan 10'luk tabana donusturulmus sayi: %d'dir.\n",taban_deger2,value);

 return 0;}
 }

