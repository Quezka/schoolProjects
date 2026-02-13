import java.io.*;

class Main
{
    public static void main(String[] args)
    {
        // creazione del cliente
        Cliente computerSpa = new Cliente("Computer SPA", "01122334455", 0);
        computerSpa.addebita(10000);
        computerSpa.stampaCliente();

        // crea due fatture per lo stesso cliente
        Fattura ordine1 = new Fattura(computerSpa, 22);
        Fattura ordine2 = new Fattura(computerSpa, 22);

        // registra i dati delle fatture e le addebita
        ordine1.Descrizione = "Mouse";
        ordine1.Quantita = 28;
        ordine1.PrezzoUnita = 17.5;
        ordine1.emetti();

        ordine2.Descrizione = "Monitor";
        ordine2.Quantita = 7;
        ordine2.PrezzoUnita = 328.99;
        ordine2.emetti();

        // incassa il pagamento di un bonifico
        double bonifico = 1000.0;
        computerSpa.paga(bonifico);
        computerSpa.stampaCliente();
    }
}