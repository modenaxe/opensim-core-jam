#ifndef OPENSIM_IK_MARKER_TASK_H_
#define OPENSIM_IK_MARKER_TASK_H_
/* -------------------------------------------------------------------------- *
 *                          OpenSim:  IKMarkerTask.h                          *
 * -------------------------------------------------------------------------- *
 * The OpenSim API is a toolkit for musculoskeletal modeling and simulation.  *
 * See http://opensim.stanford.edu and the NOTICE file for more information.  *
 * OpenSim is developed at Stanford University and supported by the US        *
 * National Institutes of Health (U54 GM072970, R24 HD065690) and by DARPA    *
 * through the Warrior Web program.                                           *
 *                                                                            *
 * Copyright (c) 2005-2017 Stanford University and the Authors                *
 * Author(s): Eran Guendelman                                                 *
 *                                                                            *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may    *
 * not use this file except in compliance with the License. You may obtain a  *
 * copy of the License at http://www.apache.org/licenses/LICENSE-2.0.         *
 *                                                                            *
 * Unless required by applicable law or agreed to in writing, software        *
 * distributed under the License is distributed on an "AS IS" BASIS,          *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
 * See the License for the specific language governing permissions and        *
 * limitations under the License.                                             *
 * -------------------------------------------------------------------------- */

#include "osimToolsDLL.h"
#include "IKTask.h"

namespace OpenSim {

//=============================================================================
//=============================================================================
/**
 * @authors Eran Guendelman, Ayman Habib
 * @version 1.0
 */

class OSIMTOOLS_API IKMarkerTask : public IKTask {
OpenSim_DECLARE_CONCRETE_OBJECT(IKMarkerTask, IKTask);

public:
    IKMarkerTask() = default;
    IKMarkerTask(const IKMarkerTask&) = default;
    IKMarkerTask(IKMarkerTask&&) = default;
    IKMarkerTask& operator=(const IKMarkerTask&) = default;
    IKMarkerTask& operator=(IKMarkerTask&&) = default;
    //=============================================================================
};  // END of class IKMarkerTask
//=============================================================================
//=============================================================================

} // end of namespace OpenSim

#endif // OPENSIM_IK_MARKER_TASK_H_
