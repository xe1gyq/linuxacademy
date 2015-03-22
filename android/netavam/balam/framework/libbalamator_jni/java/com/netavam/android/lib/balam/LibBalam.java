package com.netavam.android.lib.balam;

public class LibBalam {

  public LibBalam() {
    this.init();
  }

  @Override
  protected void finalize() {
    this.close();
  }

  private native void init() throws LibBalamException;
  public native void close();
  public native int balamatorOn() throws LibBalamException;
  public native int balamatorOff() throws LibBalamException;

  static {
     System.loadLibrary("balamator_jni");
  }
}
