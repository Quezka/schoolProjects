package verifica;

import java.util.Scanner;

public class Serbatoio {
    private int Livello;

    public Serbatoio(int livello) {
        this.Livello = livello;
    }

    public void rifornimento(int val) {
        this.Livello += val;
    }

    public void consuma(int val) {
        this.Livello -= val;
    }

    public int getLivello() {
        return this.Livello;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Inserisci il livello del serbatoio: ");
        int livello = sc.nextInt();
        sc.nextLine();

        Serbatoio s = new Serbatoio(livello);

        System.out.println("Inserisci il valore di rifornimento: ");
        s.rifornimento(sc.nextInt());
        sc.nextLine();

        System.out.println("Livello Serbatoio: " +  s.getLivello());

        System.out.println("Inserisci il valore di consumo: ");
        s.consuma(sc.nextInt());
        sc.nextLine();

        System.out.println("Livello Serbatoio: " +  s.getLivello());
    }
}
