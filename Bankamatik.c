#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int secim;
    int yatirilacakTutar;
    int cekilecekTutar;
    int gonderilenTutar;
    int bakiye=1000;
        printf("*****HO�GEND�N�Z BANKAMIZA*****\n");
    while(secim)
    {
        
        printf("------------------------------------------\n");
        printf("1-Bakiye Miktari\n");
        printf("2-Para Yatirma\n");
        printf("3-Para Cekme\n");
        printf("4-Para Transferi\n");
        printf("5-Fatura �demesi\n");
        printf("0-Cikis Yapma\n");
        printf("---------------------------------------------\n");
        printf("L�tfen Bir i�lem Se�iniz : ");
       
        scanf("%d",&secim);
        switch(secim)
        {
        case 0:
            break;
        case 1:
            printf("Bakiyeniz : %d\n",bakiye);
            break;
        case 2:
            printf("Lutfen Yatirmak Istediginiz Tutari Giriniz : \n");
            scanf("%d",&yatirilacakTutar);
            printf("Yatirma islemi basarili.\n");
            bakiye=bakiye+yatirilacakTutar;
            printf("Son Bakiyeniz : %d\n",bakiye);
            break;
        case 3:
            printf("Lutfen Cekmek Istediginiz Tutari Giriniz : \n");
            scanf("%d",&cekilecekTutar);
            if(cekilecekTutar>bakiye)
            {
                printf("Bakiyeden Yuksek Bir Tutar Girdiniz!\n");
            }
            else
            {
            
                printf("Cekme islemi basarili.\n");
                bakiye=bakiye-cekilecekTutar;
                printf("Son Bakiyeniz : %d\n",bakiye);
            }
                break;
        default:
            printf("Yanlis Bir Secim Yaptiniz!\n");
            break;        
            
        case 4:    
            printf("Lutfen G�ndermek Istediginiz Tutari Giriniz : \n");
            scanf("%d",&cekilecekTutar);
            if(cekilecekTutar>bakiye)
            {
                printf("Bakiyeden Yuksek Bir Tutar Girdiniz!\n");
            }
            else
            {
                printf("G�nderme islemi basarili.\n");
                bakiye=bakiye-cekilecekTutar;
                printf("Son Bakiyeniz : %d\n",bakiye);

            }
            break;
            
        case 5:    
            printf("Lutfen �demek  Istediginiz Faturay� Giriniz : \n");
            printf("1-Elektrik\n2-Su\n3-Do�algaz\n4-�nternet\n");
            printf("------------------------------------------------\n");
            printf("secim :");
            scanf("%d",&cekilecekTutar);
            scanf("%d",&secim);
            switch(secim){
            case 6:printf("Elektrik\nSu\nDo�algaz\n�nternet\n");
            case 7:printf("Elektrik\nSu\nDo�algaz\n�nternet\n");
            case 8:printf("Elektrik\nSu\nDo�algaz\n�nternet\n");
            case 9:printf("Elektrik\nSu\nDo�algaz\n�nternet\n");
            default:printf("1 ile 4 Aras�nda Se�im Yap�n�z :");
                
            }
            if(cekilecekTutar>bakiye)
            {
                printf("Yetersiz Bakiye Girdiniz!\n");
            }
            else
            {
                printf("Fatura �deme �slemi Ger�ekle�ti.\n");
                bakiye=bakiye-cekilecekTutar;
                printf("Son Bakiyeniz : %d\n",bakiye);

            }
            break;
        }

    }


    return 0;
}
