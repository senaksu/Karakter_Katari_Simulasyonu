# **Karakter Katarı Simülasyonu**

## **Proje Açıklaması**

Bu proje, kullanıcıların ekrandaki karakterler üzerinde çeşitli işlemler yapabileceği bir simülasyon uygulamasıdır. C++ dilinde geliştirilmiş bu uygulama, karakterleri ekranda görsel olarak temsil ederek etkileşimli bir deneyim sunar.

Uygulama, aşağıdaki özellikleri içerir:

- **Karakter Oluşturma:** Uygulama, rastgele harfler ve renklerle karakterler oluşturur. Harfler A'dan Z'ye kadar rastgele seçilirken, renkler 9'dan 15'e kadar olan renk seçeneklerinden rastgele belirlenir.
- **Karakter Ekleme ve Çıkarma:** Kullanıcı, ekranda mevcut karakterlerin sayısını artırabilir veya azaltabilir. Karakter sayısı sınırlarına ulaştığında ekleme işlemi engellenir ve boşaltma işlemi gerçekleştirilir.
- **Görsel Temsil:** Karakterler, ekranda belirli bir düzen içinde, renkli ve sınırlarla çevrili şekilde gösterilir. Bu görselleştirme, kullanıcıya karakterlerin durumunu kolayca görme imkanı sunar.

## **Sınıflar ve Fonksiyonlar**

- **Karakter Sınıfı:** 
  - **Üyeler:**
    - `harf`: Karakterin ASCII değerini tutar.
    - `renk`: Karakterin rengini belirler.
  - **Fonksiyonlar:**
    - **Karakter Yapıcı:** Karakterin harf ve rengini rastgele belirler.

- **Katar Sınıfı:**
  - **Üyeler:**
    - `karakterSayisi`: Katar içerisindeki karakter sayısını tutar.
    - `karakterler[50]`: Karakterleri tutan dizi.
  - **Fonksiyonlar:**
    - **numberOfCharacter()**: Katar içindeki mevcut karakter sayısını döndürür.
    - **karakterEkle()**: Katar içerisine yeni bir karakter ekler.
    - **karakterCikar()**: Katar içerisindeki son karakteri çıkarır.
    - **yazdir()**: Ekranda karakterleri ve sınırlarını görsel olarak temsil eder.

## **Kullanıcı Arayüzü**

Program çalıştırıldığında kullanıcıya üç ana işlem seçeneği sunulur:
1. **Karakter Ekle:** Ekranda yeni bir karakter ekler ve mevcut durumunu gösterir.
2. **Karakter Çıkar:** Ekrandaki son karakteri çıkarır ve güncel durumu gösterir.
3. **Programdan Çıkış:** Programı kapatır.

Her işlemden sonra ekranda karakterlerin mevcut durumu görsel olarak güncellenir. Bu görselleştirme, karakterlerin nasıl göründüğünü ve mevcut sayılarını anlamanıza yardımcı olur.

> **Not:**
> Bu proje, Windows ortamında çalışacak şekilde tasarlanmıştır ve `windows.h` kütüphanesini kullanmaktadır.

