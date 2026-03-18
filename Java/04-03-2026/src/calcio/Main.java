package calcio;

public class Main {
    static void main(String[] args) {
        Player[] players = {new Player("Molfese", "Mario", 4, "Avanti"), new Player("Settepanella", "Roberto", 5, "Dietro"), new Player("Castagna", "Patrick Xavier", 69, "Fianco")};
        Team juventus = new Team(players, "Juventus");

        juventus.printPlayers();
    }
}
