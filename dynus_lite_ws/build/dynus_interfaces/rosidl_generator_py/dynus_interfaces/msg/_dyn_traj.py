# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynus_interfaces:msg/DynTraj.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'bbox'
# Member 'ekf_cov_p'
# Member 'ekf_cov_q'
# Member 'ekf_cov_r'
# Member 'poly_cov'
# Member 'poly_coeffs_x'
# Member 'poly_coeffs_y'
# Member 'poly_coeffs_z'
# Member 'goal'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynTraj(type):
    """Metaclass of message 'DynTraj'."""

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
                'dynus_interfaces.msg.DynTraj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dyn_traj
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dyn_traj
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dyn_traj
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dyn_traj
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dyn_traj

            from dynus_interfaces.msg import PWPTraj
            if PWPTraj.__class__._TYPE_SUPPORT is None:
                PWPTraj.__class__.__import_type_support__()

            from dynus_interfaces.msg import QuinticPWPTraj
            if QuinticPWPTraj.__class__._TYPE_SUPPORT is None:
                QuinticPWPTraj.__class__.__import_type_support__()

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


class DynTraj(metaclass=Metaclass_DynTraj):
    """Message class 'DynTraj'."""

    __slots__ = [
        '_header',
        '_bbox',
        '_id',
        '_pwp',
        '_quintic_pwp',
        '_ekf_cov_p',
        '_ekf_cov_q',
        '_ekf_cov_r',
        '_poly_cov',
        '_poly_coeffs_x',
        '_poly_coeffs_y',
        '_poly_coeffs_z',
        '_poly_start_time',
        '_poly_end_time',
        '_function',
        '_velocity',
        '_pos',
        '_is_agent',
        '_goal',
        '_mode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bbox': 'sequence<float>',
        'id': 'int32',
        'pwp': 'dynus_interfaces/PWPTraj',
        'quintic_pwp': 'dynus_interfaces/QuinticPWPTraj',
        'ekf_cov_p': 'sequence<float>',
        'ekf_cov_q': 'sequence<float>',
        'ekf_cov_r': 'sequence<float>',
        'poly_cov': 'sequence<float>',
        'poly_coeffs_x': 'sequence<float>',
        'poly_coeffs_y': 'sequence<float>',
        'poly_coeffs_z': 'sequence<float>',
        'poly_start_time': 'double',
        'poly_end_time': 'double',
        'function': 'sequence<string>',
        'velocity': 'sequence<string>',
        'pos': 'geometry_msgs/Vector3',
        'is_agent': 'boolean',
        'goal': 'sequence<float>',
        'mode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dynus_interfaces', 'msg'], 'PWPTraj'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dynus_interfaces', 'msg'], 'QuinticPWPTraj'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.bbox = array.array('f', kwargs.get('bbox', []))
        self.id = kwargs.get('id', int())
        from dynus_interfaces.msg import PWPTraj
        self.pwp = kwargs.get('pwp', PWPTraj())
        from dynus_interfaces.msg import QuinticPWPTraj
        self.quintic_pwp = kwargs.get('quintic_pwp', QuinticPWPTraj())
        self.ekf_cov_p = array.array('f', kwargs.get('ekf_cov_p', []))
        self.ekf_cov_q = array.array('f', kwargs.get('ekf_cov_q', []))
        self.ekf_cov_r = array.array('f', kwargs.get('ekf_cov_r', []))
        self.poly_cov = array.array('f', kwargs.get('poly_cov', []))
        self.poly_coeffs_x = array.array('f', kwargs.get('poly_coeffs_x', []))
        self.poly_coeffs_y = array.array('f', kwargs.get('poly_coeffs_y', []))
        self.poly_coeffs_z = array.array('f', kwargs.get('poly_coeffs_z', []))
        self.poly_start_time = kwargs.get('poly_start_time', float())
        self.poly_end_time = kwargs.get('poly_end_time', float())
        self.function = kwargs.get('function', [])
        self.velocity = kwargs.get('velocity', [])
        from geometry_msgs.msg import Vector3
        self.pos = kwargs.get('pos', Vector3())
        self.is_agent = kwargs.get('is_agent', bool())
        self.goal = array.array('f', kwargs.get('goal', []))
        self.mode = kwargs.get('mode', str())

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
        if self.bbox != other.bbox:
            return False
        if self.id != other.id:
            return False
        if self.pwp != other.pwp:
            return False
        if self.quintic_pwp != other.quintic_pwp:
            return False
        if self.ekf_cov_p != other.ekf_cov_p:
            return False
        if self.ekf_cov_q != other.ekf_cov_q:
            return False
        if self.ekf_cov_r != other.ekf_cov_r:
            return False
        if self.poly_cov != other.poly_cov:
            return False
        if self.poly_coeffs_x != other.poly_coeffs_x:
            return False
        if self.poly_coeffs_y != other.poly_coeffs_y:
            return False
        if self.poly_coeffs_z != other.poly_coeffs_z:
            return False
        if self.poly_start_time != other.poly_start_time:
            return False
        if self.poly_end_time != other.poly_end_time:
            return False
        if self.function != other.function:
            return False
        if self.velocity != other.velocity:
            return False
        if self.pos != other.pos:
            return False
        if self.is_agent != other.is_agent:
            return False
        if self.goal != other.goal:
            return False
        if self.mode != other.mode:
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
    def bbox(self):
        """Message field 'bbox'."""
        return self._bbox

    @bbox.setter
    def bbox(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'bbox' array.array() must have the type code of 'f'"
            self._bbox = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'bbox' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._bbox = array.array('f', value)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def pwp(self):
        """Message field 'pwp'."""
        return self._pwp

    @pwp.setter
    def pwp(self, value):
        if __debug__:
            from dynus_interfaces.msg import PWPTraj
            assert \
                isinstance(value, PWPTraj), \
                "The 'pwp' field must be a sub message of type 'PWPTraj'"
        self._pwp = value

    @builtins.property
    def quintic_pwp(self):
        """Message field 'quintic_pwp'."""
        return self._quintic_pwp

    @quintic_pwp.setter
    def quintic_pwp(self, value):
        if __debug__:
            from dynus_interfaces.msg import QuinticPWPTraj
            assert \
                isinstance(value, QuinticPWPTraj), \
                "The 'quintic_pwp' field must be a sub message of type 'QuinticPWPTraj'"
        self._quintic_pwp = value

    @builtins.property
    def ekf_cov_p(self):
        """Message field 'ekf_cov_p'."""
        return self._ekf_cov_p

    @ekf_cov_p.setter
    def ekf_cov_p(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ekf_cov_p' array.array() must have the type code of 'f'"
            self._ekf_cov_p = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ekf_cov_p' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ekf_cov_p = array.array('f', value)

    @builtins.property
    def ekf_cov_q(self):
        """Message field 'ekf_cov_q'."""
        return self._ekf_cov_q

    @ekf_cov_q.setter
    def ekf_cov_q(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ekf_cov_q' array.array() must have the type code of 'f'"
            self._ekf_cov_q = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ekf_cov_q' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ekf_cov_q = array.array('f', value)

    @builtins.property
    def ekf_cov_r(self):
        """Message field 'ekf_cov_r'."""
        return self._ekf_cov_r

    @ekf_cov_r.setter
    def ekf_cov_r(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ekf_cov_r' array.array() must have the type code of 'f'"
            self._ekf_cov_r = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ekf_cov_r' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ekf_cov_r = array.array('f', value)

    @builtins.property
    def poly_cov(self):
        """Message field 'poly_cov'."""
        return self._poly_cov

    @poly_cov.setter
    def poly_cov(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'poly_cov' array.array() must have the type code of 'f'"
            self._poly_cov = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'poly_cov' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._poly_cov = array.array('f', value)

    @builtins.property
    def poly_coeffs_x(self):
        """Message field 'poly_coeffs_x'."""
        return self._poly_coeffs_x

    @poly_coeffs_x.setter
    def poly_coeffs_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'poly_coeffs_x' array.array() must have the type code of 'f'"
            self._poly_coeffs_x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'poly_coeffs_x' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._poly_coeffs_x = array.array('f', value)

    @builtins.property
    def poly_coeffs_y(self):
        """Message field 'poly_coeffs_y'."""
        return self._poly_coeffs_y

    @poly_coeffs_y.setter
    def poly_coeffs_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'poly_coeffs_y' array.array() must have the type code of 'f'"
            self._poly_coeffs_y = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'poly_coeffs_y' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._poly_coeffs_y = array.array('f', value)

    @builtins.property
    def poly_coeffs_z(self):
        """Message field 'poly_coeffs_z'."""
        return self._poly_coeffs_z

    @poly_coeffs_z.setter
    def poly_coeffs_z(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'poly_coeffs_z' array.array() must have the type code of 'f'"
            self._poly_coeffs_z = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'poly_coeffs_z' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._poly_coeffs_z = array.array('f', value)

    @builtins.property
    def poly_start_time(self):
        """Message field 'poly_start_time'."""
        return self._poly_start_time

    @poly_start_time.setter
    def poly_start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'poly_start_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'poly_start_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._poly_start_time = value

    @builtins.property
    def poly_end_time(self):
        """Message field 'poly_end_time'."""
        return self._poly_end_time

    @poly_end_time.setter
    def poly_end_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'poly_end_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'poly_end_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._poly_end_time = value

    @builtins.property
    def function(self):
        """Message field 'function'."""
        return self._function

    @function.setter
    def function(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'function' field must be a set or sequence and each value of type 'str'"
        self._function = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'velocity' field must be a set or sequence and each value of type 'str'"
        self._velocity = value

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'pos' field must be a sub message of type 'Vector3'"
        self._pos = value

    @builtins.property
    def is_agent(self):
        """Message field 'is_agent'."""
        return self._is_agent

    @is_agent.setter
    def is_agent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_agent' field must be of type 'bool'"
        self._is_agent = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'goal' array.array() must have the type code of 'f'"
            self._goal = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'goal' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._goal = array.array('f', value)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value
