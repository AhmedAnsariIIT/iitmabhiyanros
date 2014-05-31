/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/faisal/catkin_ws/src/robot_pose_ekf/srv/GetStatus.srv
 *
 */


#ifndef ROBOT_POSE_EKF_MESSAGE_GETSTATUS_H
#define ROBOT_POSE_EKF_MESSAGE_GETSTATUS_H

#include <ros/service_traits.h>


#include <robot_pose_ekf/GetStatusRequest.h>
#include <robot_pose_ekf/GetStatusResponse.h>


namespace robot_pose_ekf
{

struct GetStatus
{

typedef GetStatusRequest Request;
typedef GetStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetStatus
} // namespace robot_pose_ekf


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_pose_ekf::GetStatus > {
  static const char* value()
  {
    return "4fe5af303955c287688e7347e9b00278";
  }

  static const char* value(const ::robot_pose_ekf::GetStatus&) { return value(); }
};

template<>
struct DataType< ::robot_pose_ekf::GetStatus > {
  static const char* value()
  {
    return "robot_pose_ekf/GetStatus";
  }

  static const char* value(const ::robot_pose_ekf::GetStatus&) { return value(); }
};


// service_traits::MD5Sum< ::robot_pose_ekf::GetStatusRequest> should match 
// service_traits::MD5Sum< ::robot_pose_ekf::GetStatus > 
template<>
struct MD5Sum< ::robot_pose_ekf::GetStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_pose_ekf::GetStatus >::value();
  }
  static const char* value(const ::robot_pose_ekf::GetStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_pose_ekf::GetStatusRequest> should match 
// service_traits::DataType< ::robot_pose_ekf::GetStatus > 
template<>
struct DataType< ::robot_pose_ekf::GetStatusRequest>
{
  static const char* value()
  {
    return DataType< ::robot_pose_ekf::GetStatus >::value();
  }
  static const char* value(const ::robot_pose_ekf::GetStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_pose_ekf::GetStatusResponse> should match 
// service_traits::MD5Sum< ::robot_pose_ekf::GetStatus > 
template<>
struct MD5Sum< ::robot_pose_ekf::GetStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_pose_ekf::GetStatus >::value();
  }
  static const char* value(const ::robot_pose_ekf::GetStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_pose_ekf::GetStatusResponse> should match 
// service_traits::DataType< ::robot_pose_ekf::GetStatus > 
template<>
struct DataType< ::robot_pose_ekf::GetStatusResponse>
{
  static const char* value()
  {
    return DataType< ::robot_pose_ekf::GetStatus >::value();
  }
  static const char* value(const ::robot_pose_ekf::GetStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_POSE_EKF_MESSAGE_GETSTATUS_H