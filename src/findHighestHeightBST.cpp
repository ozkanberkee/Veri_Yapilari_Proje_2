/**
* @file findHighestHeightBST_CPP 
* @description en yükseği bulma
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "Dosya.hpp"
#include "Yigin.hpp"
#include <sstream>
#include "findHighestHeightBST.hpp"
BST findHighestHeightBST::findHighestHeightBSTs(const std::string& satir) {

    std::istringstream iss(satir);
    int deger;
    Yigin gecerliYigin;
    BST highestHeightBST; // En yüksek yükseklikteki BST'yi saklayacak değişken
    int highestHeight = -1; // En yüksek yükseklik
    int highestSum = -1; // En yüksek toplam
    int currentSum = 0; // Şu anki toplam değer
    while (iss >> deger) // Her satırdaki sayıları tek tek oku
    {
        if (deger % 2 == 0 && (gecerliYigin.bosmu() || deger > gecerliYigin.getir()))
        {
        
            if (!gecerliYigin.bosmu())
            {
                // Oluşturulan yığın için BST oluştur ve yüksekliği kontrol et
                BST tempBST;
                int sum = 0; // Düğüm değerlerinin toplamını tutmak için değişken
                while (!gecerliYigin.bosmu()) {
                    int value = gecerliYigin.cikar();
                    tempBST.insert(value);
                    sum += value;
                }
                int currentHeight = tempBST.height();

                if (currentHeight > highestHeight || (currentHeight == highestHeight && sum > highestSum) || (currentHeight == highestHeight && sum == highestSum && currentSum < highestSum)) {
                    highestHeight = currentHeight;
                    highestSum = sum;
                    highestHeightBST = tempBST;
                }
            }
            gecerliYigin = Yigin();
        }
        gecerliYigin.ekle(deger); 
        currentSum += deger; 
    }
    BST tempBST;
    int sum = 0; // Düğüm değerlerinin toplamını tutmak için değişken
    while (!gecerliYigin.bosmu()) {
        int value = gecerliYigin.cikar();
        tempBST.insert(value);
        sum += value;
    }
    int currentHeight = tempBST.height();
    if (currentHeight > highestHeight || (currentHeight == highestHeight && sum > highestSum) || (currentHeight == highestHeight && sum == highestSum && currentSum < highestSum)) {
        highestHeight = currentHeight;
        highestSum = sum;
        highestHeightBST = tempBST;
    }
    return highestHeightBST;
}