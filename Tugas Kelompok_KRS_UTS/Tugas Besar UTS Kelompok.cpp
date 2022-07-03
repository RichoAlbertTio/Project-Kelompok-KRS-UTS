#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>
using namespace std;

struct Node
{
	string nama;
	string nim;
    string mk;
	string sks;
	string dpa;
	string kmk;
	string jum;
	string jum1;
	string jum2;
	string matkul;
	string sksmk;
	string dosenpa;
	string kelas;
    Node* next;
    Node* next1;
    Node* next2;
};

Node* head;
Node* tail;

void inisialisasi()
{
      head = NULL;
      tail = NULL;
}

void tambahmk()
{
    Node *baru;
    baru = new Node;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
    cout<<"|                        Tambah MATA KULIAH                      |"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~=================~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA               |"<<endl;
    cout<<"|                         FAKULTAS TEKNIK                        |"<<endl;
    cout<<"|                   UNIVERSITAS PALANGKA RAYA                    |"<<endl;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
	cout<<" Nama Mata Kuliah : "; cin.ignore(1, '\n'); getline(cin, baru->matkul);
	cout<<" SKS              : "; cin>>baru->sksmk;
	cout<<" Jumlah Mahasiswa : "; cin>>baru->jum;
	baru->next = NULL;
    if(head==NULL)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
	cout<<" Data Terinput\n ";
}

void carimk()
{
    Node *bantu;
	bantu=head;
	string cari;	
	cout<<" \n Mata Kuliah : ";cin.ignore(1, '\n'); getline(cin, cari);
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{
	if(bantu->nama==cari || bantu->mk==cari)
	{
        cout << "\n Nama       : " << bantu->nama <<endl;
        cout << " NIM        : " << bantu->nim <<endl;
		cout<<"\n";
	}
	bantu=bantu->next;
	}
	}
}

void tampilmk()
{
    cout<<" _________________________________"<<endl;
    cout<<"|         Data Mata Kuliah        |"<<endl;
    cout<<"|_________________________________|"<<endl;
    cout<<"|         FAKULTAS TEKNIK         |"<<endl;
    cout<<"|    UNIVERSITAS PALANGKA RAYA    |"<<endl;
    cout<<"|_________________________________|"<<endl;  
   cout << "\n^=================================^\n";
    Node *bantu;
	bantu=head;
	string cari;
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{	
	if(bantu->mk==cari)
	{
    	cout << " \n Nama Mata Kuliah    : " << bantu->matkul << endl;
   		cout << " SKS                 : " << bantu->sksmk << endl;    	
    	cout << " Jumlah Mahasiswa    : " << bantu->jum << endl;
   		cout << "====================================";
	}
	bantu=bantu->next;
}
	carimk(); 
}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tambahdpa()
{
    Node *baru;
    baru = new Node;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
    cout<<"|                      Tambah Nama Dosen PA                      |"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~=================~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA               |"<<endl;
    cout<<"|                         FAKULTAS TEKNIK                        |"<<endl;
    cout<<"|                   UNIVERSITAS PALANGKA RAYA                    |"<<endl;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
	cout<<" Nama Dosen PA    : "; cin.ignore(1, '\n'); getline(cin, baru->dosenpa);
	cout<<" Jumlah Mahasiswa : "; cin>>baru->jum1;
	baru->next = NULL;
    if(head==NULL)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
	cout<<" Data Terinput\n ";
}

void caridpa()
{
    Node *bantu;
	bantu=head;
	string cari;	
	cout<<"\n Dosen PA  : ";cin.ignore(1, '\n'); getline(cin, cari);
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{
	if(bantu->nama==cari || bantu->dpa==cari)
	{
        cout << "\n Nama      : " << bantu->nama <<endl;
        cout << " NIM       : " << bantu->nim <<endl;
		cout<<"\n";
	}
	bantu=bantu->next;
	}
	}
}

