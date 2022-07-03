#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

struct node{
    string matkul;
    string sks;
    string nim;
    string nama;
    string dosen;
    node *next;
};

int so, algo, sd, mn, kk, arsi, agama;
int dosen1, dosen2, dosen3;

node *head, *tail, *entry, curr;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(tail == NULL) return 1;
    else return 0;
}

void insertData(){
    int mk, dosen;
    entry = new node;
    cin.ignore(1, '\n');
    cout << "\nDosen PA       : ";fflush(stdin);cin>>dosen;
    cout << "Nama Mahasiswa : ";fflush(stdin);getline(cin,entry->nama);
    cout << "NIM            : ";fflush(stdin);getline(cin,entry->nim);
    cout << "Mata Kuliah    : ";fflush(stdin);cin>>mk;
    cout << "SKS            : ";fflush(stdin);getline(cin,entry->sks);
    switch(mk){
        case 1 :
            so++;
            entry->matkul="Sistem Operasi";
            break;
        case 2 :
            algo++;
            entry->matkul="Algoritma Dan Pemrograman II";
            break;
        case 3 :
            sd++;
            entry->matkul="Struktur Data";
            break;
        case 4 :
            mn++;
            entry->matkul="Metode Numerik";
            break;
        case 5:
            kk++;
            entry->matkul="Kalkulus II";
            break;
        case 6:
            arsi++;
            entry->matkul="Arsitektur Dan Organisasi Komputer";
            break;
        case 7:
            agama++;
            entry->matkul="Agama";
        default :
        break;
	}
	switch(dosen)
    {
    	case 1 :
            dosen1++;
            entry->dosen="Licantik, .S.KOM., M.KOM.";
            break;
        case 2 :
            dosen2++;
            entry->dosen="Agus S. Saragih, ST,. M.Eng";
            break;
        case 3:
            dosen3++;
            entry->dosen="Nahumi Nungrahaningsih, S.T., M.T., Ph.D";
        default :
        break;
	}
	entry->next = NULL;
    if(head==NULL)
    {
        head = entry;
        tail = head;
    }
    else
    {
        head->next = entry;
    }
}

void carimk(){
    node *bantu;
	bantu=head;
	int i=1;
	string cari;
	cout<<"\nMata Kuliah : ";cin.ignore(1, '\n'); getline(cin, cari);
	if(head==NULL){
		cout<<"Data Kosong";
    }
	else{
        cout << "\nDaftar Mahasiswa Yang Mengambil Mata Kuliah "<<cari<<":\n";
        cout << "\n=============================================\n";
        cout << "| NO |      NIM      |         Nama         |\n";
        cout << "=============================================\n";
		while(bantu!=NULL){
            if(bantu->nama==cari || bantu->matkul==cari){
                while(bantu!=NULL){
                cout << "|"<<setiosflags(ios::left)<<setw(4)<<i<<"|";
                cout << ""<<setiosflags(ios::left)<<setw(15)<<bantu->nim<<"|";
                cout << ""<<setiosflags(ios::left)<<setw(22)<<bantu->nama<<"|";
                cout << "\n=============================================\n";
                i++;
                bantu=bantu->next;
                }
            }
        }
    }
}

void caridpa(){
    node *bantu;
	bantu=head;
	string cari;
	int i=1;
	cout<<"\n Dosen PA : ";cin.ignore(1, '\n'); getline(cin, cari);
	if(head==NULL){
		cout<<"Data Kosong";
	}
	else{
        cout << "\nDaftar Mahasiswa Dengan Dosen Pembimbing Akademik "<<cari<<":\n";
        cout << "\n=============================================\n";
        cout << "| NO |      NIM      |         Nama         |\n";
        cout << "=============================================\n";
		while(bantu!=NULL){
            if(bantu->nama==cari || bantu->dosen==cari){
                while(bantu!=NULL){
                cout << "|"<<setiosflags(ios::left)<<setw(4)<<i<<"|";
                cout << ""<<setiosflags(ios::left)<<setw(15)<<bantu->nim<<"|";
                cout << ""<<setiosflags(ios::left)<<setw(22)<<bantu->nama<<"|";
                cout << "\n=============================================\n";
                i++;
                bantu=bantu->next;
                }
            }
        }
    }
}

void edit(){
	string nim;
	node *curr = head;
    cout<<"Cari NIM : ";fflush(stdin);getline(cin,nim);
    if(head == NULL)
        cout<<"Data Tidak Ada";
    else{
	while(curr->nim!=nim){
        curr = curr->next;
	}
	cout<<"Data Ditemukan\n";
    cout<<"Nama        = "<<curr->nama<<endl;
	cout<<"NIM         = "<<curr->nim<<endl;
	cout<<"Mata Kuliah = "<<curr->matkul<<endl;
	cout<<"SKS         = "<<curr->sks<<endl;
	cout<<"\nEdit Data\n";
    cout<<"Nama        = ";fflush(stdin);getline(cin,curr->nama);
	cout<<"NIM         = ";fflush(stdin);getline(cin,curr->nim);
	cout<<"Mata Kuliah = ";fflush(stdin);getline(cin,curr->matkul);
	cout<<"SKS         = ";cin>>curr->sks;
	cout<<"\n";
	}
}

