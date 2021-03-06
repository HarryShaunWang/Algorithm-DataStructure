/*
    Programed by HarryShaunWang
    Created on 2018.11.12
    Last modified on 2019.9.2
*/
#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include <algorithm>

template <typename RanIt>
inline void QuickSort (RanIt l, RanIt r)
{
    RanIt i = l, j = r, mid = l + ( (r - l) >> 1);
    while (i <= j)
    {
        while (*i < *mid)
            ++i;
        while (*mid < *j)
            --j;
        if (i <= j)
        {
            std::swap (*i, *j);
            ++i, --j;
        }
        if (l < j)
            QuickSort (l, j);
        if (i < r)
            QuickSort (i, r);
    }
}

#endif