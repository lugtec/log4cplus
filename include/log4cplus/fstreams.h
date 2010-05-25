// Module:  Log4CPLUS
// File:    fstreams.h
// Created: 4/2003
// Author:  Tad E. Smith
//
//
// Copyright 2003-2009 Tad E. Smith
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/** @file */

#ifndef LOG4CPLUS_FSTREAMS_HEADER_
#define LOG4CPLUS_FSTREAMS_HEADER_

#include <log4cplus/config.hxx>
#include <log4cplus/tchar.h>
#include <iosfwd>


namespace log4cplus
{


typedef std::basic_ofstream<tchar> tofstream;
typedef std::basic_ifstream<tchar> tifstream;


}

#endif // LOG4CPLUS_FSTREAMS_HEADER_
