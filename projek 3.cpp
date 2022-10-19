#include<iostream>
using namespace std;

	//function
int kali(int jumlah,int harga){
	return jumlah*harga;
}
int main(){
	
	//deklarasi variabel
	
	int pilih[100];
	int jumlah[100];
	int sub_total[100];
	int harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"****************DAFTAR HARGA BARANG ELEKTRONIK***************"<< endl;
    cout<<"1.  Kipas Angin Kecil\t\t\tRp. 800.000"<<endl;
    cout<<"2.  Kipas Angin Besar\t\t\tRp. 1.000.000"<<endl;
    cout<<"3.  Televisi\t\t\t\tRp. 2.500.000"<<endl;
    cout<<"4.  AC\t\t\t\t\tRp. 3.000.000"<<endl;
    cout<<"5.  Setrika\t\t\t\tRp. 150.000"<<endl;
    cout<<"6.  Lampu LED\t\t\t\tRp. 100.000"<<endl;
    cout<<"7.  CCTV\t\t\t\tRp. 1.250.000"<<endl;
    cout<<"8.  Lampu Biasa\t\t\t\tRp. 75.000"<<endl;
    cout<<"9.  Lampu Bohlam\t\t\tRp. 50.000"<<endl;
    cout<<"10. Salon\t\t\t\tRp. 2.000.000"<<endl;
    cout<<"-------------------------------------------------------------"<< endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Barang : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=10){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1  : menu[i]="Kipas Angin Kecil\t"; harga[i]=800000; break;
		    		case 2  : menu[i]="Kipas Angin Besar\t"; harga[i]=1000000; break;
		    		case 3  : menu[i]="Televisi\t\t"; harga[i]=2500000; break;
		    		case 4  : menu[i]="AC\t\t\t"; harga[i]=3000000; break;
		    		case 5  : menu[i]="Setrika\t\t\t"; harga[i]=150000 ; break;
		    		case 6  : menu[i]="Lampu LED\t\t"; harga[i]=100000; break;
		    		case 7  : menu[i]="CCTV\t\t\t"; harga[i]=1250000; break;
		    		case 8  : menu[i]="Lampu Biasa\t\t"; harga[i]=75000; break;
		    		case 9  : menu[i]="Lampu Bohlam\t\t"; harga[i]=50000; break;
		    		case 10 : menu[i]="Salon\t\t\t"; harga[i]=2000000; break;
		    		default : menu[i]="" ;harga[i]=0;
				}
				
				cout<<"Jumlah barang "<<menu[i]<<" : ";
		    	cin >> jumlah[i];
		    	cout << endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN ELEKTRONIK"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	  Nama Menu    			Harga	     Jumlah           Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0 ; a<i ;a++){
		   cout<<a+1<<"\t"<<menu[a]<<"\t"<<harga[a]<<"\t\t"<<jumlah[a]<<"\t\t"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;

	return 0;
}
