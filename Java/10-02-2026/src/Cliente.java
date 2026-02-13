public class Cliente {
    private String Nome;
    private String PIva;
    private double Saldo;


    public Cliente (String _Nome, String _PIva, double _Saldo) {
        Nome = _Nome;
        PIva = _PIva;
        Saldo = _Saldo;
    }
    public void addebita(double importo) {
        System.out.println("ADDEBITO\n" + importo + " euro\nPer\n" + PIva + "\n" + Nome);
        Saldo += importo;
    }

    public void paga(double importo) {
        System.out.println("PAGAMENTO\n" + importo + " euro\nDa\n" + PIva + "\n" + Nome);
        Saldo -= importo;
    }

    public void stampaCliente () {
        System.out.println("==============================");
        System.out.println("Cliente     = " + Nome);
        System.out.println("Partita IVA = " + PIva);
        System.out.println("Saldo       = " + Saldo);
        System.out.println("==============================");
    }
}