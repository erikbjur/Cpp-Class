# This is a simple guide to using git for our class

## First off using the terminal to navigate around your hard drive
Here's the default terminal in MacOs
```
user_name@Computer_Name Current_Folder_Name %
```
Or on windows:
```
C:\Users\User_Name\Current_Folder_Name>
```
To list the folders and files in the current directory you type the "ls" command for MacOS.
This is short for List.
```
user_name@Computer_Name Folder_Name %ls
```

To list the folders and files in the current directory you type the "dir" command for Windows.
This is short for Directory.
```
C:\Users\User_Name\Folder_Name>dir
```
To change directories, use the "cd" command, short for "Change Directory".
This is then followed by the name of the folder in the current folder you want to enter.

So if we are in the directory "Documents" and there is a folder called "Homework" that I want to enter, I would type:
```
user_name@Computer_Name Documents % cd Homework
```
Or on Windows:
```
C:\Users\User_Name\Documents>cd Homework
```
Notice that there is a space between the command and the folder name.

To go back a directory use the ".." command like this:
```
user_name@Computer_Name Current_Folder_Name/Homework %..
```
Or on windows:
```
C:\Users\User_Name\Documents\Homework>..
```

## Cloning a repo
To clone this repo we use the command:
```git clone``` Followed by the url of the repo.  Here's an example:
```
git clone https://github.com/erikbjur/Cpp-Class.git
```

## Checking for updates using "Fetch"
You can check if there are updates in a repo by calling the ```git fetch``` command.

Here's an example of some output from calling ```git fetch``` on our repo above:
```
C:\Users\ErikBjur\Documents\Cpp-Class>git fetch
remote: Enumerating objects: 7, done.
remote: Counting objects: 100% (7/7), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 4 (delta 2), reused 4 (delta 2), pack-reused 0
Unpacking objects: 100% (4/4), 653 bytes | 81.00 KiB/s, done.
From https://github.com/erikbjur/Cpp-Class
   a6d28f2..136e6cf  main       -> origin/main

C:\Users\ErikBjur\Documents\Cpp-Class>
```
This command downloads any changes that have been saved to the repo since we cloned it.

Once we've downloaded the changes, we need to ask git about the status of our repo.

## Checking the status of our repo
Use the command ```git status```
```
C:\Users\ErikBjur\Documents\Cpp-Class>git status
On branch main
Your branch is behind 'origin/main' by 1 commit, and can be fast-forwarded.
  (use "git pull" to update your local branch)

nothing to commit, working tree clean

C:\Users\ErikBjur\Documents\Cpp-Class>
```
So reading through the response, it looks like our repo is behind the current one by one commit.

## Updating our repo with new changes
To "pull" all the changes into our repo and make it current we use the command ```git pull```

Then we get:
```
C:\Users\ErikBjur\Documents\Cpp-Class>git pull
Updating a6d28f2..136e6cf
Fast-forward
 Loops/loops.cpp | 44 ++++++++++++++++++++++++++++++++++----------
 1 file changed, 34 insertions(+), 10 deletions(-)

C:\Users\ErikBjur\Documents\Cpp-Class>
```
