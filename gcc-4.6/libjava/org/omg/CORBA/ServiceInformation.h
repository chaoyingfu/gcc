
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_ServiceInformation__
#define __org_omg_CORBA_ServiceInformation__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ServiceDetail;
          class ServiceInformation;
      }
    }
  }
}

class org::omg::CORBA::ServiceInformation : public ::java::lang::Object
{

public:
  ServiceInformation();
  ServiceInformation(JArray< jint > *, JArray< ::org::omg::CORBA::ServiceDetail * > *);
  JArray< ::org::omg::CORBA::ServiceDetail * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) service_details;
  JArray< jint > * service_options;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_ServiceInformation__