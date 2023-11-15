# C++ Intro

## Affichage Console

```cpp
/*
      std::count : sortie standard (buffer)
      std::cerr : sortie d'erreurs
      std::clog : sortie de log

      std::cin : entrée standard

      std::endl : retour à la ligne + flush
      std::flush : flush

    \n : retour à la ligne
    \t : tabulation


    // : commentaire sur une ligne

*/

```

## Variables

```cpp

/*

déclaration de Variable : 
    type nom_variable{type de la data};

    Préfixes : 
        Ob : binaire
        Ox : hexadécimal
        0 : octal
        
        
    suffixe : 
        u, U : unsigned
        f,F : float
        l,L : long int , long double
        ll, LL : long long int
    
    Types de variables:
        int : integer
        float : float
        double : double
        char : caractère
        string : chaîne de caractères : 
            include <string> 
            std::string var{"Hello World"};
        bool : booléen
        const : constante (RO) exemple : const int var{5};
        auto : détermine le type de la variable automatiquement

        
        Mieux en suffixe :
            unsigned : entier positif
            long : entier long
            long long : entier long long
            short : entier court
            unsigned long : entier positif long
    
    Scientifique : 
        14'100 : séparer les milliers (paquet de 3) avec des apostrophes
        1.4e3 : 1.4 * 10^3
        1.4e-3 : 1.4 * 10^-3


Affectation de variable /  changement 
var = 5;
```

## Saisie utilisateur

```cpp

    Flags:
        goodbit : tout va bien 1
        failbit : erreur de saisie 0
        badbit : erreur de lecture 0 

    pour les strings :
        std::string nombre;
        std::getline(std::cin, nombre);


    std::cin.ignore(255, '\n'); // ignore 255 caractères ou jusqu'à un retour à la ligne 
    std::cin >> var; // saisie de l'utilisateur 
    std::getline(std::cin, var); // saisie de l'utilisateur
    std:ws(std::cin); // ignore les espaces
    std::cin.clear(); // remet les flags à 1

```



