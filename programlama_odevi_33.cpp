#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main(){
	int alis_satis;
	setlocale(LC_ALL, "Turkish");
	cout<<"Ho�geldiniz. Hangi i�lemi yapmak istiyorsunuz?\nD�viz alma=1 & D�viz satma=2 : \t"; cin>>alis_satis;
	if (alis_satis==1){
		int para_birimi;
		int miktar;
		cout<<"D�viz almay� se�tiniz. Hangi para biriminden almak istiyorsunuz? \nEuro:1\tDolar:2\tSterlin:3\t�svi�re Frank�:4\t"; cin>>para_birimi;
		if(para_birimi==1){
			cout<<"Ne kadar Euro almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tEuro almak i�in\t"<<3.98*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tEuro almak i�in\t"<<3.94*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tEuro almak i�in\t"<<3.92*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
		else if(para_birimi==2){
			cout<<"Ne kadar Dolar almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tDolar almak i�in\t"<<3.68*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tDolar almak i�in\t"<<3.63*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tDolar almak i�in\t"<<3.62*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
		else if(para_birimi==3){
			cout<<"Ne kadar Sterlin almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tStrelin almak i�in\t"<<4.70*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tSterlin almak i�in\t"<<4.66*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tSterlin almak i�in\t"<<4.62*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
		else if(para_birimi==4){
			cout<<"Ne kadar �svi�re Frank� almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\t�svi�re Frank� almak i�in\t"<<3.75*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\t�svi�re Frank� almak i�in\t"<<3.70*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\t�svi�re Frank� almak i�in\t"<<3.69*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
	}
	else if(alis_satis==2){
		int para_birimi;
		int miktar;
		cout<<"D�viz satmay� se�tiniz.Hangi para biriminden satmak istiyorsunuz? \nEuro:1\tDolar:2\tSterlin:3\t�svi�re Frank�:4\t"; cin>>para_birimi;
		if (para_birimi==1){
			cout<<"Ne kadar Euro satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tEuro satarsan�z\t"<<miktar*3.85<<"\tTL al�rs�n�z."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tEuro satarsan�z\t"<<miktar*3.89<<"\tTL al�rs�n�z."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tEuro satarsan�z\t"<<miktar*3.90<<"\tTL al�rs�n�z."<<endl;
			}
			
		}
		else if (para_birimi==2){
			cout<<"Ne kadar Dolar satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tDolar satarsan�z\t"<<miktar*3.54<<"\tTL al�rs�n�z."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tDolar satarsan�z\t"<<miktar*3.57<<"\tTL al�rs�n�z."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tDolar satarsan�z\t"<<miktar*3.58<<"\tTL al�rs�n�z."<<endl;
			}
			
		}
		else if (para_birimi==3){
			cout<<"Ne kadar Sterlin satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tSterlin satarsan�z\t"<<miktar*4.50<<"\tTL al�rs�n�z."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tSterlin satarsan�z\t"<<miktar*4.57<<"\tTL al�rs�n�z."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tSterlin satarsan�z\t"<<miktar*4.60<<"\tTL al�rs�n�z."<<endl;
			}
			
		}
		else if (para_birimi==4){
			cout<<"Ne kadar �svi�re Frank� satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\t�svi�re Frank� satarsan�z\t"<<miktar*3.55<<"\tTL al�rs�n�z."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\t�svi�re Frank� satarsan�z\t"<<miktar*3.61<<"\tTL al�rs�n�z."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\t�svi�re Frank� satarsan�z\t"<<miktar*3.67<<"\tTL al�rs�n�z."<<endl;
			}
			
		}
	}
	system("pause");
	return 0;
}
