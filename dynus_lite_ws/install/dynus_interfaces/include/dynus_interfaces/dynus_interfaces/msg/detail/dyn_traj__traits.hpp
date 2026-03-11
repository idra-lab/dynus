// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynus_interfaces:msg/DynTraj.idl
// generated code does not contain a copyright notice

#ifndef DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__TRAITS_HPP_
#define DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynus_interfaces/msg/detail/dyn_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pwp'
#include "dynus_interfaces/msg/detail/pwp_traj__traits.hpp"
// Member 'quintic_pwp'
#include "dynus_interfaces/msg/detail/quintic_pwp_traj__traits.hpp"
// Member 'pos'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace dynus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynTraj & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bbox
  {
    if (msg.bbox.size() == 0) {
      out << "bbox: []";
    } else {
      out << "bbox: [";
      size_t pending_items = msg.bbox.size();
      for (auto item : msg.bbox) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pwp
  {
    out << "pwp: ";
    to_flow_style_yaml(msg.pwp, out);
    out << ", ";
  }

  // member: quintic_pwp
  {
    out << "quintic_pwp: ";
    to_flow_style_yaml(msg.quintic_pwp, out);
    out << ", ";
  }

  // member: ekf_cov_p
  {
    if (msg.ekf_cov_p.size() == 0) {
      out << "ekf_cov_p: []";
    } else {
      out << "ekf_cov_p: [";
      size_t pending_items = msg.ekf_cov_p.size();
      for (auto item : msg.ekf_cov_p) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ekf_cov_q
  {
    if (msg.ekf_cov_q.size() == 0) {
      out << "ekf_cov_q: []";
    } else {
      out << "ekf_cov_q: [";
      size_t pending_items = msg.ekf_cov_q.size();
      for (auto item : msg.ekf_cov_q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ekf_cov_r
  {
    if (msg.ekf_cov_r.size() == 0) {
      out << "ekf_cov_r: []";
    } else {
      out << "ekf_cov_r: [";
      size_t pending_items = msg.ekf_cov_r.size();
      for (auto item : msg.ekf_cov_r) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poly_cov
  {
    if (msg.poly_cov.size() == 0) {
      out << "poly_cov: []";
    } else {
      out << "poly_cov: [";
      size_t pending_items = msg.poly_cov.size();
      for (auto item : msg.poly_cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poly_coeffs_x
  {
    if (msg.poly_coeffs_x.size() == 0) {
      out << "poly_coeffs_x: []";
    } else {
      out << "poly_coeffs_x: [";
      size_t pending_items = msg.poly_coeffs_x.size();
      for (auto item : msg.poly_coeffs_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poly_coeffs_y
  {
    if (msg.poly_coeffs_y.size() == 0) {
      out << "poly_coeffs_y: []";
    } else {
      out << "poly_coeffs_y: [";
      size_t pending_items = msg.poly_coeffs_y.size();
      for (auto item : msg.poly_coeffs_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poly_coeffs_z
  {
    if (msg.poly_coeffs_z.size() == 0) {
      out << "poly_coeffs_z: []";
    } else {
      out << "poly_coeffs_z: [";
      size_t pending_items = msg.poly_coeffs_z.size();
      for (auto item : msg.poly_coeffs_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poly_start_time
  {
    out << "poly_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.poly_start_time, out);
    out << ", ";
  }

  // member: poly_end_time
  {
    out << "poly_end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.poly_end_time, out);
    out << ", ";
  }

  // member: function
  {
    if (msg.function.size() == 0) {
      out << "function: []";
    } else {
      out << "function: [";
      size_t pending_items = msg.function.size();
      for (auto item : msg.function) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: is_agent
  {
    out << "is_agent: ";
    rosidl_generator_traits::value_to_yaml(msg.is_agent, out);
    out << ", ";
  }

  // member: goal
  {
    if (msg.goal.size() == 0) {
      out << "goal: []";
    } else {
      out << "goal: [";
      size_t pending_items = msg.goal.size();
      for (auto item : msg.goal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bbox.size() == 0) {
      out << "bbox: []\n";
    } else {
      out << "bbox:\n";
      for (auto item : msg.bbox) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pwp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwp:\n";
    to_block_style_yaml(msg.pwp, out, indentation + 2);
  }

  // member: quintic_pwp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quintic_pwp:\n";
    to_block_style_yaml(msg.quintic_pwp, out, indentation + 2);
  }

  // member: ekf_cov_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ekf_cov_p.size() == 0) {
      out << "ekf_cov_p: []\n";
    } else {
      out << "ekf_cov_p:\n";
      for (auto item : msg.ekf_cov_p) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ekf_cov_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ekf_cov_q.size() == 0) {
      out << "ekf_cov_q: []\n";
    } else {
      out << "ekf_cov_q:\n";
      for (auto item : msg.ekf_cov_q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ekf_cov_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ekf_cov_r.size() == 0) {
      out << "ekf_cov_r: []\n";
    } else {
      out << "ekf_cov_r:\n";
      for (auto item : msg.ekf_cov_r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_cov.size() == 0) {
      out << "poly_cov: []\n";
    } else {
      out << "poly_cov:\n";
      for (auto item : msg.poly_cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_coeffs_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_coeffs_x.size() == 0) {
      out << "poly_coeffs_x: []\n";
    } else {
      out << "poly_coeffs_x:\n";
      for (auto item : msg.poly_coeffs_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_coeffs_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_coeffs_y.size() == 0) {
      out << "poly_coeffs_y: []\n";
    } else {
      out << "poly_coeffs_y:\n";
      for (auto item : msg.poly_coeffs_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_coeffs_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poly_coeffs_z.size() == 0) {
      out << "poly_coeffs_z: []\n";
    } else {
      out << "poly_coeffs_z:\n";
      for (auto item : msg.poly_coeffs_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poly_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poly_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.poly_start_time, out);
    out << "\n";
  }

  // member: poly_end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poly_end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.poly_end_time, out);
    out << "\n";
  }

  // member: function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.function.size() == 0) {
      out << "function: []\n";
    } else {
      out << "function:\n";
      for (auto item : msg.function) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: is_agent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_agent: ";
    rosidl_generator_traits::value_to_yaml(msg.is_agent, out);
    out << "\n";
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal.size() == 0) {
      out << "goal: []\n";
    } else {
      out << "goal:\n";
      for (auto item : msg.goal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynTraj & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynus_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynus_interfaces::msg::DynTraj & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynus_interfaces::msg::DynTraj & msg)
{
  return dynus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynus_interfaces::msg::DynTraj>()
{
  return "dynus_interfaces::msg::DynTraj";
}

template<>
inline const char * name<dynus_interfaces::msg::DynTraj>()
{
  return "dynus_interfaces/msg/DynTraj";
}

template<>
struct has_fixed_size<dynus_interfaces::msg::DynTraj>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynus_interfaces::msg::DynTraj>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynus_interfaces::msg::DynTraj>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNUS_INTERFACES__MSG__DETAIL__DYN_TRAJ__TRAITS_HPP_
