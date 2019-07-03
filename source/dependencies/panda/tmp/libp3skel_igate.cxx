/*
 * This file was generated by:
 * built\bin\interrogate -v -srcdir panda/src/skel -Ipanda/src/skel -DCPPPARSER -D__STDC__=1 -D__cplusplus=201103L -DWIN32_VC -DWIN32 -D_WIN32 -D_M_IX86 -D_MSC_VER=1600 -D__declspec(param)= -D__cdecl -D_near -D_far -D__near -D__far -D__stdcall -oc built/tmp/libp3skel_igate.cxx -od built/pandac/input/libp3skel.in -fnames -string -refcount -assert -python-native -Sbuilt/include/parser-inc -Ipanda/src/skel -Sbuilt/tmp -Sbuilt/include -Sthirdparty/win-python/include -Sthirdparty/win-libs-vc10/extras/include -module panda3d.skel -library libp3skel basicSkel.h config_skel.h p3skel_composite1.cxx typedSkel.h 
 *
 */

#include "dtoolbase.h"
#include "interrogate_request.h"
#include "dconfig.h"
#include "pnotify.h"
#include <sstream>
#define PANDA_LIBRARY_NAME_libp3skel
#include "py_panda.h"
#include "extension.h"
#include "dcast.h"

#include "basicSkel.h"
#include "configVariableDouble.h"
#include "configVariableInt.h"
#include "configVariableString.h"
#include "config_skel.h"
#include "notifyCategoryProxy.h"
#include "pandabase.h"
#include "typedSkel.h"

#undef _POSIX_C_SOURCE
#undef _XOPEN_SOURCE
#define PY_SSIZE_T_CLEAN 1

#if PYTHON_FRAMEWORK
  #include <Python/Python.h>
#else
  #include "Python.h"
#endif

/**
 * Forward declarations for top-level class BasicSkel
 */
typedef BasicSkel BasicSkel_localtype;
Define_Module_Class(panda3d.skel, BasicSkel, BasicSkel_localtype, BasicSkel);
static struct Dtool_PyTypedObject *const Dtool_Ptr_BasicSkel = &Dtool_BasicSkel;
static void Dtool_PyModuleClassInit_BasicSkel(PyObject *module);

/**
 * Forward declarations for top-level class TypedSkel
 */
typedef TypedSkel TypedSkel_localtype;
Define_Module_Class(panda3d.skel, TypedSkel, TypedSkel_localtype, TypedSkel);
static struct Dtool_PyTypedObject *const Dtool_Ptr_TypedSkel = &Dtool_TypedSkel;
static void Dtool_PyModuleClassInit_TypedSkel(PyObject *module);

/**
 * Extern declarations for imported classes
 */
// TypedObject
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_TypedObject;
#else
extern struct Dtool_PyTypedObject Dtool_TypedObject;
static struct Dtool_PyTypedObject *const Dtool_Ptr_TypedObject = &Dtool_TypedObject;
#endif
// TypeHandle
#ifndef LINK_ALL_STATIC
static struct Dtool_PyTypedObject *Dtool_Ptr_TypeHandle;
inline static TypeHandle *Dtool_Coerce_TypeHandle(PyObject *args, TypeHandle &coerced) {
  nassertr(Dtool_Ptr_TypeHandle != NULL, NULL);
  nassertr(Dtool_Ptr_TypeHandle->_Dtool_Coerce != NULL, NULL);
  return ((TypeHandle *(*)(PyObject *, TypeHandle &))Dtool_Ptr_TypeHandle->_Dtool_Coerce)(args, coerced);
}
#else
extern struct Dtool_PyTypedObject Dtool_TypeHandle;
static struct Dtool_PyTypedObject *const Dtool_Ptr_TypeHandle = &Dtool_TypeHandle;
extern TypeHandle *Dtool_Coerce_TypeHandle(PyObject *args, TypeHandle &coerced);
#endif

/**
 * Python wrappers for global functions
 */
/**
 * Python wrappers for functions of class BasicSkel
 */
/**
 * Python function wrapper for:
 * inline void BasicSkel::set_value(int n)
 */
static PyObject *Dtool_BasicSkel_set_value_4(PyObject *self, PyObject *arg) {
  BasicSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_BasicSkel, (void **)&local_this, "BasicSkel.set_value")) {
    return NULL;
  }
  // 1-inline void BasicSkel::set_value(int n)
  if (PyLongOrInt_Check(arg)) {
    long arg_val = PyLongOrInt_AS_LONG(arg);
#if (SIZEOF_LONG > SIZEOF_INT) && !defined(NDEBUG)
    if (arg_val < INT_MIN || arg_val > INT_MAX) {
      return PyErr_Format(PyExc_OverflowError,
                          "value %ld out of range for signed integer",
                          arg_val);
    }
#endif
    (*local_this).set_value((int)arg_val);
    return Dtool_Return_None();
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "set_value(const BasicSkel self, int n)\n");
  }
  return NULL;
}

