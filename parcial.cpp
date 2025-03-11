#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /*Entrada*/
 double DanoB;
 int material;
    /*Salida*/
 double DanoF;
 cout<<fixed<<setprecision(2);
 cout<<"Digite el daño base del material ";
 cin>>DanoB;
 cout<<"Digite el material ";
 cin>>material;
 switch(material){ 
     case 1: /*Madera*/
     DanoF=(DanoB*0.70); /*Reduce el 30%*/
     break;
     case 2: /*Metal*/
     DanoF=(DanoB*0.50); /*Reduce el 50%*/
     break;
     case 3: /*Concreto*/
     DanoF=(DanoB*0.30); /*Reduce el 70%*/
     break;
    default:DanoF=-1; /*En caso de error*/

 }
 if(DanoF== -1){
     cout<<"Los datos ingresados no son validos";
 }
 else{ /*Solo si el material es válido*/
  cout<<"El Daño final es "<<DanoF<<endl;
}
return 0;
}