class Song {

    // Private properties
    private String title;
    private String artist;

    // Getter for title
    public String getTitle() {
        return title;
    }

    // Setter for title
    public void setTitle(String title) {
        this.title = title;
    }

    // Getter for artist
    public String getArtist() {
        return artist;
    }

    // Setter for artist
    public void setArtist(String artist) {
        this.artist = artist;
    }

    public static void main(String[] args) {

        Song song = new Song();

        song.setTitle("Shape of You");
        song.setArtist("Ed Sheeran");

        System.out.println("Song: " + song.getTitle());
        System.out.println("Artist: " + song.getArtist());

        // Updating title
        song.setTitle("Perfect");

        System.out.println("Updated Song: " + song.getTitle());
    }
}