#ifndef NDEBUG
static const char *Dtool_BasicSkel_set_value_4_comment =
  "C++ Interface:\n"
  "set_value(const BasicSkel self, int n)\n"
  "\n"
  "// These inline functions allow you to get and set _value.\n"
  "\n"
  "/**\n"
  " * Stores an integer value.\n"
  " */";
#else
static const char *Dtool_BasicSkel_set_value_4_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * inline int BasicSkel::get_value(void)
 */
static PyObject *Dtool_BasicSkel_get_value_5(PyObject *self, PyObject *) {
  BasicSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_BasicSkel, (void **)&local_this, "BasicSkel.get_value")) {
    return NULL;
  }
  // 1-inline int BasicSkel::get_value(void)
  int return_value = (*local_this).get_value();
  if (Dtool_CheckErrorOccurred()) {
    return NULL;
  }
  return Dtool_WrapValue(return_value);
}

#ifndef NDEBUG
static const char *Dtool_BasicSkel_get_value_5_comment =
  "C++ Interface:\n"
  "get_value(const BasicSkel self)\n"
  "\n"
  "/**\n"
  " * Retreives a value that was previously stored.\n"
  " */";
#else
static const char *Dtool_BasicSkel_get_value_5_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * void BasicSkel::set_value_alt(int n)
 */
static PyObject *Dtool_BasicSkel_set_value_alt_6(PyObject *self, PyObject *arg) {
  BasicSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_BasicSkel, (void **)&local_this, "BasicSkel.set_value_alt")) {
    return NULL;
  }
  // 1-void BasicSkel::set_value_alt(int n)
  if (PyLongOrInt_Check(arg)) {
    long arg_val = PyLongOrInt_AS_LONG(arg);
#if (SIZEOF_LONG > SIZEOF_INT) && !defined(NDEBUG)
    if (arg_val < INT_MIN || arg_val > INT_MAX) {
      return PyErr_Format(PyExc_OverflowError,
                          "value %ld out of range for signed integer",
                          arg_val);
    }
#endif
    (*local_this).set_value_alt((int)arg_val);
    return Dtool_Return_None();
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "set_value_alt(const BasicSkel self, int n)\n");
  }
  return NULL;
}

#ifndef NDEBUG
static const char *Dtool_BasicSkel_set_value_alt_6_comment =
  "C++ Interface:\n"
  "set_value_alt(const BasicSkel self, int n)\n"
  "\n"
  "// These do the same thing as the functions above.\n"
  "\n"
  "/**\n"
  " * Stores an integer value.  Exact same functionality as set_value, except\n"
  " * that this isn't an inline function.\n"
  " */";
#else
static const char *Dtool_BasicSkel_set_value_alt_6_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * int BasicSkel::get_value_alt(void)
 */
static PyObject *Dtool_BasicSkel_get_value_alt_7(PyObject *self, PyObject *) {
  BasicSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_BasicSkel, (void **)&local_this, "BasicSkel.get_value_alt")) {
    return NULL;
  }
  // 1-int BasicSkel::get_value_alt(void)
  int return_value = (*local_this).get_value_alt();
  if (Dtool_CheckErrorOccurred()) {
    return NULL;
  }
  return Dtool_WrapValue(return_value);
}

#ifndef NDEBUG
static const char *Dtool_BasicSkel_get_value_alt_7_comment =
  "C++ Interface:\n"
  "get_value_alt(const BasicSkel self)\n"
  "\n"
  "/**\n"
  " * Retreives a value that was previously stored.  Exact same functionality as\n"
  " * get_value, except that this isn't an inline function.\n"
  " */";
#else
static const char *Dtool_BasicSkel_get_value_alt_7_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * inline BasicSkel::BasicSkel(void)
 * inline BasicSkel::BasicSkel(BasicSkel const &) = default
 */
