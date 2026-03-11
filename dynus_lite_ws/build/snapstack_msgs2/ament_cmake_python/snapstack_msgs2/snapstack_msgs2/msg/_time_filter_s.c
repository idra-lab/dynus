// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from snapstack_msgs2:msg/TimeFilter.idl
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
#include "snapstack_msgs2/msg/detail/time_filter__struct.h"
#include "snapstack_msgs2/msg/detail/time_filter__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool snapstack_msgs2__msg__time_filter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("snapstack_msgs2.msg._time_filter.TimeFilter", full_classname_dest, 43) == 0);
  }
  snapstack_msgs2__msg__TimeFilter * ros_message = _ros_message;
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
  {  // dt
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delayed_dt
    PyObject * field = PyObject_GetAttrString(_pymsg, "delayed_dt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delayed_dt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // skipped
    PyObject * field = PyObject_GetAttrString(_pymsg, "skipped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->skipped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // upper
    PyObject * field = PyObject_GetAttrString(_pymsg, "upper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->upper = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lower
    PyObject * field = PyObject_GetAttrString(_pymsg, "lower");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lower = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * snapstack_msgs2__msg__time_filter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TimeFilter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("snapstack_msgs2.msg._time_filter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimeFilter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  snapstack_msgs2__msg__TimeFilter * ros_message = (snapstack_msgs2__msg__TimeFilter *)raw_ros_message;
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
  {  // dt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delayed_dt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delayed_dt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delayed_dt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skipped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->skipped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skipped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // upper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->upper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "upper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lower
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lower);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lower", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
