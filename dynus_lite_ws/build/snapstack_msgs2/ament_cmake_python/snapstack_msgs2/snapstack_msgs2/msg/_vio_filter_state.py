# generated from rosidl_generator_py/resource/_idl.py.em
# with input from snapstack_msgs2:msg/VioFilterState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_cov'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VioFilterState(type):
    """Metaclass of message 'VioFilterState'."""

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
                'snapstack_msgs2.msg.VioFilterState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vio_filter_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vio_filter_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vio_filter_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vio_filter_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vio_filter_state

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

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


class VioFilterState(metaclass=Metaclass_VioFilterState):
    """Message class 'VioFilterState'."""

    __slots__ = [
        '_header',
        '_pose',
        '_twist',
        '_bw',
        '_ba',
        '_extrinsics',
        '_accel_meas',
        '_n',
        '_error_cov',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pose': 'geometry_msgs/Pose',
        'twist': 'geometry_msgs/Twist',
        'bw': 'geometry_msgs/Vector3',
        'ba': 'geometry_msgs/Vector3',
        'extrinsics': 'geometry_msgs/Pose',
        'accel_meas': 'geometry_msgs/Vector3',
        'n': 'int32',
        'error_cov': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.twist = kwargs.get('twist', Twist())
        from geometry_msgs.msg import Vector3
        self.bw = kwargs.get('bw', Vector3())
        from geometry_msgs.msg import Vector3
        self.ba = kwargs.get('ba', Vector3())
        from geometry_msgs.msg import Pose
        self.extrinsics = kwargs.get('extrinsics', Pose())
        from geometry_msgs.msg import Vector3
        self.accel_meas = kwargs.get('accel_meas', Vector3())
        self.n = kwargs.get('n', int())
        self.error_cov = array.array('f', kwargs.get('error_cov', []))

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
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        if self.bw != other.bw:
            return False
        if self.ba != other.ba:
            return False
        if self.extrinsics != other.extrinsics:
            return False
        if self.accel_meas != other.accel_meas:
            return False
        if self.n != other.n:
            return False
        if self.error_cov != other.error_cov:
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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'twist' field must be a sub message of type 'Twist'"
        self._twist = value

    @builtins.property
    def bw(self):
        """Message field 'bw'."""
        return self._bw

    @bw.setter
    def bw(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'bw' field must be a sub message of type 'Vector3'"
        self._bw = value

    @builtins.property
    def ba(self):
        """Message field 'ba'."""
        return self._ba

    @ba.setter
    def ba(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'ba' field must be a sub message of type 'Vector3'"
        self._ba = value

    @builtins.property
    def extrinsics(self):
        """Message field 'extrinsics'."""
        return self._extrinsics

    @extrinsics.setter
    def extrinsics(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'extrinsics' field must be a sub message of type 'Pose'"
        self._extrinsics = value

    @builtins.property
    def accel_meas(self):
        """Message field 'accel_meas'."""
        return self._accel_meas

    @accel_meas.setter
    def accel_meas(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'accel_meas' field must be a sub message of type 'Vector3'"
        self._accel_meas = value

    @builtins.property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n' field must be an integer in [-2147483648, 2147483647]"
        self._n = value

    @builtins.property
    def error_cov(self):
        """Message field 'error_cov'."""
        return self._error_cov

    @error_cov.setter
    def error_cov(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'error_cov' array.array() must have the type code of 'f'"
            self._error_cov = value
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
                "The 'error_cov' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._error_cov = array.array('f', value)
