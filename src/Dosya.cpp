/**
* @file Dosya_CPP 
* @description DOSYA İŞLEMLERİ
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "Dosya.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include "Yigin.hpp"
#include <windows.h>
#include "findHighestHeightBST.hpp"

void Dosya::processFile(const std::string& fileName) {
    using namespace std;
    ifstream file(fileName); // Dosyayı okuma modunda aç

    if (!file.is_open()) // Dosya başarıyla açılamazsa
    {
        cerr << "Hata: Dosya açılamadı." << endl;
        return;
    }

    string satir;
    int satirNum = 0; // Satır numarasını tutacak değişken
    while (getline(file, satir))
    {
        satirNum++;
        istringstream iss(satir);
        int rakam;
        int rakamSayisi = 0;
        while (iss >> rakam)
        {
            rakamSayisi++;
        }
        Yigin yigin(rakamSayisi);
        istringstream iss2(satir);
        while (iss2 >> rakam)
        {
            yigin.ekle(rakam); // Yığına elemanları ekliyoruz
        }
        findHighestHeightBST finder; // findHighestHeightBST sınıfından bir nesne oluşturuyoruz

        BST highestHeightBST = finder.findHighestHeightBSTs(satir);

        highestHeightBST.printPostorder();
        cout << endl;
        Sleep(10);
    }

    file.close(); // Dosyayı okuduktan sonra kapat
}
