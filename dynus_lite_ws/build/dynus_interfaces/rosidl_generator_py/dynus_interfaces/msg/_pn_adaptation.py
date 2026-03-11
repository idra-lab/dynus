# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynus_interfaces:msg/PNAdaptation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PNAdaptation(type):
    """Metaclass of message 'PNAdaptation'."""

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
            module = import_type_support('dynus_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynus_interfaces.msg.PNAdaptation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pn_adaptation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pn_adaptation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pn_adaptation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pn_adaptation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pn_adaptation

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


class PNAdaptation(metaclass=Metaclass_PNAdaptation):
    """Message class 'PNAdaptation'."""

    __slots__ = [
        '_header',
        '_old_n',
        '_new_n',
        '_old_p',
        '_new_p',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'old_n': 'int32',
        'new_n': 'int32',
        'old_p': 'int32',
        'new_p': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.old_n = kwargs.get('old_n', int())
        self.new_n = kwargs.get('new_n', int())
        self.old_p = kwargs.get('old_p', int())
        self.new_p = kwargs.get('new_p', int())

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
        if self.old_n != other.old_n:
            return False
        if self.new_n != other.new_n:
            return False
        if self.old_p != other.old_p:
            return False
        if self.new_p != other.new_p:
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
    def old_n(self):
        """Message field 'old_n'."""
        return self._old_n

    @old_n.setter
    def old_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'old_n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'old_n' field must be an integer in [-2147483648, 2147483647]"
        self._old_n = value

    @builtins.property
    def new_n(self):
        """Message field 'new_n'."""
        return self._new_n

    @new_n.setter
    def new_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'new_n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'new_n' field must be an integer in [-2147483648, 2147483647]"
        self._new_n = value

    @builtins.property
    def old_p(self):
        """Message field 'old_p'."""
        return self._old_p

    @old_p.setter
    def old_p(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'old_p' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'old_p' field must be an integer in [-2147483648, 2147483647]"
        self._old_p = value

    @builtins.property
    def new_p(self):
        """Message field 'new_p'."""
        return self._new_p

    @new_p.setter
    def new_p(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'new_p' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'new_p' field must be an integer in [-2147483648, 2147483647]"
        self._new_p = value
