package org.omg.DynamicAny;


/**
* org/omg/DynamicAny/DynStructHelper.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from /cyuxuan/java/jvm-source/jdk-jdk8-b120/corba/src/share/classes/org/omg/DynamicAny/DynamicAny.idl
* Saturday, June 18, 2022 2:45:07 PM CST
*/


/**
    * DynStruct objects support the manipulation of IDL struct and exception values.
    * Members of the exceptions are handled in the same way as members of a struct.
    */
abstract public class DynStructHelper
{
  private static String  _id = "IDL:omg.org/DynamicAny/DynStruct:1.0";

  public static void insert (org.omg.CORBA.Any a, org.omg.DynamicAny.DynStruct that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static org.omg.DynamicAny.DynStruct extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      __typeCode = org.omg.CORBA.ORB.init ().create_interface_tc (org.omg.DynamicAny.DynStructHelper.id (), "DynStruct");
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static org.omg.DynamicAny.DynStruct read (org.omg.CORBA.portable.InputStream istream)
  {
      throw new org.omg.CORBA.MARSHAL ();
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, org.omg.DynamicAny.DynStruct value)
  {
      throw new org.omg.CORBA.MARSHAL ();
  }

  public static org.omg.DynamicAny.DynStruct narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof org.omg.DynamicAny.DynStruct)
      return (org.omg.DynamicAny.DynStruct)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      org.omg.DynamicAny._DynStructStub stub = new org.omg.DynamicAny._DynStructStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

  public static org.omg.DynamicAny.DynStruct unchecked_narrow (org.omg.CORBA.Object obj)
  {
    if (obj == null)
      return null;
    else if (obj instanceof org.omg.DynamicAny.DynStruct)
      return (org.omg.DynamicAny.DynStruct)obj;
    else
    {
      org.omg.CORBA.portable.Delegate delegate = ((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate ();
      org.omg.DynamicAny._DynStructStub stub = new org.omg.DynamicAny._DynStructStub ();
      stub._set_delegate(delegate);
      return stub;
    }
  }

}