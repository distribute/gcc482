
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_color_ProfileHeader__
#define __gnu_java_awt_color_ProfileHeader__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace color
        {
            class ProfileHeader;
        }
      }
    }
  }
}

class gnu::java::awt::color::ProfileHeader : public ::java::lang::Object
{

public:
  ProfileHeader();
  ProfileHeader(JArray< jbyte > *);
  virtual void verifyHeader(jint);
  virtual JArray< jbyte > * getData(jint);
  virtual jint getSize();
  virtual void setSize(jint);
  virtual jint getMajorVersion();
  virtual jint getMinorVersion();
  virtual jint getProfileClass();
  virtual void setProfileClass(jint);
  virtual jint getColorSpace();
  virtual jint getProfileColorSpace();
  virtual void setColorSpace(jint);
  virtual void setProfileColorSpace(jint);
private:
  static const jint icMagicNumber = 1633907568;
  static JArray< jint > * csTypeMap;
public:
  static const jint HEADERSIZE = 128;
private:
  static JArray< jint > * classMap;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) size;
  jint cmmId;
  jint majorVersion;
  jint minorVersion;
  jint profileClass;
  jint colorSpace;
  jint profileColorSpace;
  JArray< jbyte > * timestamp;
  jint platform;
  jint flags;
  jint magic;
  jint manufacturerSig;
  jint modelSig;
  JArray< jbyte > * attributes;
  jint intent;
  JArray< jbyte > * illuminant;
  jint creatorSig;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_color_ProfileHeader__
