class Playlist {
    constructor(name, createdOn, isPublic) {
        this.name = name;
        this.createdOn = createdOn;
        this.isPublic = isPublic;
    }
}

let playlist = new Playlist("My Songs", "19-09-2026", true);

console.log(playlist.name);
console.log(playlist.createdOn);
console.log(playlist.isPublic);