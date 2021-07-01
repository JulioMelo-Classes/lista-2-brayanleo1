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
 * 
 * @param first Ponteiro para o primeiro elemento da range
 * @param last Ponteiro para a posição logo após o último elemento da range
 * @param d_first Ponteiro para o primeiro elemento da range cópia
 * 
 * @return Um ponteiro para a posição logo após o último elemento da range cópia
 */
 /*
 blz
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{

    auto iterN = d_first;
    auto iterO = first;

    while(iterO != last) {
        *iterN = *iterO;
        ++iterN;
        ++iterO;
    }

    return iterN;
}

}
#endif
