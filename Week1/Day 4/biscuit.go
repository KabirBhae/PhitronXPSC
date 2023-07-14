package main

import (
	"fmt"
)

func main(){
	var A,B,T int
	var ans int

	fmt.Scan(&A,&B,&T)

	ans = T/A
	fmt.Print(ans*B)
}