// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#ifndef _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile
#define _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <StepFEA_FeaRepresentationItem.hxx>
class StepFEA_ParametricCurve3dElementCoordinateDirection;
class TCollection_HAsciiString;

class StepFEA_ParametricCurve3dElementCoordinateSystem;
DEFINE_STANDARD_HANDLE(StepFEA_ParametricCurve3dElementCoordinateSystem,
                       StepFEA_FeaRepresentationItem)

//! Representation of STEP entity ParametricCurve3dElementCoordinateSystem
class StepFEA_ParametricCurve3dElementCoordinateSystem : public StepFEA_FeaRepresentationItem
{

public:
  //! Empty constructor
  Standard_EXPORT StepFEA_ParametricCurve3dElementCoordinateSystem();

  //! Initialize all fields (own and inherited)
  Standard_EXPORT void Init(
    const Handle(TCollection_HAsciiString)&                            aRepresentationItem_Name,
    const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection)& aDirection);

  //! Returns field Direction
  Standard_EXPORT Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) Direction() const;

  //! Set field Direction
  Standard_EXPORT void SetDirection(
    const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection)& Direction);

  DEFINE_STANDARD_RTTIEXT(StepFEA_ParametricCurve3dElementCoordinateSystem,
                          StepFEA_FeaRepresentationItem)

protected:
private:
  Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) theDirection;
};

#endif // _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile
