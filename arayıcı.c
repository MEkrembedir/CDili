#include <stdio.h>

#include <stdio.h>

int main() {

    int aranacak_dizi[100];
    int aranan_bilgi;
    int bulunan_indisi = -1;
    int i;
    for(i=0; i<100; ++i){
        aranacak_dizi[i] = i * 3;
    //dizinin içini 3ün katları ile dolduruyor;
	}

    printf("Aranacak Sayiyi Giriniz :");
    scanf("%d", &aranan_bilgi);
// dizinin içinde aranması istenen giriliyor;


   for(i=0;i<100;++i){
   	if(aranacak_dizi[i]==aranan_bilgi){
   		printf("bulundu %d indiste",i);
   		bulunan_indisi=0;
	   }
   }
  //burada for içinde sırası ile dizi elemanları ile aranan bilgiyi karşılaştırıyor eğer bulursa if çalışıyor; 
  // bulunan_indisi 0 oluyor eğer hala -1 ise alttaki if çalışıyor ve bulamadığını söylüyor;   
   if(bulunan_indisi==-1){
   	printf("bulamadi");
   }


    return 0;
}
