package main

import (
	"fmt"
)

func isPrime(n int) bool{
	for i := 2; i*i <= n; i++ {
		if n%i==0 {
			return false
		}
	}
	return true
}

func main(){
  var N int
  
  fmt.Scan(&N)

  for i := 2; i <= N; i++ {
		if isPrime(i) {
			fmt.Print(i," ")
		}
  }
}