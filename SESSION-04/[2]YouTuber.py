class SocialMediaUser:
    def __init__(self, username, followers):
        self.username = username
        self.followers = followers

    def displayProfile(self):
        print("Username:", self.username)
        print("Followers:", self.followers)


class YouTuber(SocialMediaUser):
    def __init__(self, username, followers, channelName):
        super().__init__(username, followers)
        self.channelName = channelName

    def uploadVideo(self, title):
        print("Video", title, "uploaded to", self.channelName)


youtube = YouTuber("Rahul", 10000, "Rahul Gaming")

youtube.displayProfile()
youtube.uploadVideo("Python Tutorial")