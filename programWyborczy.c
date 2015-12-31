#include<stdio.h>

typedef struct {
    double PiS;
    double PO;
    double ZL;
    double korwin;
    double kukiz;
    double razem;
    double nowoczesna;
    double PSL;
    char *uzytkownik[10];
} profile;

int main()
{
    char imie[10];
    int odpowiedz;

    printf("Witamy w programie wyborczym. Podaj swoje imie: \n");
    scanf("%s",imie);
    printf("Witaj %s! Mam nadzieje, ze program okaze sie byc pomocny w wyborze odpowiedniej partii politycznej. Powodzenia! \n", imie);
    profile profil={0,0,0,0,0,0,0,0,imie};
    printf("Czeka Cie quiz, jako odpowiedz wpisz jej numer lub odpowiednia liczbe.\n");

    printf("Pytanie 1.\n");
    printf("Jestes: \n1.Kobieta \n2.Mezczyzna\n");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 2.8;
        profil.PiS = profil.PiS + 39.7;
        profil.PO = profil.PO + 26.4;
        profil.kukiz = profil.kukiz + 7.5;
        profil.ZL = profil.ZL + 6.6;
        profil.nowoczesna = profil.nowoczesna + 7.1;
        profil.razem = profil.razem + 4.2;
        profil.PSL = profil.PSL + 5;
    }
    else
    {
        profil.korwin = profil.korwin + 7.1;
        profil.PiS = profil.PiS + 38.5;
        profil.PO = profil.PO + 20.3;
        profil.kukiz = profil.kukiz + 10.6;
        profil.ZL = profil.ZL + 6.6;
        profil.nowoczesna = profil.nowoczesna + 7.1;
        profil.razem = profil.razem + 3.6;
        profil.PSL = profil.PSL + 5.4;
    }

    odpowiedz=0;

    printf("Pytanie 2.\n");
    printf("Ile masz lat?\n");
    scanf("%i",&odpowiedz);
    if(odpowiedz<30)
    {
        profil.korwin = profil.korwin + 16.8;
        profil.PiS = profil.PiS + 26.6;
        profil.PO = profil.PO + 14.4;
        profil.kukiz = profil.kukiz + 20.6;
        profil.ZL = profil.ZL + 3.4;
        profil.nowoczesna = profil.nowoczesna + 7.8;
        profil.razem = profil.razem + 5.2;
        profil.PSL = profil.PSL + 3.7;
    }
    else if(odpowiedz>29 && odpowiedz<40)
    {
        profil.korwin = profil.korwin + 4.8;
        profil.PiS = profil.PiS + 30.6;
        profil.PO = profil.PO + 23.8;
        profil.kukiz = profil.kukiz + 12.6;
        profil.ZL = profil.ZL + 5.6;
        profil.nowoczesna = profil.nowoczesna + 10.8;
        profil.razem = profil.razem + 5.8;
        profil.PSL = profil.PSL + 5.1;
    }
    else if(odpowiedz>39 && odpowiedz<50)
    {
        profil.korwin = profil.korwin + 2.6;
        profil.PiS = profil.PiS + 38.7;
        profil.PO = profil.PO + 25.8;
        profil.kukiz = profil.kukiz + 7.7;
        profil.ZL = profil.ZL + 6.4;
        profil.nowoczesna = profil.nowoczesna + 8.2;
        profil.razem = profil.razem + 4.1;
        profil.PSL = profil.PSL + 5.9;
    }
     else if(odpowiedz>49 && odpowiedz<60)
    {
        profil.korwin = profil.korwin + 1.8;
        profil.PiS = profil.PiS + 47.1;
        profil.PO = profil.PO + 23;
        profil.kukiz = profil.kukiz + 4.9;
        profil.ZL = profil.ZL + 7.3;
        profil.nowoczesna = profil.nowoczesna + 6.0;
        profil.razem = profil.razem + 3.2;
        profil.PSL = profil.PSL + 6.2;
    }
    else
    {
        profil.korwin = profil.korwin + 0.6;
        profil.PiS = profil.PiS + 48.7;
        profil.PO = profil.PO + 28.1;
        profil.kukiz = profil.kukiz + 2;
        profil.ZL = profil.ZL + 9.3;
        profil.nowoczesna = profil.nowoczesna + 3.8;
        profil.razem = profil.razem + 1.8;
        profil.PSL = profil.PSL + 5.1;
    }
        odpowiedz=0;

    printf("Pytanie 3./n");
    printf("Jakie jest Twoje wyksztalcenie?\n\n");
    printf("1.Podstawowe i (lub) gimnazjalne.\n\n2.Zawodowe.\n3.Srednie i (lub) pomaturalne.\n4.Licencjat i wyzsze.\n");
    scanf("%i",&odpowiedz);

    if(odpowiedz=1)
    {
        profil.korwin = profil.korwin + 6.4;
        profil.PiS = profil.PiS + 55;
        profil.PO = profil.PO + 15.4;
        profil.kukiz = profil.kukiz + 6.7;
        profil.ZL = profil.ZL + 4.2;
        profil.nowoczesna = profil.nowoczesna + 2.0;
        profil.razem = profil.razem + 2.3;
        profil.PSL = profil.PSL + 6.7;
    }
    else if(odpowiedz=2)
    {
        profil.korwin = profil.korwin + 2.4;
        profil.PiS = profil.PiS + 51.6;
        profil.PO = profil.PO + 19.7;
        profil.kukiz = profil.kukiz + 7.4;
        profil.ZL = profil.ZL + 6.1;
        profil.nowoczesna = profil.nowoczesna + 2.4;
        profil.razem = profil.razem + 2.5;
        profil.PSL = profil.PSL + 7.1;
    }
    else if(odpowiedz=3)
    {
        profil.korwin = profil.korwin + 5.6;
        profil.PiS = profil.PiS + 37.9;
        profil.PO = profil.PO + 23.2;
        profil.kukiz = profil.kukiz + 10;
        profil.ZL = profil.ZL + 8;
        profil.nowoczesna = profil.nowoczesna + 5.6;
        profil.razem = profil.razem + 3.6;
        profil.PSL = profil.PSL + 5.2;
    }
    else
    {
        profil.korwin = profil.korwin + 5.1;
        profil.PiS = profil.PiS + 29.1;
        profil.PO = profil.PO + 26.8;
        profil.kukiz = profil.kukiz + 8.2;
        profil.ZL = profil.ZL + 8.1;
        profil.nowoczesna = profil.nowoczesna + 12.9;
        profil.razem = profil.razem + 5.0;
        profil.PSL = profil.PSL + 4.1;
    }
    odpowiedz=0;

    printf("Pytanie 4./n");
    printf("Czy jestes za kara smierci?\n\n");
    printf("1.TAK\n2.NIE");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 100;
        profil.PiS = profil.PiS + 30;
        profil.PO = profil.PO + 10;
        profil.kukiz = profil.kukiz + 30;
        profil.ZL = profil.ZL + 1;
        profil.nowoczesna = profil.nowoczesna + 10;
        profil.razem = profil.razem + 1;
        profil.PSL = profil.PSL + 1;
    }
    else
    {
        profil.korwin = profil.korwin + 1;
        profil.PiS = profil.PiS + 70;
        profil.PO = profil.PO + 80;
        profil.kukiz = profil.kukiz + 60;
        profil.ZL = profil.ZL + 80;
        profil.nowoczesna = profil.nowoczesna + 70;
        profil.razem = profil.razem + 100;
        profil.PSL = profil.PSL + 50;
    }

    printf("Pytanie 5./n");
    printf("Czy jestes za legalizacja marihuany?\n\n");
    printf("1.TAK\n2.NIE");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 100;
        profil.PiS = profil.PiS + 10;
        profil.PO = profil.PO + 10;
        profil.kukiz = profil.kukiz + 50;
        profil.ZL = profil.ZL + 1;
        profil.nowoczesna = profil.nowoczesna + 10;
        profil.razem = profil.razem + 1;
        profil.PSL = profil.PSL + 1;
    }
    else
    {
        profil.korwin = profil.korwin + 1;
        profil.PiS = profil.PiS + 80;
        profil.PO = profil.PO + 80;
        profil.kukiz = profil.kukiz + 50;
        profil.ZL = profil.ZL + 80;
        profil.nowoczesna = profil.nowoczesna + 80;
        profil.razem = profil.razem + 100;
        profil.PSL = profil.PSL + 50;
    }

    printf("Pytanie 6./n");
    printf("Czy jestes za zwiekszeniem finansowania wojska?\n\n");
    printf("1.TAK\n2.NIE");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 80;
        profil.PiS = profil.PiS + 70;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 70;
        profil.ZL = profil.ZL + 20;
        profil.nowoczesna = profil.nowoczesna + 40;
        profil.razem = profil.razem + 1;
        profil.PSL = profil.PSL + 50;
    }
    else
    {
        profil.korwin = profil.korwin + 50;
        profil.PiS = profil.PiS + 20;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 30;
        profil.ZL = profil.ZL + 30;
        profil.nowoczesna = profil.nowoczesna + 60;
        profil.razem = profil.razem + 100;
        profil.PSL = profil.PSL + 50;
    }

    printf("Pytanie 7./n");
    printf("Czy jestes za prywatyzacja spolek panstwa?\n\n");
    printf("1.TAK\n2.NIE");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 100;
        profil.PiS = profil.PiS + 50;
        profil.PO = profil.PO + 70;
        profil.kukiz = profil.kukiz + 70;
        profil.ZL = profil.ZL + 1;
        profil.nowoczesna = profil.nowoczesna + 70;
        profil.razem = profil.razem + 1;
        profil.PSL = profil.PSL + 10;
    }
    else
    {
        profil.korwin = profil.korwin + 1;
        profil.PiS = profil.PiS + 50;
        profil.PO = profil.PO + 30;
        profil.kukiz = profil.kukiz + 30;
        profil.ZL = profil.ZL + 90;
        profil.nowoczesna = profil.nowoczesna + 30;
        profil.razem = profil.razem + 100;
        profil.PSL = profil.PSL + 70;
    }

    printf("Pytanie 8./n");
    printf("Czy jestes zwolennikiem panstwa opiekunczego?\n\n");
    printf("1.TAK\n2.NIE");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 1;
        profil.PiS = profil.PiS + 80;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 50;
        profil.ZL = profil.ZL + 80;
        profil.nowoczesna = profil.nowoczesna + 50;
        profil.razem = profil.razem + 100;
        profil.PSL = profil.PSL + 60;
    }
    else
    {
        profil.korwin = profil.korwin + 100;
        profil.PiS = profil.PiS + 20;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 50;
        profil.ZL = profil.ZL + 1;
        profil.nowoczesna = profil.nowoczesna + 50;
        profil.razem = profil.razem + 1;
        profil.PSL = profil.PSL + 40;
    }

    printf("Pytanie 9./n");
    printf("Czy jestes za legalizacja zwiazkow partnerskich?\n\n");
    printf("1.TAK\n2.NIE");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 50;
        profil.PiS = profil.PiS + 1;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 30;
        profil.ZL = profil.ZL + 10;
        profil.nowoczesna = profil.nowoczesna + 50;
        profil.razem = profil.razem + 50;
        profil.PSL = profil.PSL + 20;
    }
    else
    {
        profil.korwin = profil.korwin + 50;
        profil.PiS = profil.PiS + 90;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 70;
        profil.ZL = profil.ZL + 70;
        profil.nowoczesna = profil.nowoczesna + 50;
        profil.razem = profil.razem + 50;
        profil.PSL = profil.PSL + 60;
    }

        printf("Pytanie 10./n");
        printf("Czy jestes za legalizacja aborcji?\n\n");
        printf("1.TAK\n2.NIE");
        scanf("%i",&odpowiedz);

    if(odpowiedz==1)
    {
        profil.korwin = profil.korwin + 100;
        profil.PiS = profil.PiS + 1;
        profil.PO = profil.PO + 60;
        profil.kukiz = profil.kukiz + 50;
        profil.ZL = profil.ZL + 20;
        profil.nowoczesna = profil.nowoczesna + 60;
        profil.razem = profil.razem + 1;
        profil.PSL = profil.PSL + 1;
    }
    else
    {
        profil.korwin = profil.korwin + 1;
        profil.PiS = profil.PiS + 100;
        profil.PO = profil.PO + 50;
        profil.kukiz = profil.kukiz + 50;
        profil.ZL = profil.ZL + 70;
        profil.nowoczesna = profil.nowoczesna + 30;
        profil.razem = profil.razem + 100;
        profil.PSL = profil.PSL + 60;
    }

    printf("\nTest zakonczony. Gratulacje!\n\n Oto Twoje wyniki:\n\n");

    printf("Prawo i Sprawiedliwosc: %.1f\n", profil.PiS/10);
       printf("Platforma Obywatelska: %.1f\n", profil.PO/10);
          printf("Kukiz'15: %.1f\n", profil.kukiz/10);
             printf("Nowoczesna.PL: %.1f\n", profil.nowoczesna/10);
                printf("Polskie Stronnictwo Ludowe: %.1f\n", profil.PSL/10);
                   printf("Zjednoczona Lewica: %.1f\n", profil.ZL/10);
                      printf("KORWiN: %.1f\n", profil.korwin/10);
                         printf("razem: %.1f\n", profil.razem/10);
    scanf("%i",&odpowiedz);
    return;
}
