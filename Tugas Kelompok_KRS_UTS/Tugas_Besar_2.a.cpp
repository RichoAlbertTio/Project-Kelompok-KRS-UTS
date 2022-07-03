// memasukan library
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;
/* membuat linked list */
struct Node
{
 string cari,nama,ubah,mk,sks,jml;
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

void TambahDepanA(){
	Node *awal;
    awal = new Node;
    cout<<"\nMasukkan Data KRS di bawah ini : " << endl;
	cout<<"Masukan Mata Kuliah    : "; cin.ignore(1, '\n'); getline(cin, awal->mk);
	cout<<"Masukan SKS 	       : "; cin>>awal->sks;
	cout<<"jumlah Mahasiswa       : "; cin>>awal->jml;
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
    getch();
}

// fungsi untuk menambahkan data dari tengah Node
void TambahTengahA()
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
    	cout<<"\nMasukkan Data KRS di bawah ini :\n";
		cout<<"Masukan Mata Kuliah    : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
        cout<<"Masukan SKS 	       : "; cin>>baru->sks;
        cout<<"jumlah Mahasiswa       : "; cin>>baru->jml;
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
void TambahBelakangA()
{
	Node *akhir;
	akhir = new Node;
	cout << "\nMasukkan Data Tengah KRS di bawah ini : " << endl;
	cout<<"Masukan Mata Kuliah    : "; cin.ignore(1, '\n'); getline(cin, akhir->mk);
    cout<<"Masukan SKS 	       : "; cin>>akhir->sks;
    cout<<"jumlah Mahasiswa       : "; cin>>akhir->jml;
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
    getch();
}

// fungsi untuk menghapus dari depan Node
void HapusdepanA()
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
void hapustengahA()
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
	cout<<"Mata Kuliah " << hapus->mk <<" telah dihapus\n";
	delete hapus;
}

//fungsi untuk menghapus dari belakang node
void HapusbelakangA()
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
void cetakA()
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
  cout<<"==================================================================================================\n";
  cout<<"||\tNO\t||\tNama Mata Kuliah\t||\tSKS\t||\tJumlah Mahasiswa\t||\n";
  cout<<"==================================================================================================\n";
  while(bantu !=NULL)
 {
    cout<<"||\t"<<no<<"\t||\t\t";
    cout<<bantu->mk<<"\t\t||\t";
    cout<<bantu->sks<<"\t||\t\t";
    cout<<bantu->jml<<"\t\t||\n";
    cout<<"==================================================================================================\n";
  no++;
  bantu = bantu->next;
  }
}
}

// Fungsi menghapus semua data
void clear()
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
void cariA()
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
	if(bantu->mk==cari || bantu->jml==cari)
	{
        cout<<"==================================================================================================\n";
        cout<<"||\tNO\t||\tNama Mata Kuliah\t||\tSKS\t||\tJumlah Mahasiswa\t||\n";
        cout<<"==================================================================================================\n";
        cout<<"||\t\t||\t\t";
        cout<<bantu->mk<<"\t\t||\t";
        cout<<bantu->sks<<"\t||\t\t";
        cout<<bantu->jml<<"\t\t||\n";
        cout<<"==================================================================================================\n";
		cout<<"\n";
	}
	bantu=bantu->next;
	}
}
getch();
}

void editA()
{
string mk;
Node *bantu;
bantu = head;
cout <<"Cari Mata kuliah : ";fflush(stdin);getline(cin,mk);
if(head == NULL)
  cout<<"Data tidak ditemukan "<<endl;
else
{
while (bantu->mk!=mk)
{
bantu = bantu ->next;
}
        cout<<"Data ditemukan "<<"\n\n";
        cout<<"==================================================================================================\n";
        cout<<"||\tNO\t||\tNama Mata Kuliah\t||\tSKS\t||\tJumlah Mahasiswa\t||\n";
        cout<<"==================================================================================================\n";
        cout<<"||\t\t||\t\t";
        cout<<bantu->mk<<"\t\t||\t";
        cout<<bantu->sks<<"\t||\t\t";
        cout<<bantu->jml<<"\t\t||\n";
        cout<<"==================================================================================================\n";
		cout<<"\nEdit Data"<<endl;
		cout<<"\nMata kuliah            : "; fflush(stdin);getline(cin,bantu->mk);
		cout<<"Sks                    : "; fflush(stdin);getline(cin,bantu->sks);
        cout<<"jumlah mahasiswa       : "; fflush(stdin);getline(cin,bantu->jml);
        cout<<endl;
}
}

int main(){
    int tanya1;
	do{
	system("cls");
	cout << "--------------------------------------------|\n";
	cout << "|          Matakul, SKS, Jumlah mhs         |\n";
	cout << "--------------------------------------------|\n";
	cout << "| 1. Tambah Data KRS Dari Awal              |\n";
	cout << "| 2. Tambah Data KRS Dari Tengah            |\n";
	cout << "| 3. Tambah Data KRS Dari Akhir             |\n";
	cout << "| 4. Hapus Data KRS Dari Depan              |\n";
	cout << "| 5. Hapus Data KRS Dari Tengah             |\n";
	cout << "| 6. Hapus Data KRS Dari Akhir              |\n";
	cout << "| 7. Cetak Semua Data KRS                   |\n";
	cout << "| 8. Hapus Semua Data KRS                   |\n";
	cout << "| 9. Cari data                              |\n";
	cout << "| 10.Edit data                              |\n";
	cout << "| 0. keluar                                 |\n";
	cout << "--------------------------------------------|\n";
	cout << "masukan pihan menu =";
	cin >> tanya1;
	switch(tanya1)
	{
		case 1: TambahDepanA();
                getch();
                break;

        case 2: TambahTengahA();
                getch();
                break;

        case 3 :TambahBelakangA();
                getch();
                break;

        case 4 : HapusdepanA();
                 getch();
                 break;

        case 5 : hapustengahA();
                 getch();
                 break;

        case 6 : HapusbelakangA();
                 getch();
                 break;

        case 7 : cetakA();
                 getch();
                 break;

        case 8 : clear();
                 getch();
                 break;

        case 9 : cariA();
                 getch();
                 break;

        case 10: editA();
                 getch();
                 break;

        case 0 : exit(true);
                 break;

        default :
                 cout<<"Menu tidak tersedia!"<<endl;
                 cout << "Tekan Enter untuk kembali ke menu!";
                 getch();
              }
              }while(tanya1 != 0);
            return 0;
        }
