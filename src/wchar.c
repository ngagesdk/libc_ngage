#include "wchar.h"

#ifdef __cplusplus
extern "C" {
#endif

size_t wcslen(const wchar_t* s)
{
    size_t len = 0;
    while (*s++) len++;
    return len;
}

wchar_t* wcscpy(wchar_t* dest, const wchar_t* src)
{
    wchar_t* d = dest;
    while ((*d++ = *src++));
    return dest;
}

wchar_t* wcsncpy(wchar_t* dest, const wchar_t* src, size_t n)
{
    wchar_t* d = dest;
    while (n-- && (*d++ = *src++));
    while (n--) *d++ = 0;
    return dest;
}

int wcscmp(const wchar_t* s1, const wchar_t* s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++; s2++;
    }
    return (int)(*s1 - *s2);
}

int wcsncmp(const wchar_t* s1, const wchar_t* s2, size_t n)
{
    while (n-- && *s1 && (*s1 == *s2))
    {
        s1++; s2++;
    }
    return n ? (int)(*s1 - *s2) : 0;
}

#ifdef __cplusplus
}
#endif
