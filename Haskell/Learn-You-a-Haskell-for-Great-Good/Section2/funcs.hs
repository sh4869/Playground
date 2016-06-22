{-
2.1
:t を使うとその式の型を教えてくれる. 
-}
-- 関数の型指定
removeNonUpperCase :: [Char] -> [Char]
removeNonUpperCase st = [ c | c <- st, c `elem` ['A'..'Z'] ]
-- 複数の引数を取るときはこうなる
addThree :: Int -> Int -> Int -> Int
addThree x y z = x + y + z
{-
2.2
-}
fractional :: Integer -> Integer
fractional n = product [1..n]
circumference :: Float -> Float
circumference r = 2 * pi * r
-- Doubleの方が精度が良い(当たり前だけど)
circumference' :: Double -> Double
circumference' r = 2 * pi * r