void tampildpa()
{
    cout<<" _________________________________"<<endl;
    cout<<"|          Data Dosen PA          |"<<endl;
    cout<<"|_________________________________|"<<endl;
    cout<<"|         FAKULTAS TEKNIK         |"<<endl;
    cout<<"|    UNIVERSITAS PALANGKA RAYA    |"<<endl;
    cout<<"|_________________________________|"<<endl;  
   cout << "\n^=================================^\n";
    Node *bantu;
	bantu=head;
	string cari;
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{	
	if(bantu->dpa==cari)
	{
    	cout << " \n Nama Dosen PA       : " << bantu->dosenpa << endl;    	
    	cout << " Jumlah Mahasiswa    : " << bantu->jum1 << endl;
   		cout << "====================================";
	}
	bantu=bantu->next;
}
	caridpa(); 
}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tambahkls()
{
    Node *baru;
    baru = new Node;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
    cout<<"|                         Tambah Kelas                           |"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~=================~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA               |"<<endl;
    cout<<"|                         FAKULTAS TEKNIK                        |"<<endl;
    cout<<"|                   UNIVERSITAS PALANGKA RAYA                    |"<<endl;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
	cout<<" Kelas Mata Kuliah : "; cin.ignore(1, '\n'); getline(cin, baru->kelas);
	cout<<" Jumlah Mahasiswa  : "; cin>>baru->jum2;
	baru->next = NULL;
    if(head==NULL)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
	cout<<" Data Terinput\n ";
}

void carikls()
{
    Node *bantu;
	bantu=head;
	string cari;
    cout<<"\n"<<endl;	
	cout<<"\n Kelas Mata Kuliah   : ";cin.ignore(1, '\n'); getline(cin, cari);
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{
	if(bantu->nama==cari || bantu->kmk==cari)
	{
        cout << "\n Nama      : " << bantu->nama <<endl;
        cout << " NIM       : " << bantu->nim <<endl;
		cout<<"\n";
	}
	bantu=bantu->next;
	}
	}
}

