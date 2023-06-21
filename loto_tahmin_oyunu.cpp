#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
	int y1,y2,y3,y4,y5,y6;
	int x1=rand()%100; 
	int x2=rand()%100;
	int x3=rand()%100;
	int x4=rand()%100;
	int x5=rand()%100;
	int x6=rand()%100;
	x1 != x2 != x3 != x4 != x5 != x6 ;
	cout<<"1. tahmininizi girin:\t"; cin>>y1;
	cout<<"2. tahmininizi girin:\t"; cin>>y2;
	cout<<"3. tahmininizi girin:\t"; cin>>y3;
	cout<<"4. tahmininizi girin:\t"; cin>>y4;
	cout<<"5. tahmininizi girin:\t"; cin>>y5;
	cout<<"6. tahmininizi girin:\t"; cin>>y6;
	if(x1==y1 & x2==y2 & x3==y3 & x4==y4 & x5==y5 & x6==y6){
		cout<<"TEBRİKLER KAZANDINIZ"<<endl;
		
	}
	else {
		cout<<"Kazanamadınız"<<endl;
		cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<" "<<x6;
	}
	return 0;
	
}
