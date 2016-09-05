/*
 * OPRoS Component Engine (OCE)
 * Copyright (c) 2008 ETRI. http://www.etri.re.kr.
 * Distributed under the OPRoS License, Version 2.0.
 *
 *  @Created : 2008. 9. 2
 *  @Author  : swjung (swjung@etri.re.kr), sby (sby@etri.re.kr)
 *
 *  @File    : BasicTypes.h
 *
 */

#ifndef _BASIC_TYPES_H_
#define _BASIC_TYPES_H_

#include <string>
#include <vector>
#include <map>

namespace opros {

#if ((UINT_MAX==USHRT_MAX))	// 16 bit or LP32
typedef unsigned char		byte;
typedef unsigned int		uint;
typedef unsigned long		ulong;

typedef unsigned char		uint8;
typedef char				int8;

typedef unsigned short		uint16;
typedef short				int16;

typedef unsigned long		uint32;
typedef long				int32;

typedef unsigned long long	uint64;
typedef long long			int64;

typedef float				float32;
typedef double				float64;
// 16 bit
#else		// ILP32, LLP64
typedef unsigned char		byte;
typedef unsigned int		uint;
typedef unsigned long		ulong;

typedef unsigned char		uint8;
typedef char				int8;

typedef unsigned short		uint16;
typedef short				int16;

typedef unsigned int		uint32;
typedef int					int32;

typedef unsigned long long	uint64;
typedef long long			int64;

typedef float				float32;
typedef double				float64;
#endif 

typedef wchar_t				WideChar;



typedef std::vector<std::string> StringList;

typedef std::map<std::string, std::string> StringMap;

} // namespace opros

#ifndef NULL
#define NULL (0)
#endif

#ifndef false
#define false 0
#endif

#ifndef true
#define true 1
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif


#ifdef _MSC_VER
	#define portable_dynamic_cast(Type, obj) dynamic_cast<Type>(obj)
#else
	 #define portable_dynamic_cast(Type, obj) static_cast<Type>(obj)
#endif

/*
template <typename Type> inline Type portable_dynamic_cast(void *obj) {
#ifndef __GNUC__
	return dynamic_cast<Type>(obj);
#else
	return static_cast<Type>(obj);
#endif
}
*/

#endif
