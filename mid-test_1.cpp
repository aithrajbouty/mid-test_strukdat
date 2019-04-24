/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   : single linked list
Tahun       : 2019
*/
#include <iostream>
using namespace std;

struct lalala{
   char nama[15];
   char menu[20];
   int jumlah;
   int harga;
   lalala* next;
};
typedef lalala* pointer;
typedef pointer List;

void createList(List& First){
    First = NULL;
}

void createElmt(pointer& pBaru){
    pBaru = new lalala;
    cout << "Nama Pemesan : "; cin >> pBaru->nama;
    for(int i=0;i<5;i++){
        /*pBaru->menu[0] = 'Omlet Rendang';
        pBaru->menu[1] = 'Nasi Gila';
        pBaru->menu[2] = 'Chicken Katsu';
        pBaru->menu[3] = 'Ayam Geprek';
        pBaru->menu[4] = 'Nasi Goreng';*/

        /*pBaru->harga[0] = 8000;
        pBaru->harga[1] = 10000;
        pBaru->harga[2] = 12000;
        pBaru->harga[3] = 10000;
        pBaru->harga[4] = 8000;*/

        cout << "Nama menu : "; cin >> pBaru->menu;
        pBaru->jumlah = 0;
        cout << "Jumlah : " << pBaru->jumlah << endl;
        cout << "Harga Satuan : "; cin >> pBaru->harga;
        cout << endl;
    }
    /*cout << "Nama menu : "; cin >> pBaru->menu;
    pBaru->jumlah = 0;
    cout << "Jumlah : " << pBaru->jumlah;
    cout << "Harga Satuan : "; cin >> pBaru->harga;*/
    pBaru->next = NULL;
}

void insertLast(List& First, pointer pBaru){
    pointer last;
    if(First==NULL){
        First=pBaru;
    }
    else{
        last=First;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=pBaru;
    }
}

void traversal(List First){
    pointer pBantu;
    pBantu = First;
    while (pBantu != NULL){
        cout << pBantu->nama << endl;
        cout << pBantu->menu << endl;
        cout << pBantu->jumlah << endl;
        cout << pBantu->harga << endl;
        pBantu = pBantu->next;
    }
}

void update(List First, pointer& pBaru, int n){
    pBaru = First;
    for (int i=0;i<n;i++){
        cout << "Jumlah : "; cin >> pBaru->jumlah;
    }
}

int main()
{
    pointer p;
    List l;
    int harga, n;
    string menu;

    createList(l);
    cout << "Jumlah pengunjung: "; cin >> n;
    for(int i=0;i<n;i++){
        createElmt(p);
        insertLast(l,p);
    }

    traversal(l);
    update(l,p,n);
    traversal(l);
}
