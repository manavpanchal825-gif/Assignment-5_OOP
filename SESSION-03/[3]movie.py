import copy

class Movie:
    def __init__(self, name, year):
        self.name = name
        self.year = year

    def display(self):
        print("Movie:", self.name)
        print("Year:", self.year)


movie1 = Movie("3 Idiots", 2009)

movie2 = copy.copy(movie1)

print("Original:")
movie1.display()

print("Copied:")
movie2.display()