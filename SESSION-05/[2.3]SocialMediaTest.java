class SocialMediaTest {

    public static void main(String[] args) {

        SocialMediaUploader uploader;

        uploader = new InstagramUploader();
        uploader.uploadContent();

        uploader = new YouTubeUploader();
        uploader.uploadContent();
    }
}