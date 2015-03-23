package com.netavam.android.lib.balam;

/** @hide */
public class Main {
  public static void main (String[] args) {
    try {
      LibBalam libBalam = new LibBalam();
      try {
        int onc = libBalam.balamatorOn();
        int offc = libBalam.balamatorOff();
        System.out.printf("Seems it works! Received %d | %d\n", onc, offc);
      } finally {
        libBalam.close();
      }
    } catch (LibBalamException e) {
            System.err.println("Failed to do something\n");
            e.printStackTrace();
    }
  }
}
