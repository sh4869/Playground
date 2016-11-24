fizzBuzz :: Integer -> [String]
fizzBuzz 0 = []
fizzBuzz n
    | n `mod` 15 == 0  =  fizzBuzz (n - 1) ++ ["FizzBuzz"]
    | n `mod` 5  == 0  =  fizzBuzz (n - 1) ++ ["Buzz"]
    | n `mod` 3  == 0  =  fizzBuzz (n - 1) ++ ["Fizz"]
    | otherwise        =  fizzBuzz (n - 1) ++ [show n]

main = mapM_ putStrLn (fizzBuzz 100)
