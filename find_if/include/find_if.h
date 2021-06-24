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
 * @tparam UnaryPredicate predicate de um parâmetro que verifica se algo existe na range
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param p Função que verifica se o predicado é verdadeiro ou falso
 * 
 * @return Um ponteiro que será a primeira posição se existir algo que satisfaça a condição ou retornará a posição logo após a última
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    bool onde = false;
    auto pos = first;
    onde = p(*pos);
    while(pos != last && onde == false) {
        ++pos;
        onde = p(*pos);
    }
    return pos;
    /*if (onde == true) {
        return pos;
    } else {
        return last;
    }*/
}

}
#endif
