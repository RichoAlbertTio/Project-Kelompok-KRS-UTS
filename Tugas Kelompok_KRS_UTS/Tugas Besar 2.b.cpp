// memasukan library
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;
/* membuat linked list */
struct Node
{
 string cari,nama,nim,ubah,mk;
 Node* next;
};
 Node* head;
 Node* tail;

// menginisialisasi head dan tail
void inisialisasi()
{
 head = NULL;
 tail = NULL;
}

// fungsi untuk menambahkan data dari depan Node
void TambahdepanB()
{
    Node *awal;
    awal = new Node;
    cout<<"\nMasukkan Data KRS di bawah ini : " << endl;
	cout<<"Masukan Nama Mahasiswa : "; cin.ignore(1, '\n'); getline(cin, awal->nama);
	cout<<"Masukan Nim Mahasiswa  : "; cin>>awal->nim;
	cout<<"Masukan Mata Kuliah    : "; cin.ignore(1, '\n'); getline(cin, awal->mk);
    awal->next = NULL;
    if(head==NULL)
    {
    head=tail=awal;
    tail->next=NULL;
    }else
    {
    awal->next = head;
    head=awal;
    }
    cout<<"data dimasukan!!\n";
}

// fungsi untuk menambahkan data dari tengah Node
void TambahtengahB()
{
    int posisi;
  	Node *baru, *masuk, *masuk2;
  	baru = new Node;
    if (head !=NULL)
    {
    	cout<<"Input pada data ke : "; cin>>posisi;
		baru->next=NULL;
    	masuk=head;
    	for (int i = 1 ; i < posisi-1; i++)
    	{
      		masuk=masuk->next;
    	}
    	cout<<"Masukkan Data KRS di bawah ini \n";
		cout<<"Masukan Nama Mahasiswa : "; cin.ignore(1, '\n'); getline(cin, baru->nama);
	    cout<<"Masukan Nim Mahasiswa  : "; cin>>baru->nim;
	    cout<<"Masukan Mata Kuliah    : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
		baru->next = NULL;
		masuk2=masuk->next;
		baru->next=masuk2;
		masuk->next=baru;
    }if (head !=NULL){
    cout<<"Data masuk\n";
    }else
	cout<<"Tidak dapat disisipkan";
	getch();
}

// fungsi untuk menambahkan data dari belakang Node
void TambahbelakangB()
{
	Node *akhir;
	akhir = new Node;
	cout << "\nMasukkan Data KRS di bawah ini : " << endl;
    cout<<"Masukan Nama Mahasiswa : "; cin.ignore(1, '\n'); getline(cin, akhir->nama);
    cout<<"Masukan Nim Mahasiswa  : "; cin>>akhir->nim;
    cout<<"Masukan Mata Kuliah    : "; cin.ignore(1, '\n'); getline(cin, akhir->mk);
	akhir->next = NULL;
	if(head==NULL)
	{
    head=tail=akhir;
    tail->next=NULL;
	}
	else
    {
	tail->next=akhir;
	tail=akhir;
	cout<<"data dimasukan!!\n";
    }
}

// fungsi untuk menghapus dari depan Node
void HapusdepanB()
{
	Node *hapus;
	if (head==NULL)
	{
    cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data depan terhapus!!";
    hapus=head;
    head=head->next;
    delete hapus;
	}
}

// fungsi untuk menghapus dari tengah node
void hapustengahB()
{
    int tempat;
	Node *hapus, *tolong, *tolong2;
	cout<<"Urutan data yang dihapus : ";
	cin>>tempat;
	tolong=head;

	for (int i = 1; i < tempat-1; i++)
	{
		tolong=tolong->next;
	}
	hapus=tolong->next;
	tolong2=hapus->next;
	tolong->next=hapus->next;
	cout<<"Mata Kuliah " << hapus->nama <<" telah dihapus\n";
	delete hapus;
}

