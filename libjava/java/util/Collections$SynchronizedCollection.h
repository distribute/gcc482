
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections$SynchronizedCollection__
#define __java_util_Collections$SynchronizedCollection__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::Collections$SynchronizedCollection : public ::java::lang::Object
{

public: // actually package-private
  Collections$SynchronizedCollection(::java::util::Collection *);
  Collections$SynchronizedCollection(::java::lang::Object *, ::java::util::Collection *);
public:
  virtual jboolean add(::java::lang::Object *);
  virtual jboolean addAll(::java::util::Collection *);
  virtual void clear();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean containsAll(::java::util::Collection *);
  virtual jboolean isEmpty();
  virtual ::java::util::Iterator * iterator();
  virtual jboolean remove(::java::lang::Object *);
  virtual jboolean removeAll(::java::util::Collection *);
  virtual jboolean retainAll(::java::util::Collection *);
  virtual jint size();
  virtual JArray< ::java::lang::Object * > * toArray();
  virtual JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = 3053995032091335093LL;
public: // actually package-private
  ::java::util::Collection * __attribute__((aligned(__alignof__( ::java::lang::Object)))) c;
  ::java::lang::Object * mutex;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Collections$SynchronizedCollection__
