// memasukan library
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;
/* membuat linked list */
struct Node
{
 string cari,nama,NamaDosen,ubah,nim,mk;
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
void Tambahdepan3B()
{
    Node *awal;
    awal = new Node;
    cout<<"\nMasukkan Data KRS di bawah ini : " << endl;
	cout<<"Masukan Nama Dosen PA   : "; cin.ignore(1, '\n'); getline(cin, awal->NamaDosen);
	cout<<"Masukan Nama Mahasiswa  : "; getline(cin,awal->nama);
	cout<<"Masukan Nim Mahasiswa   : "; cin>>awal->nim;
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
void Tambahtengah3B()
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
        cout<<"Masukan Nama Dosen PA     : "; cin.ignore(1, '\n'); getline(cin, baru->NamaDosen);
     	cout<<"Masukan Nama Mahasiswa    : "; getline(cin,baru->nama);
     	cout<<"Masukan Nim Mahasiswa     : "; cin>>baru->nim;
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
void Tambahbelakang3B()
{
	Node *akhir;
	akhir = new Node;
	cout<<"Masukkan Data KRS di bawah ini \n";
	cout<<"Masukan Nama Dosen PA     : "; cin.ignore(1, '\n'); getline(cin, akhir->NamaDosen);
	cout<<"Masukan Nama Mahasiswa    : "; getline(cin,akhir->nama);
	cout<<"Masukan Nim Mahasiswa     : "; cin>>akhir->nim;
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
void Hapusdepan3B()
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
void hapustengah3B()
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
	cout<<" Data Nama Dosen " << hapus->nama <<" telah dihapus\n";
	delete hapus;
}

//fungsi untuk menghapus dari belakang node
void Hapusbelakang3B()
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
void cetak3B()
{
  int no = 1;
  Node *bantu;
  bantu = head;
  if (head==NULL)
 {
  cout<<" Data Kosong ";
 }
  else
  cout<<"\n========================================================================================================================\n";
  cout<<"||\tNo\t||\t\tNim\t\t||\t\tNama Mahasiswa\t\t||\tNama Dosen PA\t\n";
  cout<<"========================================================================================================================\n";
 {
  while(bantu !=NULL)
 {
  cout<<"||\t"<<no<<"\t||\t\t";
  cout << bantu->nim<<"\t\t||\t\t";;
  cout << bantu->nama<<"\t\t\t||\t\t";
  cout << bantu->NamaDosen<<"\t\t||\n";
  no++;
  bantu = bantu->next;
  }
}
}

// Fungsi menghapus semua data
void clear3B()
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
void cari3B()
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
    cout<<"\nMenemukan Data Yang Dicari :\n\n";
	{
		while(bantu!=NULL)
	{
	if(bantu->NamaDosen==cari || bantu->nama==cari)
	{
        cout<<"====================================================================================================\n";
        cout<<"||\tNo\t||\t\tNim\t\t||\t\tNama\t\t||\n";
        cout<<"====================================================================================================\n";
        cout<<"||\t\t||\t\t";
        cout << bantu->nim <<"\t\t||\t\t";
        cout << bantu->nama <<"\t\t||\n";
        cout<<"====================================================================================================\n";
		cout<<"\n";
	}
	bantu=bantu->next;
	}
}
getch();
}

void edit3B()
{
        string mk;
        Node *bantu;
        bantu = head;
        cout <<"Cari Mata Kuliah : ";fflush(stdin);getline(cin,mk);
        if(head == NULL)
          cout<<"Data tidak ditemukan "<<endl;
        else
        {
        while (bantu->NamaDosen!=mk)
        {
        bantu = bantu ->next;
        }
        cout<<"Data ditemukan :\n"<<endl;
        cout<<"========================================================================================================================\n";
        cout<<"||\tNo\t||\t\tNim\t\t||\t\tNama\t\t||\tNama Dosen PA\t\n";
        cout<<"========================================================================================================================\n";
        cout<<"||\t\t||\t\t";
        cout<< bantu->nim<<"\t\t||\t\t";;
        cout<< bantu->nama <<"\t\t||\t\t";
        cout<< bantu->NamaDosen <<"\t\t||\n";
         cout<<"========================================================================================================================\n";
		cout<<"\nEdit data"<<endl;
		cout<<"Nim              : "; fflush(stdin);getline(cin,bantu->nama);
        cout<<"Nama Mahasiswa   : "; fflush(stdin);getline(cin,bantu->nama);
        cout<<"\nNama Dosen     : "; fflush(stdin);getline(cin,bantu->NamaDosen);
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
case 1 : Tambahdepan3B();
         getch();
         break;

case 2 : Tambahtengah3B();
         getch();
         break;

case 3 : Tambahbelakang3B();
         getch();
         break;

case 4 : Hapusdepan3B();
         getch();
         break;

case 5 : hapustengah3B();
         getch();
         break;

case 6 : Hapusbelakang3B();
         getch();
         break;

case 7 : cetak3B();
         getch();
         break;

case 8 : clear3B();
         getch();
         break;

case 9 : cari3B();
         getch();
         break;

case 10: edit3B();
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
