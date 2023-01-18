#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main(){
	int alis_satis;
	setlocale(LC_ALL, "Turkish");
	cout<<"Hoşgeldiniz. Hangi işlemi yapmak istiyorsunuz?\nDöviz alma=1 & Döviz satma=2 : \t"; cin>>alis_satis;
	if (alis_satis==1){
		int para_birimi;
		int miktar;
		cout<<"Döviz almayı seçtiniz. Hangi para biriminden almak istiyorsunuz? \nEuro:1\tDolar:2\tSterlin:3\tİsviçre Frankı:4\t"; cin>>para_birimi;
		if(para_birimi==1){
			cout<<"Ne kadar Euro almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tEuro almak için\t"<<3.98*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tEuro almak için\t"<<3.94*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tEuro almak için\t"<<3.92*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
		else if(para_birimi==2){
			cout<<"Ne kadar Dolar almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tDolar almak için\t"<<3.68*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tDolar almak için\t"<<3.63*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tDolar almak için\t"<<3.62*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
		else if(para_birimi==3){
			cout<<"Ne kadar Sterlin almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tStrelin almak için\t"<<4.70*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tSterlin almak için\t"<<4.66*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tSterlin almak için\t"<<4.62*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
		else if(para_birimi==4){
			cout<<"Ne kadar İsviçre Frankı almak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=1000){
				cout<<miktar<<"\tİsviçre Frankı almak için\t"<<3.75*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tİsviçre Frankı almak için\t"<<3.70*miktar<<"\tTL vermeniz gerek."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tİsviçre Frankı almak için\t"<<3.69*miktar<<"\tTL vermeniz gerek."<<endl;
			}
		}
	}
	else if(alis_satis==2){
		int para_birimi;
		int miktar;
		cout<<"Döviz satmayı seçtiniz.Hangi para biriminden satmak istiyorsunuz? \nEuro:1\tDolar:2\tSterlin:3\tİsviçre Frankı:4\t"; cin>>para_birimi;
		if (para_birimi==1){
			cout<<"Ne kadar Euro satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tEuro satarsanız\t"<<miktar*3.85<<"\tTL alırsınız."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tEuro satarsanız\t"<<miktar*3.89<<"\tTL alırsınız."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tEuro satarsanız\t"<<miktar*3.90<<"\tTL alırsınız."<<endl;
			}
			
		}
		else if (para_birimi==2){
			cout<<"Ne kadar Dolar satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tDolar satarsanız\t"<<miktar*3.54<<"\tTL alırsınız."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tDolar satarsanız\t"<<miktar*3.57<<"\tTL alırsınız."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tDolar satarsanız\t"<<miktar*3.58<<"\tTL alırsınız."<<endl;
			}
			
		}
		else if (para_birimi==3){
			cout<<"Ne kadar Sterlin satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tSterlin satarsanız\t"<<miktar*4.50<<"\tTL alırsınız."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tSterlin satarsanız\t"<<miktar*4.57<<"\tTL alırsınız."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tSterlin satarsanız\t"<<miktar*4.60<<"\tTL alırsınız."<<endl;
			}
			
		}
		else if (para_birimi==4){
			cout<<"Ne kadar İsviçre Frankı satmak istiyorsunuz?\t"; cin>>miktar;
			if(miktar<=100){
				cout<<miktar<<"\tİsviçre Frankı satarsanız\t"<<miktar*3.55<<"\tTL alırsınız."<<endl;
			}
			else if(1000<miktar<=5000){
				cout<<miktar<<"\tİsviçre Frankı satarsanız\t"<<miktar*3.61<<"\tTL alırsınız."<<endl;
			}
			else if(miktar>5000){
				cout<<miktar<<"\tİsviçre Frankı satarsanız\t"<<miktar*3.67<<"\tTL alırsınız."<<endl;
			}
			
		}
	}
	system("pause");
	return 0;
}