static int Dtool_Init_BasicSkel(PyObject *self, PyObject *args, PyObject *kwds) {
  int parameter_count = (int)PyTuple_Size(args);
  if (kwds != NULL) {
    parameter_count += (int)PyDict_Size(kwds);
  }
  switch (parameter_count) {
  case 0:
    {
      // 1-inline BasicSkel::BasicSkel(void)
      BasicSkel *return_value = new BasicSkel();
      if (return_value == NULL) {
        PyErr_NoMemory();
        return -1;
      }
      if (Dtool_CheckErrorOccurred()) {
        delete return_value;
        return -1;
      }
      return DTool_PyInit_Finalize(self, (void *)return_value, &Dtool_BasicSkel, true, false);
    }
    break;
  case 1:
    {
      PyObject *arg = NULL;
      if (PyTuple_GET_SIZE(args) == 1) {
        arg = PyTuple_GET_ITEM(args, 0);
      } else if (kwds != NULL) {
        arg = PyDict_GetItemString(kwds, "param0");
      }
      if (arg == (PyObject *)NULL) {
        Dtool_Raise_TypeError("Required argument 'param0' (pos 1) not found");
        return -1;
      }
      // 1-inline BasicSkel::BasicSkel(BasicSkel const &) = default
      BasicSkel const *arg_this = (BasicSkel *)DTOOL_Call_GetPointerThisClass(arg, Dtool_Ptr_BasicSkel, 0, "BasicSkel.BasicSkel", true, true);
      if (arg_this != NULL) {
        BasicSkel *return_value = new BasicSkel(*arg_this);
        if (return_value == NULL) {
          PyErr_NoMemory();
          return -1;
        }
        if (Dtool_CheckErrorOccurred()) {
          delete return_value;
          return -1;
        }
        return DTool_PyInit_Finalize(self, (void *)return_value, &Dtool_BasicSkel, true, false);
      }
    }
    break;
#ifndef NDEBUG
  default:
    PyErr_Format(PyExc_TypeError,
                 "BasicSkel() takes 0 or 1 arguments (%d given)",
                 parameter_count);
    return -1;
#endif
  }
  if (!_PyErr_OCCURRED()) {
    Dtool_Raise_BadArgumentsError(
      "BasicSkel()\n"
      "BasicSkel(const BasicSkel param0)\n");
  }
  return -1;
}

static void *Dtool_UpcastInterface_BasicSkel(PyObject *self, Dtool_PyTypedObject *requested_type) {
  Dtool_PyTypedObject *SelfType = ((Dtool_PyInstDef *)self)->_My_Type;
  if (SelfType != Dtool_Ptr_BasicSkel) {
    printf("BasicSkel ** Bad Source Type-- Requesting Conversion from %s to %s\n", Py_TYPE(self)->tp_name, requested_type->_PyType.tp_name); fflush(NULL);
    return NULL;
  }

  BasicSkel *local_this = (BasicSkel *)((Dtool_PyInstDef *)self)->_ptr_to_object;
  if (requested_type == Dtool_Ptr_BasicSkel) {
    return local_this;
  }
  return NULL;
}

static void *Dtool_DowncastInterface_BasicSkel(void *from_this, Dtool_PyTypedObject *from_type) {
  if (from_this == NULL || from_type == NULL) {
    return NULL;
  }
  if (from_type == Dtool_Ptr_BasicSkel) {
    return from_this;
  }
  return (void *) NULL;
}

/**
 * Python wrappers for functions of class TypedSkel
 */
/**
 * Python function wrapper for:
 * inline void TypedSkel::set_value(int n)
 */
static PyObject *Dtool_TypedSkel_set_value_11(PyObject *self, PyObject *arg) {
  TypedSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_TypedSkel, (void **)&local_this, "TypedSkel.set_value")) {
    return NULL;
  }
  // 1-inline void TypedSkel::set_value(int n)
  if (PyLongOrInt_Check(arg)) {
    long arg_val = PyLongOrInt_AS_LONG(arg);
#if (SIZEOF_LONG > SIZEOF_INT) && !defined(NDEBUG)
    if (arg_val < INT_MIN || arg_val > INT_MAX) {
      return PyErr_Format(PyExc_OverflowError,
                          "value %ld out of range for signed integer",
                          arg_val);
    }
#endif
    (*local_this).set_value((int)arg_val);
    return Dtool_Return_None();
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "set_value(const TypedSkel self, int n)\n");
  }
  return NULL;
}

#ifndef NDEBUG
static const char *Dtool_TypedSkel_set_value_11_comment =
  "C++ Interface:\n"
  "set_value(const TypedSkel self, int n)\n"
  "\n"
  "// These inline functions allow you to get and set _value.\n"
  "\n"
  "/**\n"
  " * Stores an integer value.\n"
  " */";
#else
static const char *Dtool_TypedSkel_set_value_11_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * inline int TypedSkel::get_value(void)
 */
static PyObject *Dtool_TypedSkel_get_value_12(PyObject *self, PyObject *) {
  TypedSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_TypedSkel, (void **)&local_this, "TypedSkel.get_value")) {
    return NULL;
  }
  // 1-inline int TypedSkel::get_value(void)
  int return_value = (*local_this).get_value();
  if (Dtool_CheckErrorOccurred()) {
    return NULL;
  }
  return Dtool_WrapValue(return_value);
}

#ifndef NDEBUG
static const char *Dtool_TypedSkel_get_value_12_comment =
  "C++ Interface:\n"
  "get_value(const TypedSkel self)\n"
  "\n"
  "/**\n"
  " * Retreives a value that was previously stored.\n"
  " */";
#else
static const char *Dtool_TypedSkel_get_value_12_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * void TypedSkel::set_value_alt(int n)
 */
