#include<stdio.h>
typedef struct {
    double PiS;
    double PO;
    double SLD;
    double korwin;
    double kukiz;
    char *uzytkownik[10];
} profile;

int main()
{
    char imie[10];
    int odpowiedz;

    printf("Witamy w programie wyborczym. Podaj swoje imie \n");
    scanf("%s",imie);
    printf("Witaj %s! Mam nadzieje, ze program okaze sie byc pomocny w wyborze odpowiedniej partii politycznej. Powodzenia! \n", imie);
    profile profil={10,10,10,10,10,imie};
    printf("Czeka Cie quiz, jako odpowiedz wpisz jej numer lub odpowiednia liczbe.\n");

    printf("Pytanie 1.\n");
    printf("Jestes: \n1.Kobieta \n2.Mezczyzna\n");
    scanf("%i",&odpowiedz);

    if(odpowiedz==1)
        profil.korwin = profil.korwin + 3;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 3;
        profil.kukiz = profil.kukiz + 1;
        profil.SLD = profil.SLD + 1;
    else
        profil.korwin = profil.korwin + 1,5;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 2;
        profil.kukiz = profil.kukiz + 1.5;
        profil.SLD = profil.SLD + 1;
    odpowiedz=0;

    printf("Pytanie 2.\n");
    printf("Ile masz lat?\n");
    scanf("%i",&odpowiedz);
    if(odpowiedz<30)
    {
        profil.korwin = profil.korwin + 3;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 3;
        profil.kukiz = profil.kukiz + 1;
        profil.SLD = profil.SLD + 1;
    }
    else if(odpowiedz>29 && odpowiedz<40)
    {
        profil.korwin = profil.korwin + 3;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 3;
        profil.kukiz = profil.kukiz + 1;
        profil.SLD = profil.SLD + 1;
    }
    else if(odpowiedz>39 && odpowiedz<50)
    {
        profil.korwin = profil.korwin + 3;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 3;
        profil.kukiz = profil.kukiz + 1;
        profil.SLD = profil.SLD + 1;
    }
     else if(odpowiedz>49 && odpowiedz<60)
    {
        profil.korwin = profil.korwin + 3;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 3;
        profil.kukiz = profil.kukiz + 1;
        profil.SLD = profil.SLD + 1;
    }
    else
    {
        profil.korwin = profil.korwin + 3;
        profil.PiS = profil.PiS + 4;
        profil.PO = profil.PO + 3;
        profil.kukiz = profil.kukiz + 1;
        profil.SLD = profil.SLD + 1;
    }
        odpowiedz=0;

    printf("Pytanie 3./n");
    printf("Jakie jest Twoje wyksztalcenie?\n\n");
    printf("1.Podstawowe\n2.Gimnazjalne\n3.Zawodowe\n4.Srednie\n5.Wyzsze\n");
    scanf("%i",&odpowiedz);

    if(odpowiedz=1)
    {

    }
    else if(odpowiedz=2)
    {

    }
    else if(odpowiedz=3)
    {

    }
    else if(odpowiedz=4)
    {

    }
    else
    {

    }
    odpowiedz=0;

    return;
}
