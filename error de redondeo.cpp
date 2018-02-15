#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main()
{ 
 float x,p,np,ep,rp,r1,r2;
 int c;
 do{
    cout << "Introduce el valor de X (mayor a 0):";cin>>x;
    if(x<=0){cout<<"Ingrese un numero valido, Aprende a leer!"<<endl;getch();system("cls");}
	}while (x<=0);
    cout<<"Introduce el total de decimales a mostrar: ";cin>>c;
    
    r1=round(sqrt(x+1)*10000)/10000;
    r2=round(sqrt(x)*10000)/10000;
	p=((round(((r1-r2))*10000)/10000)*x);
    np=x/(round(((r1+r2))*10000)/10000);
    ep=round((p-np)*10000)/10000;
    if(ep<0){
    	ep=ep*-1;
	}
    rp=(ep/p);

    cout<<"El valor de p: "<<p<<fixed<<setprecision(c)<<endl;
    cout<<"El valor de p negada:"<<np<<fixed<<setprecision(c)<<endl;
    cout<<"El valor del Error Absoluto:"<<ep<<fixed<<setprecision(c)<<endl; 
    cout<<"El valor del Error Relativo:"<<rp<<fixed<<setprecision(c)<<endl; 
  getch();  
}



