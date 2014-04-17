
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenNamedProperty__
#define __gnu_java_util_regex_RETokenNamedProperty__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
          class CPStringBuilder;
      }
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class REMatch;
            class RETokenNamedProperty;
            class RETokenNamedProperty$Handler;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenNamedProperty : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  RETokenNamedProperty(jint, ::java::lang::String *, jboolean, jboolean);
  jint getMinimumLength();
  jint getMaximumLength();
  ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
private:
  jboolean matchOneChar(jchar);
public: // actually package-private
  jboolean returnsFixedLengthMatches();
  jint findFixedLengthMatches(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  void dump(::gnu::java::lang::CPStringBuilder *);
private:
  ::gnu::java::util::regex::RETokenNamedProperty$Handler * getHandler(::java::lang::String *);
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken)))) name;
  jboolean insens;
  jboolean negate;
  ::gnu::java::util::regex::RETokenNamedProperty$Handler * handler;
  static JArray< jbyte > * LETTER;
  static JArray< jbyte > * MARK;
  static JArray< jbyte > * SEPARATOR;
  static JArray< jbyte > * SYMBOL;
  static JArray< jbyte > * NUMBER;
  static JArray< jbyte > * PUNCTUATION;
  static JArray< jbyte > * OTHER;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenNamedProperty__
