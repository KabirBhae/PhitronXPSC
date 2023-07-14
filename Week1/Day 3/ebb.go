package main

import (
	"fmt"
)

func main() {
	var a,b,c int
	var isYes bool
	isYes = false
	
	fmt.Scan(&a,&b,&c)
	
	var temp int
	for i := 0; i <= c/a; i++ {
		temp = c-a*i
		if temp%b ==0 {
			isYes = true
			break
		}
	}
	if isYes {
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}

}