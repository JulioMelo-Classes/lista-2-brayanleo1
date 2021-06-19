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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    
    if(first == last) {
        return std::make_pair( first, first );
    } else {
        Itr ma -> first;
        Itr me -> first;
        Itr pos -> first + 1;
        while (pos != last)
        {
            bool x = cmp(const string &ma,  const string &pos);
            bool y = cmp(const string &pos,  const string &me);
            if (x == true)
            {
                ma -> pos;
            }

            if (y == true)
            {
                me -> pos;
            }
            
            ++pos;
            
        }
        
        return std::make_pair( ma, me );
    }
    
}

}
#endif
