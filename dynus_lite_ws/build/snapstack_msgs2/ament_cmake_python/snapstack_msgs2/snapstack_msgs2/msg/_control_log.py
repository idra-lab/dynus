# generated from rosidl_generator_py/resource/_idl.py.em
# with input from snapstack_msgs2:msg/ControlLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlLog(type):
    """Metaclass of message 'ControlLog'."""

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
                'snapstack_msgs2.msg.ControlLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_log

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


class ControlLog(metaclass=Metaclass_ControlLog):
    """Message class 'ControlLog'."""

    __slots__ = [
        '_header',
        '_p',
        '_p_ref',
        '_p_err',
        '_p_err_int',
        '_v',
        '_v_ref',
        '_v_err',
        '_a_ff',
        '_a_fb',
        '_j_ff',
        '_j_fb',
        '_q',
        '_q_ref',
        '_rpy',
        '_rpy_ref',
        '_w',
        '_w_ref',
        '_f_w',
        '_power',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'p': 'geometry_msgs/Vector3',
        'p_ref': 'geometry_msgs/Vector3',
        'p_err': 'geometry_msgs/Vector3',
        'p_err_int': 'geometry_msgs/Vector3',
        'v': 'geometry_msgs/Vector3',
        'v_ref': 'geometry_msgs/Vector3',
        'v_err': 'geometry_msgs/Vector3',
        'a_ff': 'geometry_msgs/Vector3',
        'a_fb': 'geometry_msgs/Vector3',
        'j_ff': 'geometry_msgs/Vector3',
        'j_fb': 'geometry_msgs/Vector3',
        'q': 'geometry_msgs/Quaternion',
        'q_ref': 'geometry_msgs/Quaternion',
        'rpy': 'geometry_msgs/Vector3',
        'rpy_ref': 'geometry_msgs/Vector3',
        'w': 'geometry_msgs/Vector3',
        'w_ref': 'geometry_msgs/Vector3',
        'f_w': 'geometry_msgs/Vector3',
        'power': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.p = kwargs.get('p', Vector3())
        from geometry_msgs.msg import Vector3
        self.p_ref = kwargs.get('p_ref', Vector3())
        from geometry_msgs.msg import Vector3
        self.p_err = kwargs.get('p_err', Vector3())
        from geometry_msgs.msg import Vector3
        self.p_err_int = kwargs.get('p_err_int', Vector3())
        from geometry_msgs.msg import Vector3
        self.v = kwargs.get('v', Vector3())
        from geometry_msgs.msg import Vector3
        self.v_ref = kwargs.get('v_ref', Vector3())
        from geometry_msgs.msg import Vector3
        self.v_err = kwargs.get('v_err', Vector3())
        from geometry_msgs.msg import Vector3
        self.a_ff = kwargs.get('a_ff', Vector3())
        from geometry_msgs.msg import Vector3
        self.a_fb = kwargs.get('a_fb', Vector3())
        from geometry_msgs.msg import Vector3
        self.j_ff = kwargs.get('j_ff', Vector3())
        from geometry_msgs.msg import Vector3
        self.j_fb = kwargs.get('j_fb', Vector3())
        from geometry_msgs.msg import Quaternion
        self.q = kwargs.get('q', Quaternion())
        from geometry_msgs.msg import Quaternion
        self.q_ref = kwargs.get('q_ref', Quaternion())
        from geometry_msgs.msg import Vector3
        self.rpy = kwargs.get('rpy', Vector3())
        from geometry_msgs.msg import Vector3
        self.rpy_ref = kwargs.get('rpy_ref', Vector3())
        from geometry_msgs.msg import Vector3
        self.w = kwargs.get('w', Vector3())
        from geometry_msgs.msg import Vector3
        self.w_ref = kwargs.get('w_ref', Vector3())
        from geometry_msgs.msg import Vector3
        self.f_w = kwargs.get('f_w', Vector3())
        self.power = kwargs.get('power', bool())

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
        if self.p != other.p:
            return False
        if self.p_ref != other.p_ref:
            return False
        if self.p_err != other.p_err:
            return False
        if self.p_err_int != other.p_err_int:
            return False
        if self.v != other.v:
            return False
        if self.v_ref != other.v_ref:
            return False
        if self.v_err != other.v_err:
            return False
        if self.a_ff != other.a_ff:
            return False
        if self.a_fb != other.a_fb:
            return False
        if self.j_ff != other.j_ff:
            return False
        if self.j_fb != other.j_fb:
            return False
        if self.q != other.q:
            return False
        if self.q_ref != other.q_ref:
            return False
        if self.rpy != other.rpy:
            return False
        if self.rpy_ref != other.rpy_ref:
            return False
        if self.w != other.w:
            return False
        if self.w_ref != other.w_ref:
            return False
        if self.f_w != other.f_w:
            return False
        if self.power != other.power:
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
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'p' field must be a sub message of type 'Vector3'"
        self._p = value

    @builtins.property
    def p_ref(self):
        """Message field 'p_ref'."""
        return self._p_ref

    @p_ref.setter
    def p_ref(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'p_ref' field must be a sub message of type 'Vector3'"
        self._p_ref = value

    @builtins.property
    def p_err(self):
        """Message field 'p_err'."""
        return self._p_err

    @p_err.setter
    def p_err(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'p_err' field must be a sub message of type 'Vector3'"
        self._p_err = value

    @builtins.property
    def p_err_int(self):
        """Message field 'p_err_int'."""
        return self._p_err_int

    @p_err_int.setter
    def p_err_int(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'p_err_int' field must be a sub message of type 'Vector3'"
        self._p_err_int = value

    @builtins.property
    def v(self):
        """Message field 'v'."""
        return self._v

    @v.setter
    def v(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v' field must be a sub message of type 'Vector3'"
        self._v = value

    @builtins.property
    def v_ref(self):
        """Message field 'v_ref'."""
        return self._v_ref

    @v_ref.setter
    def v_ref(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v_ref' field must be a sub message of type 'Vector3'"
        self._v_ref = value

    @builtins.property
    def v_err(self):
        """Message field 'v_err'."""
        return self._v_err

    @v_err.setter
    def v_err(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v_err' field must be a sub message of type 'Vector3'"
        self._v_err = value

    @builtins.property
    def a_ff(self):
        """Message field 'a_ff'."""
        return self._a_ff

    @a_ff.setter
    def a_ff(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'a_ff' field must be a sub message of type 'Vector3'"
        self._a_ff = value

    @builtins.property
    def a_fb(self):
        """Message field 'a_fb'."""
        return self._a_fb

    @a_fb.setter
    def a_fb(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'a_fb' field must be a sub message of type 'Vector3'"
        self._a_fb = value

    @builtins.property
    def j_ff(self):
        """Message field 'j_ff'."""
        return self._j_ff

    @j_ff.setter
    def j_ff(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'j_ff' field must be a sub message of type 'Vector3'"
        self._j_ff = value

    @builtins.property
    def j_fb(self):
        """Message field 'j_fb'."""
        return self._j_fb

    @j_fb.setter
    def j_fb(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'j_fb' field must be a sub message of type 'Vector3'"
        self._j_fb = value

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'q' field must be a sub message of type 'Quaternion'"
        self._q = value

    @builtins.property
    def q_ref(self):
        """Message field 'q_ref'."""
        return self._q_ref

    @q_ref.setter
    def q_ref(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'q_ref' field must be a sub message of type 'Quaternion'"
        self._q_ref = value

    @builtins.property
    def rpy(self):
        """Message field 'rpy'."""
        return self._rpy

    @rpy.setter
    def rpy(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'rpy' field must be a sub message of type 'Vector3'"
        self._rpy = value

    @builtins.property
    def rpy_ref(self):
        """Message field 'rpy_ref'."""
        return self._rpy_ref

    @rpy_ref.setter
    def rpy_ref(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'rpy_ref' field must be a sub message of type 'Vector3'"
        self._rpy_ref = value

    @builtins.property
    def w(self):
        """Message field 'w'."""
        return self._w

    @w.setter
    def w(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'w' field must be a sub message of type 'Vector3'"
        self._w = value

    @builtins.property
    def w_ref(self):
        """Message field 'w_ref'."""
        return self._w_ref

    @w_ref.setter
    def w_ref(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'w_ref' field must be a sub message of type 'Vector3'"
        self._w_ref = value

    @builtins.property
    def f_w(self):
        """Message field 'f_w'."""
        return self._f_w

    @f_w.setter
    def f_w(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'f_w' field must be a sub message of type 'Vector3'"
        self._f_w = value

    @builtins.property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power' field must be of type 'bool'"
        self._power = value
