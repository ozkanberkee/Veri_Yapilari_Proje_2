/**
* @file main_CPP 
* @description main dosyası
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include <iostream>
#include <fstream>
#include "Dosya.hpp"
#include <windows.h>
#include "findHighestHeightBST.hpp"

int main()
{
    std::string fileName = "Sayilar.txt";

    Dosya dosya; // Dosya sınıfından bir nesne oluşturdum.
    dosya.processFile(fileName); // Oluşturduğum nesne üzerinden processFile fonksiyonunu çağırdım.

    return 0;
}
