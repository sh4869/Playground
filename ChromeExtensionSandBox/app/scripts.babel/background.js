'use strict';

chrome.runtime.onInstalled.addListener(details => {
  console.log('previousVersion', details.previousVersion);
});

console.log('\'Allo \'Allo! Event Page');

chrome.tabs.onRemoved.addListener((tabId,removeInfo) => {
  console.log("Tab ID: " + tabId.toString())
});