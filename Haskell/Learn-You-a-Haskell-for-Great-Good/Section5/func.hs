{-
5.1 カリー化関数
-}
addThree :: Int -> Int -> Int -> Int
addThree x y z = x + y + z

compareWithHundred :: Int -> Ordering
compareWithHundred = compare 100

isUpperAlphanum :: Char -> Bool
isUpperAlphanum = (`elem` ['A'..'Z'])
{-
5.2 高階実演
-}
applyTwice :: (a -> a) -> a -> a
applyTwice f x = f (f x)

zipWith' :: (a -> b -> c) -> [a] -> [b] -> [c]
zipWith' _ [] _ = []
zipWith' _ _ [] = []
zipWith' f (x:xs) (y:ys) = f x y : zipWith' f xs ys 

filp' :: (a -> b -> c) -> (b -> a -> c)
filp' f y x = f x y

{-
5.3
-}
largestDivisible :: Integer
largestDivisible = head (filter p [100000,99999..])
        where p x = x `mod` 3829 == 0

chain :: Integer -> [Integer]
chain 1 = [1]
chain n
    | even n = n : chain (n `div` 2)
    | odd n  = n : chain (n * 3 + 1)

numLongChain :: Int
numLongChain = length (filter isLong (map chain [1..100]))
    where isLong xs = length xs > 15

numLongChains :: Int
numLongChains = length (filter (\xs -> length xs > 15)
                                (map chain [1..100]))

addThree' :: Int -> Int -> Int -> Int
addThree' = \x -> \y -> \z -> x + y + z

{-
5.4
-}

numLongChains' :: Int
numLongChains' = length (filter (\xs -> length xs > 15)
                                (map chain [1..100]))

{-
5.5
-}

sum' :: (Num a) => [a] -> a
sum' xs = foldl (\acc x  -> acc + x) 0 xs

sum'' :: (Num a) => [a] -> a
sum'' = foldl (+) 0

map' :: (a -> b) -> [a] -> [b]
map' f xs = foldr (\x acc -> f x : acc) [] xs

elem' :: (Eq a) => a -> [a] -> Bool
elem' y ys = foldr (\x acc -> if x == y then True else acc)  False ys

maximum' :: (Ord a) => [a] -> a
maximum' = foldl1 max

reverse' :: [a] -> [a]
reverse' = foldl (\acc x -> x : acc) []

sqrtSums :: Int
sqrtSums = length (takeWhile (<10000) (scanl1 (+) (map sqrt [1..]))) + 1

{-
5.7
-}