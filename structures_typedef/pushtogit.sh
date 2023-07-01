#!/bin/bash
echo 'Enter the file name you want to add:'
read fileName

git add "$fileName"

echo 'Enter the commit message:'
read commitMessage

git commit -m "$commitMessage"

echo 'Enter the name of the branch:'
read branch

git push origin $branch

read
