# generated from rosidl_generator_py/resource/_idl.py.em
# with input from snapstack_msgs2:msg/Motors.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motors(type):
    """Metaclass of message 'Motors'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('snapstack_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'snapstack_msgs2.msg.Motors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motors

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motors(metaclass=Metaclass_Motors):
    """Message class 'Motors'."""

    __slots__ = [
        '_header',
        '_m1',
        '_m2',
        '_m3',
        '_m4',
        '_m5',
        '_m6',
        '_m7',
        '_m8',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'm1': 'double',
        'm2': 'double',
        'm3': 'double',
        'm4': 'double',
        'm5': 'double',
        'm6': 'double',
        'm7': 'double',
        'm8': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.m1 = kwargs.get('m1', float())
        self.m2 = kwargs.get('m2', float())
        self.m3 = kwargs.get('m3', float())
        self.m4 = kwargs.get('m4', float())
        self.m5 = kwargs.get('m5', float())
        self.m6 = kwargs.get('m6', float())
        self.m7 = kwargs.get('m7', float())
        self.m8 = kwargs.get('m8', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.m1 != other.m1:
            return False
        if self.m2 != other.m2:
            return False
        if self.m3 != other.m3:
            return False
        if self.m4 != other.m4:
            return False
        if self.m5 != other.m5:
            return False
        if self.m6 != other.m6:
            return False
        if self.m7 != other.m7:
            return False
        if self.m8 != other.m8:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def m1(self):
        """Message field 'm1'."""
        return self._m1

    @m1.setter
    def m1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m1 = value

    @builtins.property
    def m2(self):
        """Message field 'm2'."""
        return self._m2

    @m2.setter
    def m2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m2 = value

    @builtins.property
    def m3(self):
        """Message field 'm3'."""
        return self._m3

    @m3.setter
    def m3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m3 = value

    @builtins.property
    def m4(self):
        """Message field 'm4'."""
        return self._m4

    @m4.setter
    def m4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m4 = value

    @builtins.property
    def m5(self):
        """Message field 'm5'."""
        return self._m5

    @m5.setter
    def m5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m5 = value

    @builtins.property
    def m6(self):
        """Message field 'm6'."""
        return self._m6

    @m6.setter
    def m6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm6' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm6' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m6 = value

    @builtins.property
    def m7(self):
        """Message field 'm7'."""
        return self._m7

    @m7.setter
    def m7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm7' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm7' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m7 = value

    @builtins.property
    def m8(self):
        """Message field 'm8'."""
        return self._m8

    @m8.setter
    def m8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm8' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm8' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m8 = value
