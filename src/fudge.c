/**
 * Copyright (C) 2009 - 2010, Vrai Stacey.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 *     
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "fudge/fudge.h"
#include "memory_internal.h"
#include "registry_internal.h"

FudgeStatus Fudge_init ( )
{
    return Fudge_initEx ( FudgeMemory_defaultManager ( ) );
}

FudgeStatus Fudge_initEx ( FudgeMemoryManager * mm )
{
    FudgeStatus status;
    if ( ( status = FudgeMemory_init ( mm ) ) )
        return status;
    return FudgeRegistry_init ( );
}

