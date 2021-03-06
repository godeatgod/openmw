/*
  OpenMW - The completely unofficial reimplementation of Morrowind
  Copyright (C) 2008-2010  Nicolay Korslund
  Email: < korslund@gmail.com >
  WWW: http://openmw.sourceforge.net/

  This file (record.h) is part of the OpenMW package.

  OpenMW is distributed as free software: you can redistribute it
  and/or modify it under the terms of the GNU General Public License
  version 3, as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  version 3 along with this program. If not, see
  http://www.gnu.org/licenses/ .

 */

#ifndef _NIF_RECORD_H_
#define _NIF_RECORD_H_

namespace Nif
{

class NIFFile;

enum RecordType
{
  RC_MISSING = 0,
  RC_NiNode,
  RC_NiTriShape,
  RC_NiRotatingParticles,
  RC_NiAutoNormalParticles,
  RC_NiCamera,
  RC_NiTexturingProperty,
  RC_NiMaterialProperty,
  RC_NiZBufferProperty,
  RC_NiAlphaProperty,
  RC_NiVertexColorProperty,
  RC_NiShadeProperty,
  RC_NiDitherProperty,
  RC_NiWireframeProperty,
  RC_NiSpecularProperty,
  RC_NiVisController,
  RC_NiGeomMorpherController,
  RC_NiKeyframeController,
  RC_NiAlphaController,
  RC_NiUVController,
  RC_NiPathController,
  RC_NiMaterialColorController,
  RC_NiBSPArrayController,
  RC_NiParticleSystemController,
  RC_NiLight,
  RC_NiTextureEffect,
  RC_NiVertWeightsExtraData,
  RC_NiTextKeyExtraData,
  RC_NiStringExtraData,
  RC_NiGravity,
  RC_NiPlanarCollider,
  RC_NiParticleGrowFade,
  RC_NiParticleColorModifier,
  RC_NiParticleRotation,
  RC_NiFloatData,
  RC_NiTriShapeData,
  RC_NiVisData,
  RC_NiColorData,
  RC_NiPixelData,
  RC_NiMorphData,
  RC_NiKeyframeData,
  RC_NiSkinData,
  RC_NiUVData,
  RC_NiPosData,
  RC_NiRotatingParticlesData,
  RC_NiAutoNormalParticlesData,
  RC_NiSequenceStreamHelper,
  RC_NiSourceTexture,
  RC_NiSkinInstance
};

/// Base class for all records
struct Record
{
  // Record type and type name
  int recType;
  SString recName;

  Record() : recType(RC_MISSING) {}

  /// Parses the record from file
  virtual void read(NIFFile *nif) = 0;

  /// Does post-processing, after the entire tree is loaded
  virtual void post(NIFFile *nif) {}

  /*
    Use these later if you want custom allocation of all NIF objects

  static void* operator new(size_t size);
  static void operator delete(void *p);
  */
};

} // Namespace
#endif
