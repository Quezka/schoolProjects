public class Fattura {
    private final int IVA;

    private final Cliente Destinatario;
    public String Descrizione;
    public int Quantita;
    public double PrezzoUnita;

    public Fattura (Cliente _Destinatario, int _IVA) {
        Destinatario = _Destinatario;
        IVA = _IVA;
    }

    public double calcImponibile () {
        return Quantita * PrezzoUnita;
    }

    public double calcImposta () {
        return (calcImponibile() * IVA) / 100;
    }

    public double calcTot() {
        return calcImponibile() + calcImposta();
    }

    public void emetti() {
        double tot = calcTot();

        Destinatario.paga(tot);
        Destinatario.stampaCliente();
    }
}