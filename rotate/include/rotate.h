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
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param n_first Ponteiro para o elemento da range que ocupará a primeira posição após a rotação
 * @param last Ponteiro para a posição logo após o último elemento da range
 *
 * @return Um iterator apontado para a posição do primeiro elemento antes da rotação
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
   auto el = last;
   auto d = std::distance(first,n_first);
   auto posFrstLast = first;
   while (d != 0) {
       auto f = first;
       auto n = first + 1;
       while(n != last) {
           std::swap(*f,*n);
           ++f;
           ++n;
       }
       d = d - 1;
       --el;
   }
   return el;
}

}
#endif
