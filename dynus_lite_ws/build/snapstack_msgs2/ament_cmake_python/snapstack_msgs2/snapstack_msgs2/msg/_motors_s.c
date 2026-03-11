// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from snapstack_msgs2:msg/Motors.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "snapstack_msgs2/msg/detail/motors__struct.h"
#include "snapstack_msgs2/msg/detail/motors__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool snapstack_msgs2__msg__motors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("snapstack_msgs2.msg._motors.Motors", full_classname_dest, 34) == 0);
  }
  snapstack_msgs2__msg__Motors * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // m1
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m2
    PyObject * field = PyObject_GetAttrString(_pymsg, "m2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m3
    PyObject * field = PyObject_GetAttrString(_pymsg, "m3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m4
    PyObject * field = PyObject_GetAttrString(_pymsg, "m4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m5
    PyObject * field = PyObject_GetAttrString(_pymsg, "m5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m6
    PyObject * field = PyObject_GetAttrString(_pymsg, "m6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m7
    PyObject * field = PyObject_GetAttrString(_pymsg, "m7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m7 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m8
    PyObject * field = PyObject_GetAttrString(_pymsg, "m8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m8 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * snapstack_msgs2__msg__motors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("snapstack_msgs2.msg._motors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  snapstack_msgs2__msg__Motors * ros_message = (snapstack_msgs2__msg__Motors *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
