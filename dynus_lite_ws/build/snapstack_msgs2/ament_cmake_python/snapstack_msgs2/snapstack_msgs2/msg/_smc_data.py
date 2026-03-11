# generated from rosidl_generator_py/resource/_idl.py.em
# with input from snapstack_msgs2:msg/SMCData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SMCData(type):
    """Metaclass of message 'SMCData'."""

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
                'snapstack_msgs2.msg.SMCData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__smc_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__smc_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__smc_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__smc_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__smc_data

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class SMCData(metaclass=Metaclass_SMCData):
    """Message class 'SMCData'."""

    __slots__ = [
        '_header',
        '_q_des',
        '_q_act',
        '_q_err',
        '_w_des',
        '_w_act',
        '_w_err',
        '_s',
        '_integrator',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'q_des': 'geometry_msgs/Quaternion',
        'q_act': 'geometry_msgs/Quaternion',
        'q_err': 'geometry_msgs/Quaternion',
        'w_des': 'geometry_msgs/Vector3',
        'w_act': 'geometry_msgs/Vector3',
        'w_err': 'geometry_msgs/Vector3',
        's': 'geometry_msgs/Vector3',
        'integrator': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Quaternion
        self.q_des = kwargs.get('q_des', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.q_act = kwargs.get('q_act', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.q_err = kwargs.get('q_err', Quaternion())
        from geometry_msgs.msg import Vector3
        self.w_des = kwargs.get('w_des', Vector3())
        from geometry_msgs.msg import Vector3
        self.w_act = kwargs.get('w_act', Vector3())
        from geometry_msgs.msg import Vector3
        self.w_err = kwargs.get('w_err', Vector3())
        from geometry_msgs.msg import Vector3
        self.s = kwargs.get('s', Vector3())
        from geometry_msgs.msg import Vector3
        self.integrator = kwargs.get('integrator', Vector3())

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
        if self.q_des != other.q_des:
            return False
        if self.q_act != other.q_act:
            return False
        if self.q_err != other.q_err:
            return False
        if self.w_des != other.w_des:
            return False
        if self.w_act != other.w_act:
            return False
        if self.w_err != other.w_err:
            return False
        if self.s != other.s:
            return False
        if self.integrator != other.integrator:
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
    def q_des(self):
        """Message field 'q_des'."""
        return self._q_des

    @q_des.setter
    def q_des(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'q_des' field must be a sub message of type 'Quaternion'"
        self._q_des = value

    @builtins.property
    def q_act(self):
        """Message field 'q_act'."""
        return self._q_act

    @q_act.setter
    def q_act(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'q_act' field must be a sub message of type 'Quaternion'"
        self._q_act = value

    @builtins.property
    def q_err(self):
        """Message field 'q_err'."""
        return self._q_err

    @q_err.setter
    def q_err(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'q_err' field must be a sub message of type 'Quaternion'"
        self._q_err = value

    @builtins.property
    def w_des(self):
        """Message field 'w_des'."""
        return self._w_des

    @w_des.setter
    def w_des(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'w_des' field must be a sub message of type 'Vector3'"
        self._w_des = value

    @builtins.property
    def w_act(self):
        """Message field 'w_act'."""
        return self._w_act

    @w_act.setter
    def w_act(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'w_act' field must be a sub message of type 'Vector3'"
        self._w_act = value

    @builtins.property
    def w_err(self):
        """Message field 'w_err'."""
        return self._w_err

    @w_err.setter
    def w_err(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'w_err' field must be a sub message of type 'Vector3'"
        self._w_err = value

    @builtins.property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 's' field must be a sub message of type 'Vector3'"
        self._s = value

    @builtins.property
    def integrator(self):
        """Message field 'integrator'."""
        return self._integrator

    @integrator.setter
    def integrator(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'integrator' field must be a sub message of type 'Vector3'"
        self._integrator = value
