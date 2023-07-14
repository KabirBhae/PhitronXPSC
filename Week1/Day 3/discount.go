package main

import (
	"fmt"
)

func main() {
	var a,b float64
	var ans float64
	fmt.Scan(&a,&b)

	ans = (a-b)/a
	fmt.Print(ans*100)
}