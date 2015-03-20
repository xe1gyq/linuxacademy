package com.marakana.jniexamples;

public class Hello {

    public native void someOtherFunc(float MyFloat, double myDouble, Hello myHello);

    public native void someOtherFunc(float myFloat, double myDouble);

    public void dosomething() {
       String myString = "Hello";
       sayHi(myString, 10);
       myString = "anotherHello";
       sayHi(myString, 20);
    }

    public static native void sayHi(String who, int times); // 1

    static {
        System.loadLibrary("hello"); // 2
    }

    public static void main(String[] args) {
        sayHi(args[0], Integer.parseInt(args[1])); // 3
    }
}
