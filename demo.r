# Function to calculate the sum of squares
sum_of_squares <- function(n) {
  if (n <= 0) {
    return(0)
  } else {
    return(sum((1:n)^2))
  }
}

# Test the sum_of_squares function
n <- 5
result <- sum_of_squares(n)
cat("The sum of squares from 1 to", n, "is:", result, "\n")
