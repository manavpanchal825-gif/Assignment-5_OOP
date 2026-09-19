class SocialMediaUser:
    def __init__(self, username, followers):
        self.username = username
        self.followers = followers

    def displayProfile(self):
        print("Username:", self.username)
        print("Followers:", self.followers)


class InstagramInfluencer(SocialMediaUser):
    def postStory(self, storyTitle):
        print(self.username, "posted a new story:", storyTitle)


influencer = InstagramInfluencer("Neha", 15000)

influencer.displayProfile()
influencer.postStory("My New Dress")