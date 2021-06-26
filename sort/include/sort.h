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
 * @tparam Comparison faz uma comparação entre elementos
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param cmp Compara dois elementos recebidos retornando um bool que diz respeito se o primeiro é menor que o segundo
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    bool maior = false;
    auto posElem = first;
    auto posTest = first;
    while(posElem != last) {
        while(posTest != last) {
            maior = cmp(*posTest,*posElem);
            if(maior == true) {
                std::swap(*posElem,*posTest);
            }
            ++posTest;
            maior = false;
        }
        ++posElem;
        posTest = posElem;
    }
}

}
#endif
