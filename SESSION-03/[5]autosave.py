class Playlist:
    def __init__(self, name):
        self.name = name

    def __del__(self):
        with open("autosave.txt", "w") as file:
            file.write(self.name)

        print("Playlist saved!")


playlist = Playlist("My Favourites")

del playlist