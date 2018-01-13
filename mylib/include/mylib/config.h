#pragma once

#ifdef _MSC_VER
#  ifdef MYLIB_EXPORTS
#   define MYLIB_API __declspec(dllexport)
#  else
#    ifdef MYLIB_IMPORTS
#     define MYLIB_API __declspec(dllimport)
#    else
#	  define MYLIB_API
#    endif
#  endif
#else
#  define MYLIB_API
#endif
