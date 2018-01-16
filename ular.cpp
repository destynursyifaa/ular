#include <iostream>
#include <string>
using namespace std;

class ular{
	public:
		void bersuara(string bunyi);
		int jumlahular;
		string warnaular;
};

int main(){
	ular ularcobra,ularsawah,ularpiton;
	
	ularcobra.warnaular = "COKLAT";
	ularsawah.warnaular = "HIJAUPUTIH";
	ularpiton.warnaular = "COKLATMERAH";
	
	cout << (ularpiton.warnaular);
	ularpiton.bersuara("sssstttssstttt");
	
	ularcobra.bersuara("ttsssut");
}

void ular::bersuara(string bunyi){
	cout << "Bunyinya "<<bunyi<< " !!"<<endl;
}
