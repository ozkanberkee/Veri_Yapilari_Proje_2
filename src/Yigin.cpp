/**
* @file yigin_cpp 
* @description  yiğin sınıfı olusturma
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "Yigin.hpp"
#include <iostream>
#include <iomanip>

Yigin::Yigin(int boyut)
{
    this->boyut = boyut;
    veriler = new int[boyut]; // Yığın elemanları için bellek tahsisi
    tepe = -1;
    for (int i = 0; i < boyut; i++)
    {
        veriler[i] = 0; // Veya başka bir değerle başlatabilirsiniz, burada 0 ile başlattık.
    }
}

Yigin::Yigin()
{
    boyut = 100; // Örnek olarak 100 olarak sabitlenmiştir, istediğiniz boyuta değiştirebilirsiniz.
    veriler = new int[boyut]; // Yığın elemanları için bellek tahsisi
    tepe = -1;
    for (int i = 0; i < boyut; i++)
    {
        veriler[i] = 0; // Veya başka bir değerle başlatabilirsiniz, burada 0 ile başlattık.
    }
}

Yigin::Yigin(const Yigin& other)
{
    boyut = other.boyut;
    veriler = new int[boyut];
    tepe = other.tepe;
    for (int i = 0; i <= tepe; i++)
    {
        veriler[i] = other.veriler[i];
    }
}

Yigin::~Yigin()
{
    delete[] veriler; // Bellek tahsisini serbest bırak
}

bool Yigin::bosmu()
{
    return tepe == -1;
}

bool Yigin::dolumu()
{
    return tepe == boyut - 1;
}
void Yigin::ekle(int veri)
{
    if (tepe < boyut - 1)
    {
        tepe++;
        veriler[tepe] = veri;
    }
    else
    {
        int yeniBoyut = boyut * 2; // Yığıt boyutunu iki katına çıkarabilirsiniz
        int* yeniVeriler = new int[yeniBoyut];

        // Eski verileri yeni boyuta taşıma
        for (int i = 0; i < boyut; i++)
        {
            yeniVeriler[i] = veriler[i];
        }
        delete[] veriler;
        veriler = yeniVeriler;
        boyut = yeniBoyut;
        tepe++;
        veriler[tepe] = veri;
    }
}

int Yigin::cikar()
{
    if (tepe != -1)
    {
        int veri = veriler[tepe];
        tepe--;
        return veri;
    }
    throw std::out_of_range("Yigin Bos");
}

int Yigin::getir()
{
    if (tepe != -1)
        return veriler[tepe];
    throw std::out_of_range("Yigin Bos");
}

std::ostream& operator<<(std::ostream& os, Yigin& yigin)
{
    os << std::setw(5) << "---->";
    for (int i = 0; i <= yigin.tepe; i++)
    {
        os << yigin.veriler[yigin.tepe - i] << std::endl;
        os << std::setw(5) << "    ";
    }
    os << std::endl;
    return os;
}
