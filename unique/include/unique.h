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
 * @tparam InputIt iterator para a range
 * @tparam Equal verifica se há uma igualdade entre dois elementos
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param eq Função que verifica se dois valores em elementos diferentes são iguais
 * 
 * @return Iterator apontando para o elemento logo após o último da range modificada
 */
 /*
 20% pela documentação
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    bool existe = false;
    auto posRun = first;
    auto posLast = first;
    auto posBef = first;
    while(posRun != last) {
        ++posRun;
        if(posRun != last) {
            while(posBef != posRun && existe == false) {
                existe = eq(*posBef,*posRun);
                ++posBef;
            }
            if(existe == true) {
                auto posAux = posRun;
                auto posNext = posRun + 1;
                while(posAux != last) {
                    *posAux = *posNext;
                    ++posAux;
                    ++posNext;
                }
            }
        }
        posBef = first;
        existe = false;
    }
    return posLast; //? no caso vc está retornando sempre first... não vou considerar
}

}
#endif
