package verifica;

public class Universita {
    private Docente Docenti[];

    public Universita(Docente docenti[]) {
        this.Docenti = docenti;
    }

    public int etaMinima() {
        int minEta = this.Docenti[0].getEta();

        for (Docente doc : this.Docenti) {
            int eta =  doc.getEta();

            if (eta < minEta) {
                minEta = eta;
            }
        }

        return minEta;
    }

    public static void main(String args[]) {
        Docente[] docenti;
        docenti = new Docente[]{new Docente("Mario", "Molfese", "1", 35),
                new Docente("Roberto", "Settepanella", "2", 34),
                new Docente("Piero", "Troiano", "3", 60),
                new Docente("Paolo", "Giovannucci", "4", 32)};
        Universita uni = new Universita(docenti);

        System.out.println("DOCENTE\n" + docenti[0].getCognome() + " - " + docenti[0].getCodice() + " - " + docenti[0].getEta() + "\n");
        System.out.println("Eta Minima all'Universita: " + uni.etaMinima());
    }
}
