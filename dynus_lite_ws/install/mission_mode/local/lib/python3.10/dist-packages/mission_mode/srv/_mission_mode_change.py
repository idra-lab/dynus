# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_mode:srv/MissionModeChange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionModeChange_Request(type):
    """Metaclass of message 'MissionModeChange_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'START': 1,
        'END': 2,
        'KILL': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_mode')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_mode.srv.MissionModeChange_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mission_mode_change__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mission_mode_change__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mission_mode_change__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mission_mode_change__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mission_mode_change__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'START': cls.__constants['START'],
            'END': cls.__constants['END'],
            'KILL': cls.__constants['KILL'],
        }

    @property
    def START(self):
        """Message constant 'START'."""
        return Metaclass_MissionModeChange_Request.__constants['START']

    @property
    def END(self):
        """Message constant 'END'."""
        return Metaclass_MissionModeChange_Request.__constants['END']

    @property
    def KILL(self):
        """Message constant 'KILL'."""
        return Metaclass_MissionModeChange_Request.__constants['KILL']


class MissionModeChange_Request(metaclass=Metaclass_MissionModeChange_Request):
    """
    Message class 'MissionModeChange_Request'.

    Constants:
      START
      END
      KILL
    """

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())

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
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MissionModeChange_Response(type):
    """Metaclass of message 'MissionModeChange_Response'."""

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
            module = import_type_support('mission_mode')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_mode.srv.MissionModeChange_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mission_mode_change__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mission_mode_change__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mission_mode_change__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mission_mode_change__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mission_mode_change__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionModeChange_Response(metaclass=Metaclass_MissionModeChange_Response):
    """Message class 'MissionModeChange_Response'."""

    __slots__ = [
        '_received',
    ]

    _fields_and_field_types = {
        'received': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.received = kwargs.get('received', bool())

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
        if self.received != other.received:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def received(self):
        """Message field 'received'."""
        return self._received

    @received.setter
    def received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'received' field must be of type 'bool'"
        self._received = value


class Metaclass_MissionModeChange(type):
    """Metaclass of service 'MissionModeChange'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_mode')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_mode.srv.MissionModeChange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mission_mode_change

            from mission_mode.srv import _mission_mode_change
            if _mission_mode_change.Metaclass_MissionModeChange_Request._TYPE_SUPPORT is None:
                _mission_mode_change.Metaclass_MissionModeChange_Request.__import_type_support__()
            if _mission_mode_change.Metaclass_MissionModeChange_Response._TYPE_SUPPORT is None:
                _mission_mode_change.Metaclass_MissionModeChange_Response.__import_type_support__()


class MissionModeChange(metaclass=Metaclass_MissionModeChange):
    from mission_mode.srv._mission_mode_change import MissionModeChange_Request as Request
    from mission_mode.srv._mission_mode_change import MissionModeChange_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
