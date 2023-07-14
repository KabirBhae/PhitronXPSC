package main

import (
	"fmt"
)

func main() {
  var i,j int
  
  fmt.Scan(&i)
  fmt.Scan(&j)

  if i>j {
  		fmt.Println(0)	
  	}else{
		fmt.Println(j-i+1)
	}
}