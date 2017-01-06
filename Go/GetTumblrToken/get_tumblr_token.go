package main

import (
	"flag"
	"fmt"
	"log"
	"os"

	"github.com/mrjones/oauth"
)

func main() {
	consumerKey := flag.String(
		"key",
		"",
		"Consumer Key")

	consumerSecret := flag.String(
		"secret",
		"",
		"Consumer Secret")
	flag.Parse()
	if len(*consumerKey) == 0 || len(*consumerSecret) == 0 {
		fmt.Println("You must set the --consumerkey and --consumersecret flags.")
		os.Exit(1)
	}
	c := oauth.NewConsumer(
		*consumerKey,
		*consumerSecret,
		oauth.ServiceProvider{
			RequestTokenUrl:   "https://www.tumblr.com/oauth/request_token",
			AuthorizeTokenUrl: "https://www.tumblr.com/oauth/authorize",
			AccessTokenUrl:    "https://www.tumblr.com/oauth/access_token",
		},
	)
	requestToken, u, err := c.GetRequestTokenAndUrl("http://sh4869.net")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("(1) Go to: " + u)
	fmt.Println("(2) Grant access, you should get back a verification code.")
	fmt.Println("(3) Enter that verification code here: ")
	verificationCode := ""
	fmt.Scanln(&verificationCode)
	fmt.Println(verificationCode)
	accessToken, err := c.AuthorizeToken(requestToken, verificationCode)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Print("Access Token : ")
	fmt.Println(accessToken.Token)
	fmt.Print("Access Token Secret: ")
	fmt.Println(accessToken.Secret)
}
