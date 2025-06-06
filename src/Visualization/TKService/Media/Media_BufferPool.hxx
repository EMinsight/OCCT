// Created by: Kirill GAVRILOV
// Copyright (c) 2019 OPEN CASCADE SAS
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

#ifndef _Media_BufferPool_HeaderFile
#define _Media_BufferPool_HeaderFile

#include <Standard_Transient.hxx>
#include <Standard_Type.hxx>

struct AVBufferPool;
struct AVBufferRef;

//! AVBufferPool wrapper.
class Media_BufferPool : public Standard_Transient
{
  DEFINE_STANDARD_RTTIEXT(Media_BufferPool, Standard_Transient)
public:
  //! Empty constructor
  Standard_EXPORT Media_BufferPool();

  //! Destructor
  Standard_EXPORT ~Media_BufferPool();

  //! Release the pool (reference-counted buffer will be released when needed).
  Standard_EXPORT void Release();

  //! (Re-)initialize the pool.
  Standard_EXPORT bool Init(int theBufferSize);

  //! Return buffer size within the pool.
  int BufferSize() const { return myBufferSize; }

  //! Get new buffer from the pool.
  Standard_EXPORT AVBufferRef* GetBuffer();

private:
  // prevent copies
  Media_BufferPool(const Media_BufferPool& theCopy);
  Media_BufferPool& operator=(const Media_BufferPool& theCopy);

protected:
  AVBufferPool* myPool;
  int           myBufferSize;
};

#endif // _Media_BufferPool_HeaderFile
