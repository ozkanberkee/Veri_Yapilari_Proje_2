/**
* @file yigin_hpp 
* @description  yiğin sınıfı olusturma
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#ifndef YIGIN_HPP
#define YIGIN_HPP

#include <iostream>

class Yigin {
private:
    
public:
	int* veriler; // Yığındaki elemanları tutacak dinamik dizi
    int tepe; // Yığının üstündeki elemanın dizideki indisini tutacak değişken
    int boyut; // Yığının boyutunu tutacak değişken

    Yigin(); // Yığın yapıcı fonksiyonu
    Yigin(int boyut); // Yığın yapıcı fonksiyonu
    Yigin(const Yigin& other); // Kopyalama yapıcı fonksiyonu
    ~Yigin(); // Yığın yıkıcı fonksiyonu
    bool bosmu(); // Yığının boş olup olmadığını kontrol eden fonksiyon
    bool dolumu(); // Yığının dolu olup olmadığını kontrol eden fonksiyon
    void ekle(int veri); // Yığına eleman ekleyen fonksiyon
    int cikar(); // Yığından eleman çıkaran fonksiyon
    int getir(); // Yığının üstündeki elemanı döndüren fonksiyon
    friend std::ostream& operator<<(std::ostream& os, const Yigin& yigin); // Yığındaki elemanları yazdıran operatör aşırı yüklemesi
};

#endif // YIGIN_HPP
