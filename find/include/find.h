#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * @tparam InputIt iterator para o range
 * @tparam Equal verifica a igualdade de dois parâmetros
 * @tparam T valor constante a ser verificado
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param value Valor constante para ser verificado
 * @param eq Função que verifica se os valores passados são iguais ou não retornando true ou false
 * 
 * @return Um ponteiro que será a primeira posição se existir algo que satisfaça a igualdade ou retornará a posição logo após a última caso não haja
 */
 /*
 ok
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    bool onde = false;
    auto pos = first;
    onde = eq(*pos,value);
    while(pos != last && onde == false) {
        ++pos;
        onde = eq(*pos,value);
    }
    return pos;
}

}
#endif