void tampilkls()
{
    cout<<" _________________________________"<<endl;
    cout<<"|       Data Kelas Mahasiswa      |"<<endl;
    cout<<"|_________________________________|"<<endl;
    cout<<"|         FAKULTAS TEKNIK         |"<<endl;
    cout<<"|    UNIVERSITAS PALANGKA RAYA    |"<<endl;
    cout<<"|_________________________________|"<<endl;  
   cout << "\n^=================================^\n";
    Node *bantu;
	bantu=head;
	string cari;
	if(head==NULL)
	{
		cout<<"Data Kosong";
	}
	else
	{
		while(bantu!=NULL)
	{	
	if(bantu->kmk==cari)
	{
    	cout << " \n Kelas Mata Kuliah   : " << bantu->kelas << endl;   	
    	cout << " Jumlah Mahasiswa    : " << bantu->jum2 << endl;
   		cout << "====================================";
	}
	bantu=bantu->next;
}
	carikls(); 
}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Tambahdepan()
{
    Node *baru;
    baru = new Node;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
    cout<<"|                        Tambah Data Depan                       |"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~=================~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA               |"<<endl;
    cout<<"|                         FAKULTAS TEKNIK                        |"<<endl;
    cout<<"|                   UNIVERSITAS PALANGKA RAYA                    |"<<endl;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
	cout<<" Nama               : "; cin.ignore(1, '\n'); getline(cin, baru->nama);
	cout<<" NIM                : "; cin>>baru->nim;
	cout<<" Mata Kuliah        : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
	cout<<" SKS                : "; cin>>baru->sks;		
	cout<<" Kelas Mata Kuliah  : "; cin>>baru->kmk;		
	cout<<" Dosen PA           : "; cin.ignore(1, '\n'); getline(cin, baru->dpa);

	baru->next = NULL;
    if(head==NULL)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
	cout<<" Data Terinput\n ";
}

void Tambahtengah()
{
    int posisi;
  	Node *baru, *masuk, *masuk2;
  	baru = new Node;
	baru->next=NULL;
    cout<<"|==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++|"<<endl;
    cout<<"|                       Tambah Data Tengah                       |"<<endl;
    cout<<"|++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==|"<<endl;
    cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA               |"<<endl;
    cout<<"|                   UNIVERSITAS PALANGKA RAYA                    |"<<endl;
    cout<<"|==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++==++|"<<endl;	
    cout<<" Input pada data ke : "; cin>>posisi;
	baru->next=NULL;
    masuk=head;
    for (int i = 1 ; i < posisi-1; i++)
    {
    	masuk=masuk->next;
    }
	cout<<" Nama               : "; cin.ignore(1, '\n'); getline(cin, baru->nama);
	cout<<" NIM                : "; cin>>baru->nim;
	cout<<" Mata Kuliah        : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
	cout<<" SKS                : "; cin>>baru->sks;			
	cout<<" Kelas Mata Kuliah  : "; cin>>baru->kmk;		
	cout<<" Dosen PA           : "; cin.ignore(1, '\n'); getline(cin, baru->dpa);
	baru->next = NULL;
	masuk2=masuk->next;
	baru->next=masuk2;
	masuk->next=baru;
	cout<<" Data Terinput\n ";
}

void Tambahbelakang()
{
	Node *baru;
	baru = new Node;
	cout<<"|=+++===+++===+++===+++===+++===+++===+++===+++===+++===+++===++=|"<<endl;
    cout<<"|                       Tambah Data Belakang                     |"<<endl;
    cout<<"|==+++===+++===+++===+++===+++===+++===+++===+++===+++===+++===++|"<<endl;
    cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA               |"<<endl;
	cout<<"|                         FAKULTAS TEKNIK                        |"<<endl;
    cout<<"|                   UNIVERSITAS PALANGKA RAYA                    |"<<endl;
    cout<<"|==+++===+++===+++===+++===+++===+++===+++===+++===+++===+++===++|"<<endl;
	cout<<" Nama               : "; cin.ignore(1, '\n'); getline(cin, baru->nama);
	cout<<" NIM                : "; cin>>baru->nim;
	cout<<" Mata Kuliah        : "; cin.ignore(1, '\n'); getline(cin, baru->mk);
	cout<<" SKS                : "; cin>>baru->sks;			
	cout<<" Kelas Mata Kuliah  : "; cin>>baru->kmk;		
	cout<<" Dosen PA           : "; cin.ignore(1, '\n'); getline(cin, baru->dpa);

	baru->next = NULL;
	if(head==NULL)
	{
		head=baru;
	}
	else {
			tail->next=baru;
		 }
	tail=baru;
	tail->next=NULL;
	cout<<" Data Terinput\n ";
}

void Hapusdepan()
{
	Node *hapus;
	if (head==NULL)
	{
		cout<<" Data Kosong\n ";
	}
	else
	{
	cout <<" Data Depan Terhapus ";
		hapus=head;
		head=head->next;
		delete hapus;
	}
}

void hapustengah()
{
    int tempat;
	Node *hapus, *tolong, *tolong2;
	cout<<" Urutan data yang dihapus : ";
	cin>>tempat;
	tolong=head;

	for (int i = 1; i < tempat-1; i++)
	{
		tolong=tolong->next;
	}
	hapus=tolong->next;
	tolong2=hapus->next;
	tolong->next=hapus->next;
	cout<<" Mata Kuliah " << hapus->mk
	<<" telah dihapus\n ";
	delete hapus;
}

void Hapusbelakang()
{
	Node *blkng, *hapus;
  	blkng=head;
  	if (head==tail)
	{
		head=NULL;
		cout<<" Data Kosong\n ";
	}
	else
	{
	cout <<" Data Belakang Terhapus ";
	blkng=head;
       while(blkng)
	   {
        if(blkng->next==tail){
           hapus=tail;
           tail=blkng;
           tail->next=NULL;
        delete hapus;
        break;
             }
        blkng=blkng->next;
       }
	}
}

void edit()
{
	string nim;
	Node *curr;
	curr = head;
    cout<<" _____________________________________________________"<<endl;
    cout<<"|                      Edit Data KRS                  |"<<endl;
    cout<<"|_____________________________________________________|"<<endl;
    cout<<"|                     FAKULTAS TEKNIK                 |"<<endl;
    cout<<"|                UNIVERSITAS PALANGKA RAYA            |"<<endl;
    cout<<"|_____________________________________________________|"<<endl;  
   cout << "\n^=================================^\n";	
    cout<<"Cari NIM : ";fflush(stdin);getline(cin,nim);
    if(head == NULL)
        cout<<"Data Tidak Ada"<<endl;
    else{
	while(curr->nim!=nim){
        curr = curr->next;
	}
	cout<<"Data Ditemukan"<<endl;
    cout<<"\nNama                = "<<curr->nama<<endl;
	cout<<"NIM                 = "<<curr->nim<<endl;
	cout<<"Mata Kuliah         = "<<curr->mk<<endl;
	cout<<"SKS                 = "<<curr->sks<<endl;
	cout<<"Dosen PA            = "<<curr->dpa<<endl;
	cout<<"Kelas Mata Kuliah   = "<<curr->kmk<<endl;
	cout<<"\nEdit Data"<<endl;
	cout<<"\nNama                : "; fflush(stdin); getline(cin, curr->nama);
	cout<<"NIM                : "; cin>>curr->nim;
	cout<<"Mata Kuliah        : "; cin.ignore(1, '\n'); getline(cin, curr->mk);
	cout<<"SKS                : "; cin>>curr->sks;	
	cout<<"Dosen PA           : "; cin.ignore(1, '\n'); getline(cin, curr->dpa);
	cout<<"Kelas Mata Kuliah  : "; getline(cin, curr->kmk);
	cout<<endl;
	}
}


int main()
{
      int pilih;
      do
      {
      system("cls");
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<"|                         MENU UTAMA                         |"<<endl;
      cout<<"|              KRS (Kartu Rencana Studi) MAHASISWA           |"<<endl;
      cout<<"|                  UNIVERSITAS PALANGKA RAYA                 |"<<endl;
      cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
	  cout<<"|[0]  Keluar                                                 |"<<endl;        	    	  
      cout<<"|[1]  Tambah Awal                                            |"<<endl;
      cout<<"|[2]  Tambah Akhir                                           |"<<endl;
      cout<<"|[3]  Tambah Tengah                                          |"<<endl;
      cout<<"|[4]  Hapus Depan                                            |"<<endl;
      cout<<"|[5]  Hapus Tengah                                           |"<<endl;
      cout<<"|[6]  Hapus Akhir                                            |"<<endl;
      cout<<"|[7]  Edit                                                   |"<<endl;      
	  cout<<"|[8]  Tambah Mata Kuliah                                     |"<<endl;
	  cout<<"|[9]  Tampil Mata Kuliah                                     |"<<endl;	
	  cout<<"|[10] Tambah Dosen PA                                        |"<<endl;
	  cout<<"|[11] Tampil Dosen PA                                        |"<<endl;	      
	  cout<<"|[12] Tambah Kelas Mata Kuliah                               |"<<endl;
	  cout<<"|[13] Tampil Kelas Mata Kuliah                               |"<<endl;	
	  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<"\nMasukkan Pilihan : ";
      cin>>pilih;
      cout<<"________________________________"<<endl;
      cout<<"\n"<<endl;
      
      switch(pilih)
      {
      case 1 :
      		system ("cls");
            Tambahdepan();
            getch();
            break;
      case 2 :
      		system ("cls");
            Tambahbelakang();
            getch();
            break;
      case 3 :
      		system ("cls");
      		Tambahtengah();
            getch();
            break;
      case 4 :
      		system ("cls");
            Hapusdepan();
            getch();
            break;
      case 5 :
      		system ("cls");
            hapustengah();
            getch();
            break;
      case 6 :
      		system ("cls");
            Hapusbelakang();
            getch();
            break;
      case 7 :
      		system ("cls");
            edit();
            getch();
            break;            
      case 8 :
      		system ("cls");
            tambahmk();
            getch();
            break;
      case 9 :
      		system ("cls");
            tampilmk();
            getch();
            break;
      case 10 :
      		system ("cls");
        	tambahdpa();
            getch();
            break;
      case 11 :
      		system ("cls");
        	tampildpa();
            getch();
            break;   
      case 12 :
      		system ("cls");
        	tambahkls();
            getch();
            break; 	
      case 13 :
      		system ("cls");
        	tampilkls();
            getch();
            break; 							         
      case 0 :
      		cout<<"  ^_^ Terima Kasih ^_^ "; 
            exit(true);
            break;
      }
      }while(pilih != 0);
    return pilih;
}


