class Playlist {
    constructor(name, isPublic) {
        this.name = name;
        this.isPublic = isPublic;
    }

    togglePublic() {
        this.isPublic = !this.isPublic;
    }
}

let playlist = new Playlist("My Songs", true);

console.log(playlist.isPublic);

playlist.togglePublic();
console.log(playlist.isPublic);

playlist.togglePublic();
console.log(playlist.isPublic);