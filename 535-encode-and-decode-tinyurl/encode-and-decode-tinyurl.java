public class Codec {

    private HashMap<String, String> map = new HashMap<String, String>();
    private final String CHARACTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    
    public String generateRandomString() {
        Random random = new Random();
        StringBuilder sb = new StringBuilder(6);
        
        for (int i = 0; i < 6; i++) {
            int index = random.nextInt(CHARACTERS.length());
            sb.append(CHARACTERS.charAt(index));
        }

        return sb.toString();
    }
    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        String random = generateRandomString();
        while(map.containsKey(random))
            random = generateRandomString();
        map.put(random, longUrl);
        return "http://tinyurl.com/" + random;
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        String random = shortUrl.substring("http://tinyurl.com/".length());
        return map.get(random);
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));