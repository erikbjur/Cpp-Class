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
To list the folders and files in the current directory you type the ```ls``` command for MacOS.
This is short for List.
```
user_name@Computer_Name Folder_Name %ls
```

To list the folders and files in the current directory you type the ```dir``` command for Windows.
This is short for Directory.
```
C:\Users\User_Name\Folder_Name>dir
```
To change directories, use the ```cd``` command, short for "Change Directory".
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

To go back a directory use the ```cd ..``` command like this:
```
user_name@Computer_Name Current_Folder_Name/Homework %cd ..
```
Or on windows:
```
C:\Users\User_Name\Documents\Homework>cd ..
```

## Cloning a repo
To clone this repo we use the command:
```git clone``` Followed by the url of the repo.  Here's an example:
```
git clone https://github.com/UserName/Cpp-Class.git
```

## Checking for updates using "Fetch"
You can check if there are updates in a repo by calling the ```git fetch``` command.

Here's an example of some output from calling ```git fetch``` on our repo above:
```
C:\Users\UserName\Documents\Cpp-Class>git fetch
remote: Enumerating objects: 7, done.
remote: Counting objects: 100% (7/7), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 4 (delta 2), reused 4 (delta 2), pack-reused 0
Unpacking objects: 100% (4/4), 653 bytes | 81.00 KiB/s, done.
From https://github.com/UserName/Cpp-Class
   a6d28f2..136e6cf  main       -> origin/main

C:\Users\UserName\Documents\Cpp-Class>
```
This command downloads any changes that have been saved to the repo since we cloned it.

Once we've downloaded the changes, we need to ask git about the status of our repo.

## Checking the status of our repo
Use the command ```git status```
```
C:\Users\UserName\Documents\Cpp-Class>git status
On branch main
Your branch is behind 'origin/main' by 1 commit, and can be fast-forwarded.
  (use "git pull" to update your local branch)

nothing to commit, working tree clean

C:\Users\UserName\Documents\Cpp-Class>
```
So reading through the response, it looks like our repo is behind the current one by one commit.

## Updating our repo by downloading new changes
To download any new changes into our repo and make it current we use the command ```git pull``` as in we are "pulling in new changes".

When we type ```git pull``` we get the following:
```
C:\Users\UserName\Documents\Cpp-Class>git pull
Updating a6d28f2..136e6cf
Fast-forward
 Loops/loops.cpp | 44 ++++++++++++++++++++++++++++++++++----------
 1 file changed, 34 insertions(+), 10 deletions(-)

C:\Users\UserName\Documents\Cpp-Class>
```

## Creating your own new repository using VS Code UI.
You can create a new repository by using the built in VS Code version control tools.  There's a button titled "Initialize Repository" that is available if VS Code doesn't find any repositories in the opened folder.

Files that can be added to the repo are shown with a "U" after them in the file browser area.  Click the "+" next to each file to stage them so they can be added to the repo.  Then add a message above the commit button that describes the files you added and click "Commit".    

## Creating your own new repository with the command line.
You can create a new repository in the terminal by using the ```git init``` command.

Simply navigate to the folder you want to use source control on and type ```git init``` in the terminal.  A new .git folder will be added.

Type ```git add .``` to add all untracked files to the staging area.

To view the status of our repo after we added the files, type ```git status```.

You might see something like this:
```
UserName@ComputerName Code % git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        app.exe
        main.cpp

nothing added to commit but untracked files present (use "git add" to track)
UserName@ComputerName Code % git add .
UserName@ComputerName Code % git status
On branch main

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   app.exe
        new file:   main.cpp
```

Type ```git commit -m ``` followed by a commit message in quotes.
It should look something like: ```git commit -m "My commit message goes here.```

The result of your commit should look something like this:
```
UserName@ComputerName Code % git commit -m "First commit"
[main (root-commit) 9a1cafa] First commit
 2 files changed, 14 insertions(+)
 create mode 100755 app.exe
 create mode 100644 main.cpp
 ```

## Branching
Git allows us to create different versions of our code.  These versions are called branches.  By default each git repo has a "main" branch.  Older repos used a branch called "master".

If you wanted to create a new branch and work on it, you can do this in two different ways.

The first / longer way is a two step process.  You would type: ```git branch "Name Of New Branch"```

Keep the names of branches simple as you will type them often.

Once you have a branch you need to check it out.  Do this by typing ```git checkout "Name Of New Branch"```

Here's an example:
```
UserName@ComputerName Code % git branch new_feature
UserName@ComputerName Code % git checkout new_feature
Switched to branch 'new_feature'
```

You can commit new changes to this branch just like you did for the main branch.

## Merging one branch into another.
Once you are happy with the changes you made and want to bring those changes into your main branch, you need to merge them in.  Git does an amazing job of merging all of the various changes from one branch into another.

In this example, we want to merge the branch we were working on called "new_feature" into our main branch.

1. We need to commit all our changes to the new_branch. Use ```git commit -m``` just as before.
2. We need to checkout the main branch.  We use ```git checkout main``` to checkout the main branch.
3. We do the actual merge.  We are now working on the "main" branch so we want to merge the "new_branch" into "main".
Type ```git merge new_branch``` and all of the changes you made to the branch called new_branch will be brought into the branch called main.