void jumlahMK(){
    cout << "\n==============================================================\n";
    cout << "| NO |            Mata Kuliah           |SKS|Jumlah Mahasiswa|\n";
    cout << "==============================================================\n";
    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"1"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Sistem Operasi"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<so<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"2"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Algoritma Dan Pemrograman II"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<algo<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Struktur Data"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<sd<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"4"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Metode Numerik"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"2"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<mn<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"5"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Kalkulus II"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<kk<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"6"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Arsitektur Dan Organisasi Komputer"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<arsi<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"7"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Agama"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<agama<<"|";
    cout << "\n==============================================================\n";
}

void jumlahPA(){
    cout << "\n================================================================\n";
    cout << "| NO |              Nama Dosen PA             |Jumlah Mahasiswa|\n";
    cout << "================================================================\n";
    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"1"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(40)<<"Licantik, .S.KOM., M.KOM."<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<dosen1<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"2"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(40)<<"Agus S. Saragih, ST,. M.Eng"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<dosen2<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(40)<<"Nahumi Nungrahaningsih, S.T., M.T., Ph.D"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(16)<<dosen3<<"|";
    cout << "\n================================================================\n";
}

void krs(){
    node *curr;
    curr = head;
    cout << "\n";
    if(isEmpty()==0){
    cout << "\n=============================================\n";
    cout << "|    KRS (Kartu Rencana Studi) MAHASISWA    |\n";
    cout << "|         UNIVERSITAS PALANGKA RAYA         |\n";
    cout << "=============================================\n";
    cout << "Nama Mahsiswa : "<<curr->nama<<"\t\t\t    |\n";
    cout << "NIM           : "<<curr->nim<<"\t\t\t    |\n";
    cout << "=============================================\n";
    cout << "| NO |            Mata Kuliah           |SKS|\n";
    cout << "=============================================\n";
    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"1"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Sistem Operasi"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"2"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Algoritma Dan Pemrograman II"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Struktur Data"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"4"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Metode Numerik"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"2"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"5"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Kalkulus II"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"6"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Arsitektur Dan Organisasi Komputer"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"7"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Agama"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << "\n============================================\n";
    curr = curr->next;
    }
}

void mataKuliah(){
    cout << "\n==============================================\n";
    cout << "| NO |           Mata Kuliah             |SKS|\n";
    cout << "==============================================\n";
    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"1"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Sistem Operasi"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"2"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Algoritma Dan Pemrograman II"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"3"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Struktur Data"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"4"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Metode Numerik"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"2"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"5"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Kalkulus II"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"6"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Arsitektur Dan Organisasi Komputer"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|\n";

    cout << "|"<<setiosflags(ios::left)<<setw(4)<<"7"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(34)<<"Agama"<<"|";
    cout << ""<<setiosflags(ios::left)<<setw(3)<<"3"<<"|";
    cout << "\n=============================================\n";
}

void dosenPA(){
        cout << "\n===============================================\n";
        cout << "| NO |             Nama Dosen PA              |\n";
        cout << "===============================================\n";
        cout << "|"<<setiosflags(ios::left)<<setw(4)<<"1"<<"|";
        cout << ""<<setiosflags(ios::left)<<setw(40)<<"Licantik, .S.KOM., M.KOM."<<"|";
        cout << "\n|"<<setiosflags(ios::left)<<setw(4)<<"2"<<"|";
        cout << ""<<setiosflags(ios::left)<<setw(40)<<"Agus S. Saragih, ST,. M.Eng"<<"|";
        cout << "\n|"<<setiosflags(ios::left)<<setw(4)<<"3"<<"|";
        cout << ""<<setiosflags(ios::left)<<setw(40)<<"Nahumi Nungrahaningsih, S.T., M.T., Ph.D"<<"|";
        cout << "\n===============================================\n";
}

void menu(){
    int pil;
    char repeat;
    do{
        system("cls");
        cout << "\n=========================================\n";
        cout << "|\t\tMENU KRS\t\t|\n";
        cout << "=========================================\n";
        cout << "|[1] Insert Data                        |\n";
        cout << "|[2] Edit Data                          |\n";
        cout << "|[3] KRS                                |\n";
        cout << "|[4] Jumlah Mahasiswa [Mata Kuliah]     |\n";
        cout << "|[5] Daftar Mahasiswa [Mata Kuliah]     |\n";
        cout << "|[6] Jumlah Mahasiswa [Dosen PA]        |\n";
        cout << "|[7] Daftar Mahasiswa [Dosen PA]        |\n";
        cout << "|[0] EXIT                               |\n";
        cout << "=========================================\n";
        cout << "Masukkan Pilihan : ";cin >> pil;
        switch(pil){
            case 1:
                system("cls");
                cout<<"Masukan Dosen Pembimbing Akademik dan Mata Kuliah Sesuai Dengan Key Yang Tersedia\n";
                dosenPA();
                mataKuliah();
                insertData();
                menu();
                break;
            case 2:
                system("cls");
                edit();
                break;
            case 3:
                system("cls");
                krs();
                break;
            case 4:
                system("cls");
                jumlahMK();
                break;
            case 5:
                system("cls");
                carimk();
                break;
            case 6:
                system("cls");
                jumlahPA();
                break;
            case 7:
                system("cls");
                caridpa();
                break;
            default:
                cout << "Masukkan Pilihan Ulang\n";
                break;
            case 0:
                exit(0);
                break;
        }
      cout<<"\nKembali ke menu [Y/N]? ";
      cin>>repeat;
      }while(repeat=='y' || repeat=='Y');
}

int main(){
    init();
    menu();
    return 0;
}

