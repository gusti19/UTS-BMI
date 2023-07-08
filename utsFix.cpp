#include <iostream>
#include <string>
using namespace std;

int main(){
	//deklarasi variabel
	int jk	;
	float berat, tinggi, bmi, broca, meter;
	//deklarasi variable untuk perulangan
	string ulangi;

	cout<<"==================================================="<<endl;
	cout<<"Program C++ Menghitung Berat Badan Ideal Dengan BMI"<<endl;
	cout<<"Hanya Untuk Orang >18 Tahun"<<endl;
	cout<<"==================================================="<<endl;
	cout<<endl;
	
	cout<<"Kelompok 02-IF08"<<endl;
	cout<<endl;
	
	cout<<"1. Joan Caroline Banjarnahor 22.11.5046"<<endl;
	cout<<"2. Gabriel Graycello Philips Arinza Wona 22.11.5023"<<endl;
	cout<<"3. Rayandhika Bagasdwipa Rahmatdana 22.11.5049"<<endl;
	cout<<"4. Gusti Padaka 22.11.5020"<<endl;
	cout<<"5. Aghsal Seqan Majid 22.11.5066"<<endl;
	cout<<"6. Muhajir Faturrahman A.S 22.11.5056"<<endl;
	cout<<"==================================================="<<endl;
	cout<<endl;
	
	while(true)
	{
// print pilihan jenis kelamin
		cout<<"1. Pria"<<endl;
		cout<<"2. Wanita"<<endl;
		
		cout<<"Pilih jenis kelamin (1/2) : ";
//masukkan input jk (1/2)
		cin>>jk;
		
		//Laki - laki
		if(jk == 1)
		{
			
			cout<<"Masukan berat (kg)	: ";
			cin>>berat;
			cout<<"Masukan tinggi (cm)	: ";
			cin>>tinggi;
			
			meter=tinggi/100;
			
			bmi=(berat/(meter*meter));
			
			cout<<endl;
		
			cout<<"BMI		: "<<bmi<<" ";
			
			if (bmi<18.5){
		        cout<<"(Kurus)"<<endl;
		    }else if (bmi<=24.9){
		        cout<<"(Normal)"<<endl;
		    }else if (bmi<29.9){
		        cout<<"(Overweight)"<<endl;
		    }else {
		        cout<<"(Obesitas)"<<endl;
		    }
// perbedaan lk ada pada rumus broca
		    int broca=((tinggi-100)-(0.10*(tinggi-100)));
		    int hasil = (int)broca;
		    cout<<"Berat badan ideal Anda menurut rumus Broca : "<<hasil<<" KG"<<endl;
		}
		//Perempuan
		else if(jk == 2)
		{
			cout<<"Masukan berat (kg)	: ";
			cin>>berat;
			cout<<"Masukan tinggi (cm)	: ";
			cin>>tinggi;
			
			meter=tinggi/100;
			
			bmi=(berat/(meter*meter));
			
			cout<<endl;
		
			cout<<"BMI		: "<<bmi<<" ";
			
			if (bmi<18.5){
		        cout<<"(Kurus)"<<endl;
		    }else if (bmi<=24.9){
		        cout<<"(Normal)"<<endl;
		    }else if (bmi<29.9){
		        cout<<"(Overweight)"<<endl;
		    }else {
		        cout<<"(Obesitas)"<<endl;
		    }
// perbedaan pr ada pada rumus broca
		    int broca=((tinggi-100)-(0.15*(tinggi-100)));
		    int hasil = (int)broca;
		    cout<<"Berat badan ideal Anda menurut rumus Broca : "<<hasil<<" KG"<<endl;
		} else 
			{
// jika input selain 1/2 maka akan keluar output dibawah ini
				cout<<"Input Anda Salah, ";
			}
// perulangan
			cout<<"Apakah anda ingin Melanjutkan ? (y/n)";
		    cin>>ulangi;
		    if(ulangi == "y" || ulangi == "Y" || ulangi == "ya" || ulangi == "Ya")
		    {
		    	continue;
			}
			else{
				break;
			}
		return 0;
	}
//	while (ulangi == "y" || ulangi == "Y" || ulangi == "ya" || ulangi == "Ya")
}