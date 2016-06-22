{-
3.1 パターンマッチ

-}
lucky :: Int -> String
lucky 7 = "Lucky"
lucky x = "not lucky"
-- 再帰的な関数を実装することもできる.
fractional :: Int -> Int
fractional 0 = 1
fractional n = n * fractional(n - 1)
-- タプルにも使える
addVectors :: (Double,Double) -> (Double,Double) -> (Double,Double)
addVectors (x1,y1) (x2,y2) = (x1 + x2,y1 + y2)

third :: (a,b,c) -> c
third (_,_,z) = z

head' :: [a] -> a
head' [] = error "Cannnot call headl on an emty list"
head' (x:_) = x
-- asパターン
firstLetter :: String -> String
firstLetter "" = "EmptyString"
firstLetter all@(x:y:xs) = "firstLetter is " ++ [x] ++ " and Second letter is " ++ [y]
{-
3.2 ガード 
-}
bmiTell :: Double -> String
bmiTell bmi
    | bmi <= 18.5 = "KARUI"
    | bmi <= 25.0 = "HUTU"
    | bmi <= 30.0 = "OMOI"
    | otherwise = "yabai"

bmiTell' :: Double -> Double -> String
bmiTell' weight height
    | weight / height ^ 2 <= 18.5 = "KARUI"
    | weight / height ^ 2 <= 25.0 = "HUTU"
    | weight / height ^ 2 <= 30.0 = "OMOI"
    | otherwise = "yabai"

max' :: (Ord a) => a -> a -> a
max' a b 
    | a <= b  = b
    | otherwise  = a
{-
3.3 where?!
-}

bmiTell'' :: Double -> Double -> String
bmiTell'' weight height
    | bmi <= skyinny = "KARUI"
    | bmi <= normal = "HUTU"
    | bmi <= fat = "OMOI"
    | otherwise = "yabai"
    where bmi = weight   / height^2
          skyinny = 18.5
          normal = 25.0
          fat = 30.0

initilas :: String -> String -> String
initilas  firstname lastname = [f] ++ ". " ++ [l] ++ "."
    where (f:_) = firstname
          (l:_) = lastname

calcBmis :: [(Double,Double)] -> [Double]
calcBmis xs = [bmi w h | (w,h) <- xs]
    where bmi weight height = weight / height ^ 2
{-
3.4 let
-}
cylinder :: Double -> Double -> Double
cylinder r h =
    let
        sideArea = 2 * pi * r * h
        topArea = pi * r ^ 2
    in
        sideArea + 2 * topArea
calcBmis' :: [(Double,Double)] -> [Double]
calcBmis' xs = [bmi | (w,h) <- xs, let bmi = w / h ^ 2]
{-
3.5 case 
-}
head'' :: [a] -> a
head'' xs = case xs of [] -> error "Empty"
                       (x:_) -> x

describeList :: [a] -> String
describeList ls = "The list is"
                    ++ case ls of [] -> " empty"
                                  [x] -> " a single"
                                  xs -> " a longer list"