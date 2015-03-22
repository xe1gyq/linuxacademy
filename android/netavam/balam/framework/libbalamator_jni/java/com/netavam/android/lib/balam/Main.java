package com.netavam.android.lib.balam;

/** @hide */
public class Main {
  public static void main (String[] args) {
    try {
      LibBalam libBalam = new LibBalam();
      try {
        int on = libBalam.balamatorOn();
        int off = libBalam.balamatorOff();
        System.out.printf("Seems it works\n");
      } finally {
        libBalam.close();
      }
    } catch (LibBalamException e) {
            System.err.println("Failed to do something\n");
            e.printStackTrace();
    }
  }
}
