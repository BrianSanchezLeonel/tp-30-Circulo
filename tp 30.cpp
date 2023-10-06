#include<bits/stdc++.h>
using namespace std;
class CCirculo{
	private:
		float radio;
		float perimetro;
	public:
		void setRadio(float Radio){
			radio = Radio;
		}
		void setPerimetro(float Perimetro){
			perimetro = Perimetro;
		}
		float getRadio(){
			return radio;
		}
		float getPerimetro(){
			return perimetro;
		}
};
int main(){
	float Radio;
	float Perimetro;
	cout<<"Ingrese el radio del circulo: "<<endl;
	cin>>Radio;
	cout<<"Ingrese el perimetro del circulo: "<<endl;
	cin>>Perimetro;
	CCirculo CLocal;
	CLocal.setPerimetro(Perimetro);
	CLocal.setRadio(Radio);
	cout<<"Radio: "<<CLocal.getRadio()<<endl;
	cout<<"Perimetro: "<<CLocal.getPerimetro()<<endl;
	return 0;
}