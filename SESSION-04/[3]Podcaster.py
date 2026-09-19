class SocialMediaUser:
    def __init__(self, username, followers):
        self.username = username
        self.followers = followers

    def displayProfile(self):
        print("Username:", self.username)
        print("Followers:", self.followers)


class Podcaster(SocialMediaUser):
    def __init__(self, username, followers, podcastName):
        super().__init__(username, followers)
        self.podcastName = podcastName

    def publishEpisode(self, episodeTitle):
        print("Episode", episodeTitle, "published on", self.podcastName)


podcast = Podcaster("Priya", 5000, "Tech Talks")

podcast.displayProfile()
podcast.publishEpisode("AI in 2026")