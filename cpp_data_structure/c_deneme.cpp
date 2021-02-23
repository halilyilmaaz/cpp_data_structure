#include <iostream>
using namespace std;

class Adres{
	public:
		string sehir;
		string mahalle;
		string sokakAdi;
		string apartmanAdi;
		int daireNo;
		
		Adres(string,string,string,string,int);
		~Adres(){
			cout << "delete Adres"<<endl;
		}
};
Adres::Adres(string sehir="istanbul",string mahalle="AsmalýEvler",string sokakAdi="duyar",string apartmanAdi="apt",int daireNo=17){
	this->sehir=sehir;
	this->mahalle = mahalle;
	this->sokakAdi=sokakAdi;
	this->apartmanAdi=apartmanAdi;
	this->daireNo=daireNo;
}


class Insan{
	public:
		string isim;
		int KimlikNo;
		
		Insan(string,int);
		~Insan(){
			cout << "delete Insan"<<endl;
		}
	
};
Insan::Insan(string isim="haliil",int KimlikNo=123){
	this->isim=isim;
	this->KimlikNo=KimlikNo;
}





int main(){
	
	Insan ins("kemal",321);
	Adres adres1();
	cout << ins.isim << ins.KimlikNo<<endl;
	//cout << ins.sehir<< ins.mahalle << ins.sokakAdi<<ins.apartmanAdi<<ins.daireNo<<endl;
	
	
	return 0;
}
