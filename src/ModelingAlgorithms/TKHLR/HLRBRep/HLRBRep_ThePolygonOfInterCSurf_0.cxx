// Created on: 1992-10-14
// Created by: Christophe MARION
// Copyright (c) 1992-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
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

#include <HLRBRep_ThePolygonOfInterCSurf.hxx>

#include <Standard_OutOfRange.hxx>
#include <gp_Lin.hxx>
#include <HLRBRep_LineTool.hxx>
#include <Bnd_Box.hxx>
#include <gp_Pnt.hxx>

#define TheCurve gp_Lin
#define TheCurve_hxx <gp_Lin.hxx>
#define TheCurveTool HLRBRep_LineTool
#define TheCurveTool_hxx <HLRBRep_LineTool.hxx>
#define IntCurveSurface_Polygon HLRBRep_ThePolygonOfInterCSurf
#define IntCurveSurface_Polygon_hxx <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <IntCurveSurface_Polygon.gxx>
