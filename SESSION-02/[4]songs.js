class Playlist {
    constructor(name) {
        this.name = name;
        this.songs = [];
    }

    addSong(songTitle) {
        this.songs.push(songTitle);
    }
}

let playlist = new Playlist("My Playlist");

playlist.addSong("Perfect");
playlist.addSong("Believer");
playlist.addSong("Shape of You");

console.log(playlist.songs);