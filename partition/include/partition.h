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
 * @tparam ForwardIt iterator para a range
 * @tparam UnaryPredicate verifica se o predicate é verdade para o elemento indicado
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param p Função que verifica se o predicate é verdade para o elemento apontado
 * 
 * @return Iterator apontando para o elemento logo após o último da range reordenada que satisfaz o predicado
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    bool existe = false;
    auto posRun = first;
    auto posLast = first;
    existe = p(*posRun);
    if(existe == true) {
        std::swap(*posLast,*posRun);
        ++posLast;
    }
    while(posRun != last) {
        ++posRun;
        if(posRun != last) {
            existe = p(*posRun);
            if(existe == true) {
                std::swap(*posLast,*posRun);
                ++posLast;
            }
        }
        existe = false;
    }
    return posLast;
}

}
#endif
