module Paths_cabal_install (
    version,
    getBinDir, getLibDir, getDataDir, getLibexecDir,
    getDataFileName, getSysconfDir
  ) where

import qualified Control.Exception as Exception
import Data.Version (Version(..))
import System.Environment (getEnv)
import Prelude

catchIO :: IO a -> (Exception.IOException -> IO a) -> IO a
catchIO = Exception.catch

version :: Version
version = Version [0,1,0,0] []
bindir, libdir, datadir, libexecdir, sysconfdir :: FilePath

bindir     = "C:\\Users\\Nobuhiro\\Documents\\Develop\\Playground\\Haskell\\cabal-install\\.stack-work\\install\\b6a8628b\\bin"
libdir     = "C:\\Users\\Nobuhiro\\Documents\\Develop\\Playground\\Haskell\\cabal-install\\.stack-work\\install\\b6a8628b\\lib\\x86_64-windows-ghc-7.10.3\\cabal-install-0.1.0.0-CyoCsQcXIY5BA4PpzNnap7"
datadir    = "C:\\Users\\Nobuhiro\\Documents\\Develop\\Playground\\Haskell\\cabal-install\\.stack-work\\install\\b6a8628b\\share\\x86_64-windows-ghc-7.10.3\\cabal-install-0.1.0.0"
libexecdir = "C:\\Users\\Nobuhiro\\Documents\\Develop\\Playground\\Haskell\\cabal-install\\.stack-work\\install\\b6a8628b\\libexec"
sysconfdir = "C:\\Users\\Nobuhiro\\Documents\\Develop\\Playground\\Haskell\\cabal-install\\.stack-work\\install\\b6a8628b\\etc"

getBinDir, getLibDir, getDataDir, getLibexecDir, getSysconfDir :: IO FilePath
getBinDir = catchIO (getEnv "cabal_install_bindir") (\_ -> return bindir)
getLibDir = catchIO (getEnv "cabal_install_libdir") (\_ -> return libdir)
getDataDir = catchIO (getEnv "cabal_install_datadir") (\_ -> return datadir)
getLibexecDir = catchIO (getEnv "cabal_install_libexecdir") (\_ -> return libexecdir)
getSysconfDir = catchIO (getEnv "cabal_install_sysconfdir") (\_ -> return sysconfdir)

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = do
  dir <- getDataDir
  return (dir ++ "\\" ++ name)
