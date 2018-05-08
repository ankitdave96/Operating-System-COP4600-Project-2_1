//package com.example.ankitdave.ostextfilereader;
//
///**
// * Created by ankitdave on 11/03/18.
// */
//
//public class oscode{
//    public native String readfile(String filename);
//
//
//
//
//    static {
//        try {
//            System.load("/Users/ankitdave/Desktop/Os/libJiyeKyun.so");
//        } catch (UnsatisfiedLinkError e) {
//            System.err.println("Native code library failed to load.\n" + e);
//            System.exit(1);
//        }
//    }
//
//
//
//
//    public static void main(String[] args){
//
//
//        oscode sample = new oscode();
//
//        String  text = new String();
//        text=sample.readfile("textfile.txt");
//        System.out.println("stringMethod: " + text);
//
//
//
//
//    }
//}
