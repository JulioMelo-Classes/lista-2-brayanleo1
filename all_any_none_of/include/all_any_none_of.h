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
 * @return boolean que confirma se todos os elementos na range cumprem o predicado p
 */
 /*
 blz!
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    bool existe = true;
    auto pos = first;
    existe = p(*pos);
    while(pos != last && existe == true) { //ao invés de fazer existe == true, vc pode só testar while(pos != last && existe) ...
        ++pos;
        if(pos != last) {
            existe = p(*pos);
        }
    }
    return existe;
}

/*! 
 * @tparam InputIt iterator para o range
 * @tparam UnaryPredicate predicate de um parâmetro que verifica se algo existe na range
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param p Função que verifica se o predicado é verdadeiro ou falso
 * 
 * @return boolean que confirma se algum dos elementos na range cumprem o predicado p
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    bool existe = false;
    auto pos = first;
    existe = p(*pos);
    while(pos != last && existe == false) {
        ++pos;
        if(pos != last) {
            existe = p(*pos);
        }
    }
    return existe;
}

/*! 
 * @tparam InputIt iterator para o range
 * @tparam UnaryPredicate predicate de um parâmetro que verifica se algo existe na range
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param p Função que verifica se o predicado é verdadeiro ou falso
 * 
 * @return boolean que confirma se nenhum dos elementos na range cumprem o predicado p
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    bool existe = false;
    auto pos = first;
    existe = p(*pos);
    while(pos != last && existe == false) {
        ++pos;
        if(pos != last) {
            existe = p(*pos);
        }
    }
    if(existe == true) {
        return false;
    } else {
        return true;
    }
}

}
#endif
