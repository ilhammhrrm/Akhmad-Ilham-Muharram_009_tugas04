//TUGAS : Dari kedua program di atas buatlah ke dalam menu pilihan dengan perintah goto sebagai loncatannya atau perintah untuk kembali ke menu pilihan.
/* TUGAS
	Buat program untuk mencari total penjualan dari n jenis barang, dan pemberian diskon penjualan, dengan ketentuan, pembelian diatas 500 ribu mendapat diskon 10%,
	pembelian diatas 200 ribu sampai dengan 500 ribu mendapat diskon 5%, pembelian 200 ribu kebawah tidak mendapat diskon.*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    awal:
	system("cls");
	int jml_brg, pil;
    long int harga[10], jml[10];
    float total, bayar, diskon;
    char yn;

	cout<<" ====================================="<<endl;
	cout<<"|\t    MENU PENJUALAN\t      |"<<endl;
	cout<<" ====================================="<<endl;
	cout<<"| 1. Daftar Member\t\t      |"<<endl;
	cout<<"| 2. Pembayaran\t\t\t      |"<<endl;
	cout<<"| 3. Keluar\t\t\t      |"<<endl;
	cout<<" ====================================="<<endl;
	cout<<" Masukkan Pilihan: "; cin>>pil;

	switch (pil)
	{
	case 1:
		system("cls");
			cout<<"--Coming Soon--"<<endl;
		getch();
		goto awal;

	case 2:
		system("cls");
    		cout<<"--------------------------------------"<<endl;
    cout<<"|        Total Penjualan Barang      |"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<" Jumlah barang: ";cin>>jml_brg;
            for(int i=0; i<jml_brg; i++){
                cout<<"--------------------------------------"<<endl;
                cout<<"Harga    : "; cin>>harga[i];
                cout<<"jumlah   : "; cin>>jml[i];
                cout<<endl;
                total+=harga[i]*jml[i];
            }

                if(total>=500000){
                    diskon=0.10*total;
                    bayar=total-diskon;
                        cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jumlah belanja     : "<<total<<endl;
                        cout<<"Diskon             : "<<diskon<<endl;
                        cout<<"Yang harus dibayar : "<<bayar<<endl;
                        cout<<"--------------------------------------"<<endl;
                }else if(total>=200000 && total<=500000){
                	diskon=0.05*total;
                	bayar=total-diskon;
                        cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jumlah belanja     : "<<total<<endl;
                        cout<<"Diskon             : "<<diskon<<endl;
                        cout<<"Yang harus dibayar : "<<bayar<<endl;
                        cout<<"--------------------------------------"<<endl;
                }else{
                	bayar=total;
                	    cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jumlah belanja     : "<<total<<endl;
                        cout<<"Diskon             : -"<<endl;
                        cout<<"Yang harus dibayar : "<<bayar<<endl;
                        cout<<"--------------------------------------"<<endl;
				}
		getch();
		goto awal;

	case 3:
		system("cls");
		goto exit;

	default: cout<<"\n Maaf pilihan yang anda masukkan salah"<<endl;
		getch();
		goto awal;
	}


	exit:
	cout<<" Apakah anda yakin ingin keluar <y/n> : "; cin>>yn;
	if (yn=='y' || yn=='Y'){
		cout<<" Terima kasih sudah menggunakan"<<endl;
	}else if (yn=='n' || yn=='N'){
		goto awal;
	}


	getch();
}
