package verifica;

public class Docente {
    private final String Nome, Cognome, Codice;
    private final int Eta;

    public  Docente(String Nome, String Cognome, String Codice, int Eta) {
        this.Nome = Nome;
        this.Cognome = Cognome;
        this.Codice = Codice;
        this.Eta = Eta;
    }

    public String getCognome() {
        return this.Cognome;
    }

    public String getCodice() {
        return this.Codice;
    }

    public int getEta() {
        return this.Eta;
    }
}
