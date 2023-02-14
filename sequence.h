#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>
    //! \brief Klasa Sequence
    //! Klasa Sequence jest definicją obiektu, który przechowuje dwie wartości typu int i udostępnia metody do ich manipulacji i wykonywania na nich prostych działań matematycznych
class Sequence{
public:
    //! \brief Konstruktor domyślny
    Sequence(int x, int y);
    //! \brief Konstruktor kopiujący
    Sequence(Sequence kopia);
    //! \brief Destruktor
    ~Sequence();
    //! \brief Funkcje dostępu do składowych
    int accessX();
    
    int accessY();
    //! \brief Wzór na rozkład F-Snedecora
    /**
    * \f[
    *   F = \frac{\left(\frac{S_1}{n_1}\right)}{\left(\frac{S_2}{n_2}\right)}
    * \f]
    * 
    * gdzie \f$S_1\f$ i \f$S_2\f$ są odchyleniami standardowymi dla dwóch badanych próbek, 
    * a \f$n_1\f$ i \f$n_2\f$ są ich odpowiednimi rozmiarami.
    * 
    * Rozkład F-Snedecora jest używany do testowania hipotez dotyczących równowagi 
    * średnich dla dwóch lub więcej grupy.
    */
    float dodaj();
    //! \brief Wartości krytyczne dla rozkładu F-Snedecora
    //! | Stopień swobody 1 | Stopień swobody 2 | Wartość krytyczna |
    //! |---|---|----|
    //! | 1 | 1 |  12.706 |
    //! | 2 | 2 |  4.303 |
    //! | 3 | 3 |  3.182 |
    //! | 4 | 4 |  2.776 |
    //! | 5 | 5 |  2.571 |
    //! | 6 | 6 |  2.447 |
    //! | 7 | 7 |  2.365 |
    //! | 8 | 8 |  2.306 |
    //! | 9 | 9 |  2.262 |
    //! | 10 | 10 |  2.228 |
    float odejmij();
private:
    int x, y;
}

#endif
