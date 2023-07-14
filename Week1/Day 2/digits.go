package main

import (
	"fmt"
)

func main() {
	var i int
	
	fmt.Scan(&i)
	
	if i<10{
		fmt.Print("000")
		fmt.Print(i)
	} else if i>=10 && i<100 {
		fmt.Print("00")
		fmt.Print(i)
	} else if i>=100 && i<1000 {
		fmt.Print("0")
		fmt.Print(i)
	} else{
		fmt.Print(i)
	}
	
}