#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>

    //! \brief Klasa Statistics
    //! Klasa ta zawiera funkcje do obliczania statystyk matematycznych.
class Statistics{
public:
    //! \brief Konstruktor domyślny
    //! Tworzy obiekt klasy Statistics z wartościami x i y jako argumentami.
    //! @param x Pierwsza wartość
    //! @param y Druga wartość
    Statistics(int x, int y);
    //! \brief Konstruktor kopiujący
    //! Tworzy kopię obiektu klasy Statistics z innego obiektu klasy Statistics jako argumentu.
    //! @param kopia Obiekt klasy Statistics, który ma być skopiowany
    Statistics(Statistics kopia);
    //! \brief Destruktor
    //! Niszczy obiekt klasy Statistics.
    ~Statistics();
    //! \brief Dostęp do wartości x
    //! Zwraca wartość x z obiektu klasy Statistics.
    //! @return Wartość x
    int accessX();
    //! \brief Dostęp do wartości y
    //! Zwraca wartość y z obiektu klasy Statistics.
    //! @return Wartość y
    int accessY();
    //! \brief Całka Poissona
    /**
    * \f$ \int_{a}^{b} \frac{e^{-x} x^n}{n!} \f$
    * 
    * Jest to wzór na całkę Poissona.
    * gdzie \f$ x \f$ jest zmienną niezależną, a \f$ n \f$ jest niezależną zmienną całkową.
    * \f$ a \f$ i \f$ b \f$ oznaczają granice całkowania.
    */
    float odejmij();
    /**
    * @brief Rozmycie Gaussa.
    * 
    * @details Rozmycie Gaussa jest jednym z popularnych filtrów obrazów, którego celem jest usuwanie szumów. 
    * Wzór na rozmycie Gaussa jest następujący:
    * 
    * @f$ G(x, y) = \frac{1}{2 \pi \sigma^2} e^{-(x^2 + y^2) / 2 \sigma^2} @f$
    * 
    *  gdzie @f$ x @f$ i @f$ y @f$ oznaczają współrzędne punktu w obrazie, a @f$ \sigma @f$ jest stałą określającą stopień rozmycia.
    * 
    * @param x Współrzędna @f$ x @f$ punktu w obrazie.
    * @param y Współrzędna @f$ y @f$ punktu w obrazie.
    * @param sigma Stała określająca stopień rozmycia.
    * 
    * @return Wartość rozmycia Gaussa dla danego punktu w obrazie.
    */
    //! \brief Efekt małego i dużego rozmycia gaussowskiego
    //! \image html gaus.png
    float dodaj();
    

private:
    int x, y;
}

#endif