static PyObject *Dtool_TypedSkel_set_value_alt_13(PyObject *self, PyObject *arg) {
  TypedSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_TypedSkel, (void **)&local_this, "TypedSkel.set_value_alt")) {
    return NULL;
  }
  // 1-void TypedSkel::set_value_alt(int n)
  if (PyLongOrInt_Check(arg)) {
    long arg_val = PyLongOrInt_AS_LONG(arg);
#if (SIZEOF_LONG > SIZEOF_INT) && !defined(NDEBUG)
    if (arg_val < INT_MIN || arg_val > INT_MAX) {
      return PyErr_Format(PyExc_OverflowError,
                          "value %ld out of range for signed integer",
                          arg_val);
    }
#endif
    (*local_this).set_value_alt((int)arg_val);
    return Dtool_Return_None();
  }
  if (!_PyErr_OCCURRED()) {
    return Dtool_Raise_BadArgumentsError(
      "set_value_alt(const TypedSkel self, int n)\n");
  }
  return NULL;
}

#ifndef NDEBUG
static const char *Dtool_TypedSkel_set_value_alt_13_comment =
  "C++ Interface:\n"
  "set_value_alt(const TypedSkel self, int n)\n"
  "\n"
  "// These do the same thing as the functions above.\n"
  "\n"
  "/**\n"
  " * Stores an integer value.  Exact same functionality as set_value, except\n"
  " * that this isn't an inline function.\n"
  " */";
#else
static const char *Dtool_TypedSkel_set_value_alt_13_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * int TypedSkel::get_value_alt(void)
 */
static PyObject *Dtool_TypedSkel_get_value_alt_14(PyObject *self, PyObject *) {
  TypedSkel *local_this = NULL;
  if (!Dtool_Call_ExtractThisPointer_NonConst(self, Dtool_TypedSkel, (void **)&local_this, "TypedSkel.get_value_alt")) {
    return NULL;
  }
  // 1-int TypedSkel::get_value_alt(void)
  int return_value = (*local_this).get_value_alt();
  if (Dtool_CheckErrorOccurred()) {
    return NULL;
  }
  return Dtool_WrapValue(return_value);
}

#ifndef NDEBUG
static const char *Dtool_TypedSkel_get_value_alt_14_comment =
  "C++ Interface:\n"
  "get_value_alt(const TypedSkel self)\n"
  "\n"
  "/**\n"
  " * Retreives a value that was previously stored.  Exact same functionality as\n"
  " * get_value, except that this isn't an inline function.\n"
  " */";
#else
static const char *Dtool_TypedSkel_get_value_alt_14_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * static TypeHandle TypedSkel::get_class_type(void)
 */
static PyObject *Dtool_TypedSkel_get_class_type_15(PyObject *, PyObject *) {
  // 1-static TypeHandle TypedSkel::get_class_type(void)
  TypeHandle *return_value = new TypeHandle(TypedSkel::get_class_type());
  if (return_value == NULL) {
    return PyErr_NoMemory();
  }
  if (Dtool_CheckErrorOccurred()) {
    delete return_value;
    return NULL;
  }
  return DTool_CreatePyInstance((void *)return_value, *Dtool_Ptr_TypeHandle, true, false);
}

#ifndef NDEBUG
static const char *Dtool_TypedSkel_get_class_type_15_comment =
  "C++ Interface:\n"
  "get_class_type()\n";
#else
static const char *Dtool_TypedSkel_get_class_type_15_comment = NULL;
#endif

/**
 * Python function wrapper for:
 * inline TypedSkel::TypedSkel(void)
 * inline TypedSkel::TypedSkel(TypedSkel const &) = default
 */
static int Dtool_Init_TypedSkel(PyObject *self, PyObject *args, PyObject *kwds) {
  int parameter_count = (int)PyTuple_Size(args);
  if (kwds != NULL) {
    parameter_count += (int)PyDict_Size(kwds);
  }
  switch (parameter_count) {
  case 0:
    {
      // 1-inline TypedSkel::TypedSkel(void)
      TypedSkel *return_value = new TypedSkel();
      if (return_value == NULL) {
        PyErr_NoMemory();
        return -1;
      }
      if (Dtool_CheckErrorOccurred()) {
        delete return_value;
        return -1;
      }
      return DTool_PyInit_Finalize(self, (void *)return_value, &Dtool_TypedSkel, true, false);
    }
    break;
  case 1:
    {
      PyObject *arg = NULL;
      if (PyTuple_GET_SIZE(args) == 1) {
        arg = PyTuple_GET_ITEM(args, 0);
      } else if (kwds != NULL) {
        arg = PyDict_GetItemString(kwds, "param0");
      }
      if (arg == (PyObject *)NULL) {
        Dtool_Raise_TypeError("Required argument 'param0' (pos 1) not found");
        return -1;
      }
      // 1-inline TypedSkel::TypedSkel(TypedSkel const &) = default
      TypedSkel const *arg_this = (TypedSkel *)DTOOL_Call_GetPointerThisClass(arg, Dtool_Ptr_TypedSkel, 0, "TypedSkel.TypedSkel", true, true);
      if (arg_this != NULL) {
        TypedSkel *return_value = new TypedSkel(*arg_this);
        if (return_value == NULL) {
          PyErr_NoMemory();
          return -1;
        }
        if (Dtool_CheckErrorOccurred()) {
          delete return_value;
          return -1;
        }
        return DTool_PyInit_Finalize(self, (void *)return_value, &Dtool_TypedSkel, true, false);
      }
    }
    break;
#ifndef NDEBUG
  default:
    PyErr_Format(PyExc_TypeError,
                 "TypedSkel() takes 0 or 1 arguments (%d given)",
                 parameter_count);
    return -1;
#endif
  }
  if (!_PyErr_OCCURRED()) {
    Dtool_Raise_BadArgumentsError(
      "TypedSkel()\n"
      "TypedSkel(const TypedSkel param0)\n");
  }
  return -1;
}

