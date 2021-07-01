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
 * @tparam BidirIt iterator para o range
 *
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 */
 /*
 ok
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    auto i = first;
    auto j = last - 1;
    auto lp = i;
    while(lp != j && i != j) {
        lp = i;
        std::swap(*i,*j);
        ++i;
        --j;
    }
    
}

}
#endif
