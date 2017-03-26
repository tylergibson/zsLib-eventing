/*

Copyright (c) 2016, Robin Raymond
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of the FreeBSD Project.

*/

#pragma once

#include <zsLib/eventing/tool/types.h>

#define ZS_EVENTING_TOOL_INVALID_CONTENT (-2)
#define ZS_EVENTING_TOOL_FILE_FAILED_TO_LOAD (-3)
#define ZS_EVENTING_TOOL_METHOD_NOT_UNDERSTOOD (-4)
#define ZS_EVENTING_TOOL_SYSTEM_ERROR (-5)
#define ZS_EVENTING_TOOL_INTERNAL_ERROR (-99)

#define ZS_EVENTING_TOOL_UNEXPECTED_EOF (-2)

#define ZS_EVENTING_GENERATED_BY "Generated by zsLibEventingTool"

namespace zsLib
{
  namespace eventing
  {
    namespace tool
    {
      namespace internal
      {
        ZS_DECLARE_CLASS_PTR(CommandLine);
        ZS_DECLARE_CLASS_PTR(EventingCompiler);
        ZS_DECLARE_CLASS_PTR(IDLCompiler);
        ZS_DECLARE_CLASS_PTR(Monitor);

        ZS_DECLARE_STRUCT_PTR(GenerateHelper);
        ZS_DECLARE_STRUCT_PTR(GenerateJson);
        ZS_DECLARE_STRUCT_PTR(GenerateStructHeader);
        ZS_DECLARE_STRUCT_PTR(GenerateStructImplHeader);
        ZS_DECLARE_STRUCT_PTR(GenerateStructImplCpp);
        ZS_DECLARE_STRUCT_PTR(GenerateStructHeader);
        ZS_DECLARE_STRUCT_PTR(GenerateStructC);
        ZS_DECLARE_STRUCT_PTR(GenerateStructCx);
        ZS_DECLARE_STRUCT_PTR(GenerateStructDotNet);
      }
    }
  }
}