static void *Dtool_UpcastInterface_TypedSkel(PyObject *self, Dtool_PyTypedObject *requested_type) {
  Dtool_PyTypedObject *SelfType = ((Dtool_PyInstDef *)self)->_My_Type;
  if (SelfType != Dtool_Ptr_TypedSkel) {
    printf("TypedSkel ** Bad Source Type-- Requesting Conversion from %s to %s\n", Py_TYPE(self)->tp_name, requested_type->_PyType.tp_name); fflush(NULL);
    return NULL;
  }

  TypedSkel *local_this = (TypedSkel *)((Dtool_PyInstDef *)self)->_ptr_to_object;
  if (requested_type == Dtool_Ptr_TypedSkel) {
    return local_this;
  }
  if (requested_type == Dtool_Ptr_TypedObject) {
    return (TypedObject *) local_this;
  }
  return NULL;
}

static void *Dtool_DowncastInterface_TypedSkel(void *from_this, Dtool_PyTypedObject *from_type) {
  if (from_this == NULL || from_type == NULL) {
    return NULL;
  }
  if (from_type == Dtool_Ptr_TypedSkel) {
    return from_this;
  }
  if (from_type == Dtool_Ptr_TypedObject) {
    TypedObject* other_this = (TypedObject*)from_this;
    return (TypedSkel*)other_this;
  }
  return (void *) NULL;
}

/**
 * Python method tables for BasicSkel (BasicSkel)
 */
static PyMethodDef Dtool_Methods_BasicSkel[] = {
  {"set_value", &Dtool_BasicSkel_set_value_4, METH_O, (const char *)Dtool_BasicSkel_set_value_4_comment},
  {"setValue", &Dtool_BasicSkel_set_value_4, METH_O, (const char *)Dtool_BasicSkel_set_value_4_comment},
  {"get_value", &Dtool_BasicSkel_get_value_5, METH_NOARGS, (const char *)Dtool_BasicSkel_get_value_5_comment},
  {"getValue", &Dtool_BasicSkel_get_value_5, METH_NOARGS, (const char *)Dtool_BasicSkel_get_value_5_comment},
  {"set_value_alt", &Dtool_BasicSkel_set_value_alt_6, METH_O, (const char *)Dtool_BasicSkel_set_value_alt_6_comment},
  {"setValueAlt", &Dtool_BasicSkel_set_value_alt_6, METH_O, (const char *)Dtool_BasicSkel_set_value_alt_6_comment},
  {"get_value_alt", &Dtool_BasicSkel_get_value_alt_7, METH_NOARGS, (const char *)Dtool_BasicSkel_get_value_alt_7_comment},
  {"getValueAlt", &Dtool_BasicSkel_get_value_alt_7, METH_NOARGS, (const char *)Dtool_BasicSkel_get_value_alt_7_comment},
  {"__copy__", &copy_from_copy_constructor, METH_NOARGS, NULL},
  {"__deepcopy__", &map_deepcopy_to_copy, METH_VARARGS, NULL},
  {NULL, NULL, 0, NULL}
};

