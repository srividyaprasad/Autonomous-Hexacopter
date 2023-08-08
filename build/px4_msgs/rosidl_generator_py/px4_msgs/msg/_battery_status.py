# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/BatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'voltage_cell_v'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryStatus(type):
    """Metaclass of message 'BatteryStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BATTERY_SOURCE_POWER_MODULE': 0,
        'BATTERY_SOURCE_EXTERNAL': 1,
        'BATTERY_SOURCE_ESCS': 2,
        'BATTERY_WARNING_NONE': 0,
        'BATTERY_WARNING_LOW': 1,
        'BATTERY_WARNING_CRITICAL': 2,
        'BATTERY_WARNING_EMERGENCY': 3,
        'BATTERY_WARNING_FAILED': 4,
        'MAX_INSTANCES': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.BatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BATTERY_SOURCE_POWER_MODULE': cls.__constants['BATTERY_SOURCE_POWER_MODULE'],
            'BATTERY_SOURCE_EXTERNAL': cls.__constants['BATTERY_SOURCE_EXTERNAL'],
            'BATTERY_SOURCE_ESCS': cls.__constants['BATTERY_SOURCE_ESCS'],
            'BATTERY_WARNING_NONE': cls.__constants['BATTERY_WARNING_NONE'],
            'BATTERY_WARNING_LOW': cls.__constants['BATTERY_WARNING_LOW'],
            'BATTERY_WARNING_CRITICAL': cls.__constants['BATTERY_WARNING_CRITICAL'],
            'BATTERY_WARNING_EMERGENCY': cls.__constants['BATTERY_WARNING_EMERGENCY'],
            'BATTERY_WARNING_FAILED': cls.__constants['BATTERY_WARNING_FAILED'],
            'MAX_INSTANCES': cls.__constants['MAX_INSTANCES'],
        }

    @property
    def BATTERY_SOURCE_POWER_MODULE(self):
        """Message constant 'BATTERY_SOURCE_POWER_MODULE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_SOURCE_POWER_MODULE']

    @property
    def BATTERY_SOURCE_EXTERNAL(self):
        """Message constant 'BATTERY_SOURCE_EXTERNAL'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_SOURCE_EXTERNAL']

    @property
    def BATTERY_SOURCE_ESCS(self):
        """Message constant 'BATTERY_SOURCE_ESCS'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_SOURCE_ESCS']

    @property
    def BATTERY_WARNING_NONE(self):
        """Message constant 'BATTERY_WARNING_NONE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_NONE']

    @property
    def BATTERY_WARNING_LOW(self):
        """Message constant 'BATTERY_WARNING_LOW'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_LOW']

    @property
    def BATTERY_WARNING_CRITICAL(self):
        """Message constant 'BATTERY_WARNING_CRITICAL'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_CRITICAL']

    @property
    def BATTERY_WARNING_EMERGENCY(self):
        """Message constant 'BATTERY_WARNING_EMERGENCY'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_EMERGENCY']

    @property
    def BATTERY_WARNING_FAILED(self):
        """Message constant 'BATTERY_WARNING_FAILED'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_FAILED']

    @property
    def MAX_INSTANCES(self):
        """Message constant 'MAX_INSTANCES'."""
        return Metaclass_BatteryStatus.__constants['MAX_INSTANCES']


class BatteryStatus(metaclass=Metaclass_BatteryStatus):
    """
    Message class 'BatteryStatus'.

    Constants:
      BATTERY_SOURCE_POWER_MODULE
      BATTERY_SOURCE_EXTERNAL
      BATTERY_SOURCE_ESCS
      BATTERY_WARNING_NONE
      BATTERY_WARNING_LOW
      BATTERY_WARNING_CRITICAL
      BATTERY_WARNING_EMERGENCY
      BATTERY_WARNING_FAILED
      MAX_INSTANCES
    """

    __slots__ = [
        '_timestamp',
        '_voltage_v',
        '_voltage_filtered_v',
        '_current_a',
        '_current_filtered_a',
        '_average_current_a',
        '_discharged_mah',
        '_remaining',
        '_scale',
        '_temperature',
        '_cell_count',
        '_connected',
        '_source',
        '_priority',
        '_capacity',
        '_cycle_count',
        '_run_time_to_empty',
        '_average_time_to_empty',
        '_serial_number',
        '_manufacture_date',
        '_state_of_health',
        '_max_error',
        '_id',
        '_interface_error',
        '_voltage_cell_v',
        '_max_cell_voltage_delta',
        '_is_powering_off',
        '_warning',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'voltage_v': 'float',
        'voltage_filtered_v': 'float',
        'current_a': 'float',
        'current_filtered_a': 'float',
        'average_current_a': 'float',
        'discharged_mah': 'float',
        'remaining': 'float',
        'scale': 'float',
        'temperature': 'float',
        'cell_count': 'int32',
        'connected': 'boolean',
        'source': 'uint8',
        'priority': 'uint8',
        'capacity': 'uint16',
        'cycle_count': 'uint16',
        'run_time_to_empty': 'uint16',
        'average_time_to_empty': 'uint16',
        'serial_number': 'uint16',
        'manufacture_date': 'uint16',
        'state_of_health': 'uint16',
        'max_error': 'uint16',
        'id': 'uint8',
        'interface_error': 'uint16',
        'voltage_cell_v': 'float[10]',
        'max_cell_voltage_delta': 'float',
        'is_powering_off': 'boolean',
        'warning': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 10),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.voltage_v = kwargs.get('voltage_v', float())
        self.voltage_filtered_v = kwargs.get('voltage_filtered_v', float())
        self.current_a = kwargs.get('current_a', float())
        self.current_filtered_a = kwargs.get('current_filtered_a', float())
        self.average_current_a = kwargs.get('average_current_a', float())
        self.discharged_mah = kwargs.get('discharged_mah', float())
        self.remaining = kwargs.get('remaining', float())
        self.scale = kwargs.get('scale', float())
        self.temperature = kwargs.get('temperature', float())
        self.cell_count = kwargs.get('cell_count', int())
        self.connected = kwargs.get('connected', bool())
        self.source = kwargs.get('source', int())
        self.priority = kwargs.get('priority', int())
        self.capacity = kwargs.get('capacity', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.run_time_to_empty = kwargs.get('run_time_to_empty', int())
        self.average_time_to_empty = kwargs.get('average_time_to_empty', int())
        self.serial_number = kwargs.get('serial_number', int())
        self.manufacture_date = kwargs.get('manufacture_date', int())
        self.state_of_health = kwargs.get('state_of_health', int())
        self.max_error = kwargs.get('max_error', int())
        self.id = kwargs.get('id', int())
        self.interface_error = kwargs.get('interface_error', int())
        if 'voltage_cell_v' not in kwargs:
            self.voltage_cell_v = numpy.zeros(10, dtype=numpy.float32)
        else:
            self.voltage_cell_v = numpy.array(kwargs.get('voltage_cell_v'), dtype=numpy.float32)
            assert self.voltage_cell_v.shape == (10, )
        self.max_cell_voltage_delta = kwargs.get('max_cell_voltage_delta', float())
        self.is_powering_off = kwargs.get('is_powering_off', bool())
        self.warning = kwargs.get('warning', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.voltage_v != other.voltage_v:
            return False
        if self.voltage_filtered_v != other.voltage_filtered_v:
            return False
        if self.current_a != other.current_a:
            return False
        if self.current_filtered_a != other.current_filtered_a:
            return False
        if self.average_current_a != other.average_current_a:
            return False
        if self.discharged_mah != other.discharged_mah:
            return False
        if self.remaining != other.remaining:
            return False
        if self.scale != other.scale:
            return False
        if self.temperature != other.temperature:
            return False
        if self.cell_count != other.cell_count:
            return False
        if self.connected != other.connected:
            return False
        if self.source != other.source:
            return False
        if self.priority != other.priority:
            return False
        if self.capacity != other.capacity:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.run_time_to_empty != other.run_time_to_empty:
            return False
        if self.average_time_to_empty != other.average_time_to_empty:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.manufacture_date != other.manufacture_date:
            return False
        if self.state_of_health != other.state_of_health:
            return False
        if self.max_error != other.max_error:
            return False
        if self.id != other.id:
            return False
        if self.interface_error != other.interface_error:
            return False
        if all(self.voltage_cell_v != other.voltage_cell_v):
            return False
        if self.max_cell_voltage_delta != other.max_cell_voltage_delta:
            return False
        if self.is_powering_off != other.is_powering_off:
            return False
        if self.warning != other.warning:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def voltage_v(self):
        """Message field 'voltage_v'."""
        return self._voltage_v

    @voltage_v.setter
    def voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_v' field must be of type 'float'"
        self._voltage_v = value

    @property
    def voltage_filtered_v(self):
        """Message field 'voltage_filtered_v'."""
        return self._voltage_filtered_v

    @voltage_filtered_v.setter
    def voltage_filtered_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_filtered_v' field must be of type 'float'"
        self._voltage_filtered_v = value

    @property
    def current_a(self):
        """Message field 'current_a'."""
        return self._current_a

    @current_a.setter
    def current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_a' field must be of type 'float'"
        self._current_a = value

    @property
    def current_filtered_a(self):
        """Message field 'current_filtered_a'."""
        return self._current_filtered_a

    @current_filtered_a.setter
    def current_filtered_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_filtered_a' field must be of type 'float'"
        self._current_filtered_a = value

    @property
    def average_current_a(self):
        """Message field 'average_current_a'."""
        return self._average_current_a

    @average_current_a.setter
    def average_current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average_current_a' field must be of type 'float'"
        self._average_current_a = value

    @property
    def discharged_mah(self):
        """Message field 'discharged_mah'."""
        return self._discharged_mah

    @discharged_mah.setter
    def discharged_mah(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'discharged_mah' field must be of type 'float'"
        self._discharged_mah = value

    @property
    def remaining(self):
        """Message field 'remaining'."""
        return self._remaining

    @remaining.setter
    def remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining' field must be of type 'float'"
        self._remaining = value

    @property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
        self._scale = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
        self._temperature = value

    @property
    def cell_count(self):
        """Message field 'cell_count'."""
        return self._cell_count

    @cell_count.setter
    def cell_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cell_count' field must be an integer in [-2147483648, 2147483647]"
        self._cell_count = value

    @property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'capacity' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'capacity' field must be an unsigned integer in [0, 65535]"
        self._capacity = value

    @property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cycle_count' field must be an unsigned integer in [0, 65535]"
        self._cycle_count = value

    @property
    def run_time_to_empty(self):
        """Message field 'run_time_to_empty'."""
        return self._run_time_to_empty

    @run_time_to_empty.setter
    def run_time_to_empty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'run_time_to_empty' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'run_time_to_empty' field must be an unsigned integer in [0, 65535]"
        self._run_time_to_empty = value

    @property
    def average_time_to_empty(self):
        """Message field 'average_time_to_empty'."""
        return self._average_time_to_empty

    @average_time_to_empty.setter
    def average_time_to_empty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'average_time_to_empty' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'average_time_to_empty' field must be an unsigned integer in [0, 65535]"
        self._average_time_to_empty = value

    @property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'serial_number' field must be an unsigned integer in [0, 65535]"
        self._serial_number = value

    @property
    def manufacture_date(self):
        """Message field 'manufacture_date'."""
        return self._manufacture_date

    @manufacture_date.setter
    def manufacture_date(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'manufacture_date' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'manufacture_date' field must be an unsigned integer in [0, 65535]"
        self._manufacture_date = value

    @property
    def state_of_health(self):
        """Message field 'state_of_health'."""
        return self._state_of_health

    @state_of_health.setter
    def state_of_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_health' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'state_of_health' field must be an unsigned integer in [0, 65535]"
        self._state_of_health = value

    @property
    def max_error(self):
        """Message field 'max_error'."""
        return self._max_error

    @max_error.setter
    def max_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_error' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_error' field must be an unsigned integer in [0, 65535]"
        self._max_error = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @property
    def interface_error(self):
        """Message field 'interface_error'."""
        return self._interface_error

    @interface_error.setter
    def interface_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interface_error' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'interface_error' field must be an unsigned integer in [0, 65535]"
        self._interface_error = value

    @property
    def voltage_cell_v(self):
        """Message field 'voltage_cell_v'."""
        return self._voltage_cell_v

    @voltage_cell_v.setter
    def voltage_cell_v(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'voltage_cell_v' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 10, \
                "The 'voltage_cell_v' numpy.ndarray() must have a size of 10"
            self._voltage_cell_v = value
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
                 len(value) == 10 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'voltage_cell_v' field must be a set or sequence with length 10 and each value of type 'float'"
        self._voltage_cell_v = numpy.array(value, dtype=numpy.float32)

    @property
    def max_cell_voltage_delta(self):
        """Message field 'max_cell_voltage_delta'."""
        return self._max_cell_voltage_delta

    @max_cell_voltage_delta.setter
    def max_cell_voltage_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_cell_voltage_delta' field must be of type 'float'"
        self._max_cell_voltage_delta = value

    @property
    def is_powering_off(self):
        """Message field 'is_powering_off'."""
        return self._is_powering_off

    @is_powering_off.setter
    def is_powering_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_powering_off' field must be of type 'bool'"
        self._is_powering_off = value

    @property
    def warning(self):
        """Message field 'warning'."""
        return self._warning

    @warning.setter
    def warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'warning' field must be an unsigned integer in [0, 255]"
        self._warning = value
