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
 * @tparam InputIt1 iterator para a primeira range
 * @tparam InputIt2 iterator para a segunda range
 * @tparam Equal verifica se há uma igualdade entre dois elementos
 * 
 * @param first1 Ponteiro para o primeiro elemento da primeira range
 * @param last1 Ponteiro para a posição logo após o último elemento da primeira range
 * @param first2 Ponteiro para o primeiro elemento da segunda range
 * @param last2 Ponteiro para a posição logo após o último elemento da segunda range
 * @param eq Função que verifica se dois valores em elementos diferentes são iguais
 * 
 * @return boolean que confirma se todos os elementos na range cumprem o predicado p
 */
 /*
 90% vc precisava documentar a versão sobrecarregada da função separadamente
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    bool existe = true;
    auto pos1 = first1;
    auto pos2 = first2;
    existe = eq(*pos1,*pos2);
    while(pos1 != last1 && existe == true) { //da mesma forma que all_any_none
        ++pos1;
        ++pos2;
        if(pos1 != last1) {
            existe = eq(*pos1,*pos2);
        }
    }
    return existe;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    bool existe = true;
    auto pos1 = first1;
    auto pos2 = first2;
    existe = eq(*pos1,*pos2);
    while(pos1 != last1 && existe == true) {
        ++pos1;
        ++pos2;
        if(pos1 != last1 && pos2 != last2) {
            existe = eq(*pos1,*pos2);
        }
    }
    return existe;
}

}
#endif
