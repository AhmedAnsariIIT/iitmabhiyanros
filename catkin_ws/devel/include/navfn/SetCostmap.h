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
 * Auto-generated by gensrv_cpp from file /home/faisal/catkin_ws/src/navfn/srv/SetCostmap.srv
 *
 */


#ifndef NAVFN_MESSAGE_SETCOSTMAP_H
#define NAVFN_MESSAGE_SETCOSTMAP_H

#include <ros/service_traits.h>


#include <navfn/SetCostmapRequest.h>
#include <navfn/SetCostmapResponse.h>


namespace navfn
{

struct SetCostmap
{

typedef SetCostmapRequest Request;
typedef SetCostmapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetCostmap
} // namespace navfn


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::navfn::SetCostmap > {
  static const char* value()
  {
    return "370ec969cdb71f9cde7c7cbe0d752308";
  }

  static const char* value(const ::navfn::SetCostmap&) { return value(); }
};

template<>
struct DataType< ::navfn::SetCostmap > {
  static const char* value()
  {
    return "navfn/SetCostmap";
  }

  static const char* value(const ::navfn::SetCostmap&) { return value(); }
};


// service_traits::MD5Sum< ::navfn::SetCostmapRequest> should match 
// service_traits::MD5Sum< ::navfn::SetCostmap > 
template<>
struct MD5Sum< ::navfn::SetCostmapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::navfn::SetCostmap >::value();
  }
  static const char* value(const ::navfn::SetCostmapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::navfn::SetCostmapRequest> should match 
// service_traits::DataType< ::navfn::SetCostmap > 
template<>
struct DataType< ::navfn::SetCostmapRequest>
{
  static const char* value()
  {
    return DataType< ::navfn::SetCostmap >::value();
  }
  static const char* value(const ::navfn::SetCostmapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::navfn::SetCostmapResponse> should match 
// service_traits::MD5Sum< ::navfn::SetCostmap > 
template<>
struct MD5Sum< ::navfn::SetCostmapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::navfn::SetCostmap >::value();
  }
  static const char* value(const ::navfn::SetCostmapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::navfn::SetCostmapResponse> should match 
// service_traits::DataType< ::navfn::SetCostmap > 
template<>
struct DataType< ::navfn::SetCostmapResponse>
{
  static const char* value()
  {
    return DataType< ::navfn::SetCostmap >::value();
  }
  static const char* value(const ::navfn::SetCostmapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAVFN_MESSAGE_SETCOSTMAP_H
