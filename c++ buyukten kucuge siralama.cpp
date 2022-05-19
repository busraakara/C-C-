#include <stdio.h>
#include <conio.h>
main(){
	int dizi[100],gecici,n;
	printf("Kac sayi girilecek:");
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		printf("%d. Sayi:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	printf("\n");
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(dizi[i]>dizi[j]){
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
    }
	printf("Sirali diziniz ");
		for( int i=0 ; i<n ; i++){
			printf("%d ",dizi[i]);	
	}	
	getch();
}
