package Test;

import java.util.Scanner;

public class CD {
    private Song Songs[];
    private String Title;

    public CD() {}

    public CD(Song songs[], String title) {
        this.Songs = songs;
        this.Title = title;
    }

    public Song findSongByTitle(String target) {
        for (Song song : Songs) {
            if (song.getTitle().equals(target)) {
                song.showSong();
                return song;
            }
        }

        System.out.println("CANZONE NON TROVATA\nTitolo: " + target);
        return null;
    }

    static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Song songs[] = new Song[5];
        CD cd;
        int choice = 0;

        for (int i = 0; i < songs.length; i++) {
            String name, artist, title, album;
            int duration;
            Song temp;

            System.out.println((i + 1) + ".\nInserisci Titolo: ");
            name = sc.nextLine();

            System.out.println("Inserisci Artista: ");
            artist = sc.nextLine();

            System.out.println("Inserisci Album: ");
            album = sc.nextLine();

            System.out.println("Inserisci Durata (in ms): ");
            duration = sc.nextInt();

            temp = new Song(name, artist, album, duration);

            songs[i] = temp;
        }

        System.out.println("Inserisci Titolo del CD: ");
        cd = new CD(songs, sc.nextLine());

        while (choice != 2) {
            System.out.println("\n1 - Ricerca Canzone per Titolo;\n2 - Esci;\nInserisci una scelta>> ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Inserisci titolo di Ricerca: ");
                    cd.findSongByTitle(sc.nextLine());
                    break;
                case 2:
                    System.out.println("Uscita...");
            }
        }
    }
}
