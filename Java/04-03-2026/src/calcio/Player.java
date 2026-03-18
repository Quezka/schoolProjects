package calcio;

public class Player {
    private String Surname;
    private String Name;
    private int Number;
    private String Position;

    public Player(String surname, String name, int number, String position) {
        this.Surname = surname;
        this.Name = name;
        this.Number = number;
        this.Position = position;
    }

    public void setName(String name) {
        this.Name = name;
    }

    public void setSurname(String surname) {
        this.Surname = surname;
    }

    public void setNumber(int number) {
        this.Number = number;
    }

    public void setPosition(String position) {
        this.Position = position;
    }

    public String getName() {
        return this.Name;
    }

    public String getSurname() {
        return this.Surname;
    }

    public int getNumber() {
        return this.Number;
    }

    public String getPosition() {
        return this.Position;
    }

    public void printPlayer() {
        System.out.println(this.Name);
        System.out.println(this.Surname);
        System.out.println(this.Number);
        System.out.println(this.Position);
    }

}
