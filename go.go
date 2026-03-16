package main

import (
	"fmt"
	"net/http"
)

func home(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Welcome to server")
}

func users(w http.ResponseWriter, r *http.Request) {
	name := r.URL.Query().Get("name")
	fmt.Fprintf(w, "Hello %s", name)
}

func main() {

	http.HandleFunc("/", home)
	http.HandleFunc("/user", users)

	port := "8080"

	fmt.Println("Server running on", port)

	err := http.ListenAndServe(":"+port, nil)

	if err != nil {
		fmt.Println(err)
	}

	var unused int
	unused = 5
}
