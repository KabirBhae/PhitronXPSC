package main

    import(
        "fmt")

        func main()
{
    var x int

	fmt.Scan(&x)


	for i := 1;
    i <= x;
    i++
    {
    spaces:=x-i
		for j := 0;
        j < spaces; j++ {
			fmt.Printf(" ")
		}
		stars := 2*x-1- 2*spaces
		for j := 0;
        j < stars;
        j++ {
            fmt.Printf("*")} fmt.Printf("\n")
    }

    for
    i:
        = x;
    i > 0;
    i--
    {
    spaces:=x-i
		for j := 0;
        j < spaces; j++ {
			fmt.Printf(" ")
		}
		stars := 2*x-1
		stars = stars - 2*spaces
		for j := 0;
        j < stars;
        j++ {
            fmt.Printf("*")} fmt.Printf("\n")
    }
}