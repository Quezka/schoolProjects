package Test;

public class Song {
    private String Title, Artist, Album;
    private int Duration;

    public Song() {
        this.Title = "None";
        this.Artist = "Unknown";
        this.Album = "None";
        this.Duration = 0;
    }

    public Song(String title,  String artist, String album,  int duration) {
        this.Title = title;
        this.Artist = artist;
        this.Album = album;
        this.Duration = duration;
    }

    public String getTitle() {
        return this.Title;
    }

    public void setTitle(String title) {
        this.Title = title;
    }

    public String getArtist() {
        return this.Artist;
    }

    public void setArtist(String artist) {
        this.Artist = artist;
    }

    public String getAlbum() {
        return this.Album;
    }

    public void setAlbum(String album) {
        this.Album = album;
    }

    public void showSong() {
        System.out.println("CANZONE\nTitolo: " + this.Title + "\nArtista: " + this.Artist + "\nAlbum: " + this.Album);
    }
}