//fungsi untuk menghapus dari belakang node
void HapusbelakangB()
{
	Node *akhir, *hapus;
  	akhir=head;
  	if (head==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else
	{
	cout <<"Data belakang terhapus!!";
    while(akhir)
    {
    if(akhir->next==tail){
    hapus=tail;
    tail=akhir;
    tail->next=NULL;
    delete hapus;
    break;
    }
    akhir=akhir->next;
    }
}
}

// Mencetak data
void cetakB()
{
  int no = 1;
  Node *bantu;
  bantu = head;
  if (head==NULL)
 {
  cout<<" Data Kosong ";
 }
  else
 {
    cout<<"==================================================================================================================\n";
 	cout<<"||\tNo\t||\t\tNim\t\t||\tNama Mahasiswa\t\t||\tMata Kuliah\t\t||\n";
  	cout<<"==================================================================================================================\n";
  while(bantu !=NULL)
 {
  cout<<"||\t"<<no<<"\t||\t";
  cout<<bantu->nim<<"\t\t||\t\t";
  cout<<bantu->nama<<"\t\t||\t\t";
  cout<<bantu->mk<<"\t\t||\n";
  cout<<"==================================================================================================================\n";
  no++;
  bantu = bantu->next;
  }
}
}

// Fungsi menghapus semua data
void clearB()
{
	Node *bantu=head;
	Node *hapus;
	if(head==NULL)
	{
		cout<<"Data Kosong\n";
	}
	else
    while(bantu!=NULL)
	{
	cout << "Semua Mata Kuliah Terhapus";
	hapus=bantu;
	bantu=bantu->next;
	delete hapus;
	}
	head=tail=NULL;
	getch();
}

// Fungsi cari data
void cariB()
{
    Node *bantu;
	bantu=head;
	string cari;
	cout<<"\nMata Kuliah Yang Dicari \t: ";cin.ignore(1, '\n'); getline(cin, cari);
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{
	if(bantu->mk==cari || bantu->nim==cari)
	{
		cout<<"\nMenemukan Data Yang Dicari :\n\n";
        cout<<"==========================================================================\n";
        cout<<"||\t\tNim\t\t\t||\tNama Mahasiswa\t\t||\n";
        cout<<"==========================================================================\n";
        cout<<"||\t\t";
        cout<<bantu->nim<<"\t\t||\t\t";
        cout<<bantu->nama<<"\t\t||\t\t\n";
        cout<<"==========================================================================\n";
		cout<<"\n";

	}
	bantu=bantu->next;
	}
}
getch();
}

void editB()
{
        string mk;
        Node *bantu;
        bantu = head;
        cout <<"Cari Mata Kuliah : ";fflush(stdin);getline(cin,mk);
        if(head == NULL)
          cout<<"Data tidak ditemukan "<<endl;
        else
        {
        while (bantu->mk!=mk)
        {
        bantu = bantu ->next;
        }
        cout<<"Data ditemukan:\n "<<endl;
        cout<<"==================================================================================================================\n";
 		cout<<"||\tNo\t||\t\tNim\t\t\t||\tNama Mahasiswa\t\t||\tMata Kuliah\t||\n";
  		cout<<"==================================================================================================================\n";
        cout<<"||\t\t||\t\t";
        cout<<bantu->nim<<"\t\t||\t\t";
        cout<<bantu->nama<<"\t\t||\t";
        cout<<bantu->mk<<"\t\t||\n";
        cout<<"==================================================================================================================\n";
		cout<<"\nEdit data"<<endl;
		cout<<"\nNama             : "; fflush(stdin);getline(cin,bantu->nama);
		cout<<"Nim              : "; fflush(stdin);getline(cin,bantu->nim);
        cout<<"Mata Kuliah      : "; fflush(stdin);getline(cin,bantu->mk);
        cout<<endl;
}
}

// program utama
int main(){
int pilih;
do
{
system("cls");
cout << "=================MENU UTAMA==================\n";
cout << "---------------------------------------------\n";
cout << "|   Pilih Menu Untuk Menambahkan Data KRS   |\n";
cout << "---------------------------------------------\n";
cout << "| 1. Tambah Data KRS Dari Awal              |\n";
cout << "| 2. Tambah Data KRS Dari Tengah            |\n";
cout << "| 3. Tambah Data KRS Dari Akhir             |\n";
cout << "| 4. Hapus Data KRS Dari Depan              |\n";
cout << "| 5. Hapus Data KRS Dari Tengah             |\n";
cout << "| 6. Hapus Data KRS Dari Akhir              |\n";
cout << "| 7. Cetak Semua Data KRS                   |\n";
cout << "| 8. Hapus Semua Data KRS                   |\n";
cout << "| 9. Cari data                              |\n";
cout << "| 10. Edit data                             |\n";
cout << "| 0. keluar                                 |\n";
cout << "---------------------------------------------\n";
cout << "PILIHAN ANDA  = ";
cin>>pilih;
switch(pilih){
case 1 : TambahdepanB();
         getch();
         break;

case 2 : TambahtengahB();
         getch();
         break;

case 3 : TambahbelakangB();
         getch();
         break;

case 4 : HapusdepanB();
         getch();
         break;

case 5 : hapustengahB();
         getch();
         break;

case 6 : HapusbelakangB();
         getch();
         break;

case 7 : cetakB();
         getch();
         break;

case 8 : clearB();
         getch();
         break;

case 9 : cariB();
         getch();
         break;

case 10: editB();
         getch();
         break;

case 0 : exit(true);
         break;
         default :
         cout<<"Menu tidak tersedia!"<<endl;
         cout << "Tekan Enter untuk kembali ke menu!";
         getch();
      }
      }while(pilih != 0);
    return 0;
}
