
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_CompoundControl__
#define __javax_sound_sampled_CompoundControl__

#pragma interface

#include <javax/sound/sampled/Control.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class CompoundControl;
          class CompoundControl$Type;
          class Control;
      }
    }
  }
}

class javax::sound::sampled::CompoundControl : public ::javax::sound::sampled::Control
{

public: // actually protected
  CompoundControl(::javax::sound::sampled::CompoundControl$Type *, JArray< ::javax::sound::sampled::Control * > *);
public:
  virtual JArray< ::javax::sound::sampled::Control * > * getMemberControls();
  virtual ::java::lang::String * toString();
private:
  JArray< ::javax::sound::sampled::Control * > * __attribute__((aligned(__alignof__( ::javax::sound::sampled::Control)))) memberControls;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_sound_sampled_CompoundControl__
