package main

import (
	"fmt"
	"math"
)

func main() {
	var i float64
	var flr,ceil float64
	
	fmt.Scan(&i)
	
	flr = math.Floor(i)
	ceil = math.Ceil(i)

	if ceil-i>i-flr{
		fmt.Println(int(flr))
	}else{
		fmt.Println(int(ceil))
	}	
}