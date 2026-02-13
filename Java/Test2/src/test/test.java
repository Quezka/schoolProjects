package test;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class test {
    public static void main(String[] args) {
        final double YARD_METRO = 0.914;
        //так обозначаются константы

        /*
         * System.out.print("") --> не меняет строку
         * System.out.println("") --> меняет строку
         */

        // Input
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader keyboard = new BufferedReader(input);
        // variable declaration
        int eta1, eta2, eta3;
        int media;

        System.out.println("**** Persona 1 ********");
        System.out.print("Eta': ");

        try {
            String numeroLetto = keyboard.readLine();
            eta1 = Integer.valueOf(numeroLetto);
        }
        catch (Exception e) {
            System.out.println("**** ERROR **** ");
            return;
        }

        System.out.println("**** Persona 2 ********");
        System.out.print("Eta': ");
        try {
            String numeroLetto = keyboard.readLine();
            eta2 = Integer.valueOf(numeroLetto);
        }
        catch (Exception e) {
            System.out.println("**** ERROR **** ");
            return;
        }

        System.out.println("**** Persona 3 ********");
        System.out.print("Eta': ");
        try {
            String numeroLetto = keyboard.readLine();
            eta3 = Integer.valueOf(numeroLetto);
        }
        catch (Exception e) {
            System.out.println("**** ERROR **** ");
            return;
        }

        System.out.print("Eta 1: " + eta1 + "; Eta 2: " + eta2 + "; Eta 3: " + eta3 + "\n");
    }
}