static PyNumberMethods Dtool_NumberMethods_BasicSkel = {
  0, // nb_add
  0, // nb_subtract
  0, // nb_multiply
#if PY_MAJOR_VERSION < 3
  0, // nb_divide
#endif
  0, // nb_remainder
  0, // nb_divmod
  0, // nb_power
  0, // nb_negative
  0, // nb_positive
  0, // nb_absolute
  0, // nb_bool
  0, // nb_invert
  0, // nb_lshift
  0, // nb_rshift
  0, // nb_and
  0, // nb_xor
  0, // nb_or
#if PY_MAJOR_VERSION < 3
  0, // nb_coerce
#endif
  0, // nb_int
  0, // nb_long
  0, // nb_float
#if PY_MAJOR_VERSION < 3
  0, // nb_oct
  0, // nb_hex
#endif
  0, // nb_inplace_add
  0, // nb_inplace_subtract
  0, // nb_inplace_multiply
#if PY_MAJOR_VERSION < 3
  0, // nb_inplace_divide
#endif
  0, // nb_inplace_remainder
  0, // nb_inplace_power
  0, // nb_inplace_lshift
  0, // nb_inplace_rshift
  0, // nb_inplace_and
  0, // nb_inplace_xor
  0, // nb_inplace_or
  0, // nb_floor_divide
  0, // nb_true_divide
  0, // nb_inplace_floor_divide
  0, // nb_inplace_true_divide
#if PY_VERSION_HEX >= 0x02050000
  0, // nb_index
#endif
#if PY_VERSION_HEX >= 0x03050000
  0, // nb_matrix_multiply
  0, // nb_inplace_matrix_multiply
#endif
};

struct Dtool_PyTypedObject Dtool_BasicSkel = {
  {
    PyVarObject_HEAD_INIT(NULL, 0)
    "panda3d.skel.BasicSkel",
    sizeof(Dtool_PyInstDef),
    0, // tp_itemsize
    &Dtool_FreeInstance_BasicSkel,
    0, // tp_print
    0, // tp_getattr
    0, // tp_setattr
#if PY_MAJOR_VERSION >= 3
    0, // tp_reserved
#else
    0, // tp_compare
#endif
    0, // tp_repr
    &Dtool_NumberMethods_BasicSkel,
    0, // tp_as_sequence
    0, // tp_as_mapping
    0, // tp_hash
    0, // tp_call
    0, // tp_str
    PyObject_GenericGetAttr,
    PyObject_GenericSetAttr,
    0, // tp_as_buffer
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_CHECKTYPES,
#ifdef NDEBUG
    0,
#else
    "/**\n"
    " * This is the most basic of the skeleton classes.  It stores an integer, and\n"
    " * will return it on request.\n"
    " *\n"
    " * The skeleton classes are intended to help you learn how to add C++ classes\n"
    " * to panda.  See also the manual, \"Adding C++ Classes to Panda.\"\n"
    " */",
#endif
    0, // tp_traverse
    0, // tp_clear
    0, // tp_richcompare
    0, // tp_weaklistoffset
    0, // tp_iter
    0, // tp_iternext
    Dtool_Methods_BasicSkel,
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    Dtool_Init_BasicSkel,
    PyType_GenericAlloc,
    Dtool_new_BasicSkel,
    PyObject_Del,
    0, // tp_is_gc
    0, // tp_bases
    0, // tp_mro
    0, // tp_cache
    0, // tp_subclasses
    0, // tp_weaklist
    0, // tp_del
#if PY_VERSION_HEX >= 0x02060000
    0, // tp_version_tag
#endif
#if PY_VERSION_HEX >= 0x03040000
    0, // tp_finalize
#endif
  },
  TypeHandle::none(),
  Dtool_PyModuleClassInit_BasicSkel,
  Dtool_UpcastInterface_BasicSkel,
  Dtool_DowncastInterface_BasicSkel,
  (CoerceFunction)0,
  (CoerceFunction)0,
};

static void Dtool_PyModuleClassInit_BasicSkel(PyObject *module) {
  (void) module; // Unused
  static bool initdone = false;
  if (!initdone) {
    initdone = true;
    // Dependent objects
    Dtool_BasicSkel._PyType.tp_base = (PyTypeObject *)Dtool_Ptr_DTOOL_SUPER_BASE;
    PyObject *dict = PyDict_New();
    Dtool_BasicSkel._PyType.tp_dict = dict;
    PyDict_SetItemString(dict, "DtoolClassDict", dict);
    if (PyType_Ready((PyTypeObject *)&Dtool_BasicSkel) < 0) {
      Dtool_Raise_TypeError("PyType_Ready(BasicSkel)");
      return;
    }
    Py_INCREF((PyTypeObject *)&Dtool_BasicSkel);
  }
}

/**
 * Python method tables for TypedSkel (TypedSkel)
 */
