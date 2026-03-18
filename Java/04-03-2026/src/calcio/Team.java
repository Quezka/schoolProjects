package calcio;

public class Team {
    private Player[] Players;
    private String Name;

    public Team(Player[] players, String name) {
        this.Players = players;
        this.Name = name;
    }

    public void setName(String name) {
        this.Name = name;
    }

    public String getName() {
        return this.Name;
    }

    public void printPlayers() {
        int i = 1;

        for (Player player : Players) {
            System.out.println("\nGIOCATORE " + i);
            player.printPlayer();
            i++;
        }
    }
}
