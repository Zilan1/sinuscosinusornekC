#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double derece,sonucsin,sonuccos;
	
	printf("Dereceyi Girin: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("Sinus Degeri: %.2lf \n",sonucsin);
	
	sonuccos=cos(derece);
	printf("Cosunis Degeri: %.2lf \n",sonuccos);
	
	
	//***************************************************
	
	//double sayi,sonuc,sonuc2;
	
	//printf("Sayi Girin: ");
	//scanf("%lf",&sayi);
	
	//sonuc=fabs(sayi);
	
	//printf("Sonuc: %.lf",sonuc);
	
	//sonuc2=log(sayi);
	
	//printf("\nSonuc Logaritma:%.2lf",sonuc2);
	
	
	//***************************************************
	
	//double sayi,sonuc1,sonuc2;
	
	//printf("Deger Girin: ");
	//scanf("%lf",&sayi);
	
	//sonuc1=floor(sayi);
	
	//printf("Sonuc: %.f",sonuc1);
	
	//printf("\n");
	
	//sonuc2=ceil(sayi);
	
	//printf("Sonuc:%.f",sonuc2);
	
	
	//***************************************************
	
	//int x,y;
	//int sonuc;
	
	//printf("Taban Girin: ");
	//scanf("%d",&x);
	
	//printf("Us Girin: ");
	//scanf("%d",&y);
	
	//sonuc=pow(x,y);
	
	//printf("Sonuc:%d",sonuc);
	
	return 0;
}
