package main

import (
	"fmt"
)

func main() {
	var i,j int
	var k, answer int
	
	fmt.Scan(&i,&j)
	answer=0  

  	for k=0; k<2; k++ {					
		if i>j{
			answer = answer+i
			i = i - 1		
		}else{		
			answer = answer+j
			j = j - 1		
		}
	}
	
	fmt.Println(answer)
}