static PyMethodDef Dtool_Methods_TypedSkel[] = {
  {"set_value", &Dtool_TypedSkel_set_value_11, METH_O, (const char *)Dtool_TypedSkel_set_value_11_comment},
  {"setValue", &Dtool_TypedSkel_set_value_11, METH_O, (const char *)Dtool_TypedSkel_set_value_11_comment},
  {"get_value", &Dtool_TypedSkel_get_value_12, METH_NOARGS, (const char *)Dtool_TypedSkel_get_value_12_comment},
  {"getValue", &Dtool_TypedSkel_get_value_12, METH_NOARGS, (const char *)Dtool_TypedSkel_get_value_12_comment},
  {"set_value_alt", &Dtool_TypedSkel_set_value_alt_13, METH_O, (const char *)Dtool_TypedSkel_set_value_alt_13_comment},
  {"setValueAlt", &Dtool_TypedSkel_set_value_alt_13, METH_O, (const char *)Dtool_TypedSkel_set_value_alt_13_comment},
  {"get_value_alt", &Dtool_TypedSkel_get_value_alt_14, METH_NOARGS, (const char *)Dtool_TypedSkel_get_value_alt_14_comment},
  {"getValueAlt", &Dtool_TypedSkel_get_value_alt_14, METH_NOARGS, (const char *)Dtool_TypedSkel_get_value_alt_14_comment},
  {"get_class_type", &Dtool_TypedSkel_get_class_type_15, METH_NOARGS | METH_STATIC, (const char *)Dtool_TypedSkel_get_class_type_15_comment},
  {"getClassType", &Dtool_TypedSkel_get_class_type_15, METH_NOARGS | METH_STATIC, (const char *)Dtool_TypedSkel_get_class_type_15_comment},
  {"__copy__", &copy_from_copy_constructor, METH_NOARGS, NULL},
  {"__deepcopy__", &map_deepcopy_to_copy, METH_VARARGS, NULL},
  {NULL, NULL, 0, NULL}
};

static PyNumberMethods Dtool_NumberMethods_TypedSkel = {
  0, // nb_add
  0, // nb_subtract
  0, // nb_multiply
#if PY_MAJOR_VERSION < 3
  0, // nb_divide
#endif
  0, // nb_remainder
  0, // nb_divmod
  0, // nb_power
  0, // nb_negative
  0, // nb_positive
  0, // nb_absolute
  0, // nb_bool
  0, // nb_invert
  0, // nb_lshift
  0, // nb_rshift
  0, // nb_and
  0, // nb_xor
  0, // nb_or
#if PY_MAJOR_VERSION < 3
  0, // nb_coerce
#endif
  0, // nb_int
  0, // nb_long
  0, // nb_float
#if PY_MAJOR_VERSION < 3
  0, // nb_oct
  0, // nb_hex
#endif
  0, // nb_inplace_add
  0, // nb_inplace_subtract
  0, // nb_inplace_multiply
#if PY_MAJOR_VERSION < 3
  0, // nb_inplace_divide
#endif
  0, // nb_inplace_remainder
  0, // nb_inplace_power
  0, // nb_inplace_lshift
  0, // nb_inplace_rshift
  0, // nb_inplace_and
  0, // nb_inplace_xor
  0, // nb_inplace_or
  0, // nb_floor_divide
  0, // nb_true_divide
  0, // nb_inplace_floor_divide
  0, // nb_inplace_true_divide
#if PY_VERSION_HEX >= 0x02050000
  0, // nb_index
#endif
#if PY_VERSION_HEX >= 0x03050000
  0, // nb_matrix_multiply
  0, // nb_inplace_matrix_multiply
#endif
};

static PySequenceMethods Dtool_SequenceMethods_TypedSkel = {
  0, // sq_length
  0, // sq_concat
  0, // sq_repeat
  0, // sq_item
  0, // sq_slice
  0, // sq_ass_item
  0, // sq_ass_slice
  0, // sq_contains
  0, // sq_inplace_concat
  0, // sq_inplace_repeat
};

static PyMappingMethods Dtool_MappingMethods_TypedSkel = {
  0, // mp_length
  0, // mp_subscript
  0, // mp_ass_subscript
};

static PyBufferProcs Dtool_BufferProcs_TypedSkel = {
#if PY_MAJOR_VERSION < 3
  0, // bf_getreadbuffer
  0, // bf_getwritebuffer
  0, // bf_getsegcount
  0, // bf_getcharbuffer
#endif
#if PY_VERSION_HEX >= 0x02060000
  0, // bf_getbuffer
  0, // bf_releasebuffer
#endif
};

