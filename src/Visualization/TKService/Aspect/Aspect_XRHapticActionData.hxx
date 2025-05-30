// Copyright (c) 2020 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Aspect_XRHapticActionData_HeaderFile
#define _Aspect_XRHapticActionData_HeaderFile

//! Haptic output XR action data.
struct Aspect_XRHapticActionData
{
  float Delay;     //!< delay in seconds before start
  float Duration;  //!< duration in seconds
  float Frequency; //!< vibration frequency
  float Amplitude; //!< vibration amplitude

  //! Return TRUE if data is not empty.
  bool IsValid() const
  {
    return Duration > 0.0f && Amplitude > 0.0f && Frequency > 0.0f && Delay >= 0.0f;
  }

  //! Empty constructor.
  Aspect_XRHapticActionData()
      : Delay(0.0f),
        Duration(0.0f),
        Frequency(0.0f),
        Amplitude(0.0f)
  {
  }
};

#endif // _Aspect_XRHapticActionData_HeaderFile
