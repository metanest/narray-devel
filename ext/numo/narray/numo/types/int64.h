typedef int64_t dtype;
typedef int64_t rtype;
#define cT  numo_cInt64
#define cRT cT

#define m_num_to_data(x) ((dtype)NUM2INT64(x))
#define m_data_to_num(x) INT642NUM((int64_t)(x))
#define m_extract(x)     INT642NUM((int64_t)*(dtype*)(x))
#define m_sprintf(s,x)   sprintf(s,"%"PRId64,(int64_t)(x))

#include "int_macro.h"