struct Dtool_PyTypedObject Dtool_TypedSkel = {
  {
    PyVarObject_HEAD_INIT(NULL, 0)
    "panda3d.skel.TypedSkel",
    sizeof(Dtool_PyInstDef),
    0, // tp_itemsize
    &Dtool_FreeInstance_TypedSkel,
    0, // tp_print
    0, // tp_getattr
    0, // tp_setattr
#if PY_MAJOR_VERSION >= 3
    0, // tp_reserved
#else
    0, // tp_compare
#endif
    0, // tp_repr
    &Dtool_NumberMethods_TypedSkel,
    &Dtool_SequenceMethods_TypedSkel,
    &Dtool_MappingMethods_TypedSkel,
    0, // tp_hash
    0, // tp_call
    0, // tp_str
    PyObject_GenericGetAttr,
    PyObject_GenericSetAttr,
    &Dtool_BufferProcs_TypedSkel,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_CHECKTYPES,
#ifdef NDEBUG
    0,
#else
    "/**\n"
    " * Skeleton object that inherits from TypedObject.  Stores an integer, and\n"
    " * will return it on request.\n"
    " *\n"
    " * The skeleton classes are intended to help you learn how to add C++ classes\n"
    " * to panda.  See also the manual, \"Adding C++ Classes to Panda.\"\n"
    " */",
#endif
    0, // tp_traverse
    0, // tp_clear
    0, // tp_richcompare
    0, // tp_weaklistoffset
    0, // tp_iter
    0, // tp_iternext
    Dtool_Methods_TypedSkel,
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    Dtool_Init_TypedSkel,
    PyType_GenericAlloc,
    Dtool_new_TypedSkel,
    PyObject_Del,
    0, // tp_is_gc
    0, // tp_bases
    0, // tp_mro
    0, // tp_cache
    0, // tp_subclasses
    0, // tp_weaklist
    0, // tp_del
#if PY_VERSION_HEX >= 0x02060000
    0, // tp_version_tag
#endif
#if PY_VERSION_HEX >= 0x03040000
    0, // tp_finalize
#endif
  },
  TypeHandle::none(),
  Dtool_PyModuleClassInit_TypedSkel,
  Dtool_UpcastInterface_TypedSkel,
  Dtool_DowncastInterface_TypedSkel,
  (CoerceFunction)0,
  (CoerceFunction)0,
};

static void Dtool_PyModuleClassInit_TypedSkel(PyObject *module) {
  (void) module; // Unused
  static bool initdone = false;
  if (!initdone) {
    initdone = true;
    // Dependent objects
    assert(Dtool_Ptr_TypedObject != NULL);
    assert(Dtool_Ptr_TypedObject->_Dtool_ModuleClassInit != NULL);
    Dtool_Ptr_TypedObject->_Dtool_ModuleClassInit(NULL);
    Dtool_TypedSkel._PyType.tp_bases = PyTuple_Pack(1, (PyTypeObject *)Dtool_Ptr_TypedObject);
    PyObject *dict = PyDict_New();
    Dtool_TypedSkel._PyType.tp_dict = dict;
    PyDict_SetItemString(dict, "DtoolClassDict", dict);
    if (PyType_Ready((PyTypeObject *)&Dtool_TypedSkel) < 0) {
      Dtool_Raise_TypeError("PyType_Ready(TypedSkel)");
      return;
    }
    Py_INCREF((PyTypeObject *)&Dtool_TypedSkel);
  }
}


/**
 * Module Object Linker ..
 */
void Dtool_libp3skel_RegisterTypes() {
#ifndef LINK_ALL_STATIC
  RegisterNamedClass("BasicSkel", Dtool_BasicSkel);
#endif
  Dtool_TypedSkel._type = TypedSkel::get_class_type();
  RegisterRuntimeTypedClass(Dtool_TypedSkel);
}

void Dtool_libp3skel_ResolveExternals() {
#ifndef LINK_ALL_STATIC
  // Resolve externally imported types.
  Dtool_Ptr_TypedObject = LookupRuntimeTypedClass(TypedObject::get_class_type());
  Dtool_Ptr_TypeHandle = LookupNamedClass("TypeHandle");
#endif
}

void Dtool_libp3skel_BuildInstants(PyObject *module) {
  (void) module;
  // BasicSkel
  Dtool_PyModuleClassInit_BasicSkel(module);
  PyModule_AddObject(module, "BasicSkel", (PyObject *)&Dtool_BasicSkel);
  // TypedSkel
  Dtool_PyModuleClassInit_TypedSkel(module);
  PyModule_AddObject(module, "TypedSkel", (PyObject *)&Dtool_TypedSkel);
}

static PyMethodDef python_simple_funcs[] = {
  // Support Function For Dtool_types ... for now in each module ??
  {"Dtool_BorrowThisReference", &Dtool_BorrowThisReference, METH_VARARGS, "Used to borrow 'this' pointer (to, from)\nAssumes no ownership."},
  {"Dtool_AddToDictionary", &Dtool_AddToDictionary, METH_VARARGS, "Used to add items into a tp_dict"},
  {NULL, NULL, 0, NULL}
};

struct LibraryDef libp3skel_moddef = {python_simple_funcs};
static InterrogateModuleDef _in_module_def = {
  1478213814,  /* file_identifier */
  "libp3skel",  /* library_name */
  "5lWe",  /* library_hash_name */
  "panda3d.skel",  /* module_name */
  "libp3skel.in",  /* database_filename */
  (InterrogateUniqueNameDef *)0,  /* unique_names */
  0,  /* num_unique_names */
  (void **)0,  /* fptrs */
  0,  /* num_fptrs */
  1,  /* first_index */
  39  /* next_index */
};

Configure(_in_configure_libp3skel);
ConfigureFn(_in_configure_libp3skel) {
  interrogate_request_module(&_in_module_def);
}

