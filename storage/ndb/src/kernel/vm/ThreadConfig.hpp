/*
   Copyright (c) 2003, 2013, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */


#ifndef ThreadConfig_H
#define ThreadConfig_H

#include <kernel_types.h>
#include <NodeState.hpp>
#include <portlib/NdbThread.h>

#define JAM_FILE_ID 231


class ThreadConfig
{
public:
  ThreadConfig();
  ~ThreadConfig();
  void init(void);

  void ipControlLoop(NdbThread*);

  int doStart(NodeState::StartLevel startLevel);
private:

  void scanTimeQueue();
};

#undef JAM_FILE_ID

#endif // ThreadConfig_H
