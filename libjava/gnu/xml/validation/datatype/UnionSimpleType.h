
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_datatype_UnionSimpleType__
#define __gnu_xml_validation_datatype_UnionSimpleType__

#pragma interface

#include <gnu/xml/validation/datatype/SimpleType.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace datatype
        {
            class Annotation;
            class SimpleType;
            class UnionSimpleType;
        }
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
          class ValidationContext;
      }
    }
  }
}

class gnu::xml::validation::datatype::UnionSimpleType : public ::gnu::xml::validation::datatype::SimpleType
{

public:
  UnionSimpleType(::javax::xml::namespace$::QName *, ::java::util::Set *, jint, ::gnu::xml::validation::datatype::SimpleType *, ::gnu::xml::validation::datatype::Annotation *, ::java::util::List *);
  virtual void checkValid(::java::lang::String *, ::org::relaxng::datatype::ValidationContext *);
  ::java::util::List * __attribute__((aligned(__alignof__( ::gnu::xml::validation::datatype::SimpleType)))) memberTypes;
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_datatype_UnionSimpleType__