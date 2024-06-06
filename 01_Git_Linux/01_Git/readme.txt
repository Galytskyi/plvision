########################################## 

classic@Steel:~$ mkdir git_home_work
classic@Steel:~$ cd git_home_work
classic@Steel:~/git_home_work$ touch main.c
classic@Steel:~/git_home_work$ touch Makefile
classic@Steel:~/git_home_work$ mkdir math_lib
classic@Steel:~/git_home_work$ cd math_lib
classic@Steel:~/git_home_work/math_lib$ mkdir src
classic@Steel:~/git_home_work/math_lib$ cd src
classic@Steel:~/git_home_work/math_lib/src$ touch _math_lib.c
classic@Steel:~/git_home_work/math_lib/src$ cd ..
classic@Steel:~/git_home_work/math_lib$ mkdir inc && cd inc
classic@Steel:~/git_home_work/math_lib/inc$ touch _math_lib.h
classic@Steel:~/git_home_work/math_lib$ cd ../..
classic@Steel:~$ tree
git_home_work
├── Makefile
├── main.c
└── math_lib
    ├── inc
    │   └── _math_lib.h
    └── src
        └── _math_lib.c

3 directories, 4 filescd 

########################################## 

classic@Steel:~/git_home_work$ git config --global user.name "Sergii Galytskyi"
classic@Steel:~/git_home_work$ git config --global user.email Galytskyi@gmail.com
classic@Steel:~/git_home_work$ git init
classic@Steel:~/git_home_work$ ls -la
total 16
drwxr-xr-x  4 classic classic 4096 May 28 17:17 .
drwxr-x--- 13 classic classic 4096 May 28 17:17 ..
drwxr-xr-x  7 classic classic 4096 May 28 17:17 .git
-rw-r--r--  1 classic classic    0 May 28 17:05 Makefile
-rw-r--r--  1 classic classic    0 May 28 17:04 main.c
drwxr-xr-x  4 classic classic 4096 May 28 17:07 math_lib

########################################## 

classic@Steel:~/git_home_work$ git checkout -b master
Switched to a new branch 'master'

classic@Steel:~/git_home_work$ git add .
classic@Steel:~/git_home_work$ git log
fatal: your current branch 'master' does not have any commits yet
classic@Steel:~/git_home_work$ git branch


classic@Steel:~/git_home_work$ git commit -m 'Structure of git_home_work

├── Makefile
├── main.c
└── math_lib
    ├── inc
    │   └── _math_lib.h
    └── src
        └── _math_lib.c'
[master (root-commit) a8fdce9] Structure of git_home_work
 4 files changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 Makefile
 create mode 100644 main.c
 create mode 100644 math_lib/inc/_math_lib.h
 create mode 100644 math_lib/src/_math_lib.c

########################################## 

classic@Steel:~/git_home_work$ git log
commit a8fdce9a68cc8f8d4a1aab124b534ca63ab4338c (HEAD -> master)
Author: Sergii Galytskyi <Galytskyi@gmail.com>
Date:   Tue May 28 17:31:37 2024 +0300

    Structure of git_home_work

    ├── Makefile
    ├── main.c
    └── math_lib
        ├── inc
        │   └── _math_lib.h
        └── src
            └── _math_lib.c

classic@Steel:~/git_home_work$ git branch
* master

########################################## 

classic@Steel:~/git_home_work$ nano main.c
classic@Steel:~/git_home_work$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   main.c

no changes added to commit (use "git add" and/or "git commit -a")

classic@Steel:~/git_home_work$ git add main.c
classic@Steel:~/git_home_work$ git commit -sm "Add the empty main function to \"main.c\" file"
[master 532e7f2] Add the empty main function to "main.c" file
 1 file changed, 6 insertions(+)

classic@Steel:~/git_home_work$ git log
commit 532e7f241507c4815896a505e85a07fca0fc2c1e (HEAD -> master)
Author: Sergii Galytskyi <Galytskyi@gmail.com>
Date:   Tue May 28 17:38:07 2024 +0300

    Add the empty main function to "main.c" file

    Signed-off-by: Sergii Galytskyi <Galytskyi@gmail.com>

########################################## 

classic@Steel:~/git_home_work$ git checkout -b dev1
Switched to a new branch 'dev1'
classic@Steel:~/git_home_work$ git branch
* dev1
  master

########################################## 

classic@Steel:~/git_home_work$ git checkout master
Switched to branch 'master'

classic@Steel:~/git_home_work$ nano main.c
classic@Steel:~/git_home_work$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   main.c

no changes added to commit (use "git add" and/or "git commit -a")

classic@Steel:~/git_home_work$ git add main.c
classic@Steel:~/git_home_work$ git commit -sm "Add print function to \"main.c\" file"
[master 64842df] Add print function to "main.c" file
 1 file changed, 1 insertion(+)

########################################## 

classic@Steel:~/git_home_work$ git checkout -b dev2
Switched to a new branch 'dev2'
classic@Steel:~/git_home_work$ git branch
  dev1
* dev2
  master

########################################## 

classic@Steel:~/git_home_work$ git checkout master
Switched to branch 'master'

classic@Steel:~/git_home_work$ nano main.c
classic@Steel:~/git_home_work$ git add main.c
classic@Steel:~/git_home_work$ git commit --amend -sm "Add end edit print function to \"main.c\" file"
classic@Steel:~/git_home_work$ git log
commit 7dc511a2571c2f474192b6eafddcec74cae5afa6 (HEAD -> master)
Author: Sergii Galytskyi <Galytskyi@gmail.com>
Date:   Tue May 28 17:44:22 2024 +0300

    Add end edit print function to "main.c" file

    Signed-off-by: Sergii Galytskyi <Galytskyi@gmail.com>

########################################## 

classic@Steel:~/git_home_work$ git checkout dev1
Switched to branch 'dev1'

classic@Steel:~/git_home_work$ cd math_lib/src/
classic@Steel:~/git_home_work/math_lib/src$ nano math_lib.c
classic@Steel:~/git_home_work/math_lib/src$ git add math_lib.c
classic@Steel:~/git_home_work/math_lib/src$ git commit -sm "Add main function to \"math_lib.c\" file in dev1"
[dev1 d989d43] Add main function to "math_lib.c" file in dev1
 1 file changed, 7 insertions(+)
 create mode 100644 math_lib/src/math_lib.c

########################################## 

classic@Steel:~/git_home_work/math_lib/src$ git checkout dev2
Switched to branch 'dev2'
classic@Steel:~/git_home_work/math_lib/src$ nano math_lib.c
classic@Steel:~/git_home_work/math_lib/src$ git add math_lib.c
classic@Steel:~/git_home_work/math_lib/src$ git commit -sm "Add main function to \"math_lib.c\" file in dev2"
[dev2 af290e0] Add main function to "math_lib.c" file in dev2
 1 file changed, 7 insertions(+)
 create mode 100644 math_lib/src/math_lib.c

########################################## 

classic@Steel:~/git_home_work/math_lib/src$ git checkout master
Switched to branch 'master'

classic@Steel:~/git_home_work/math_lib/src$ cd ../../
classic@Steel:~/git_home_work$ git branch
  dev1
  dev2
* master

classic@Steel:~/git_home_work$ git merge dev1
Merge made by the 'ort' strategy.
 math_lib/src/math_lib.c | 7 +++++++
 1 file changed, 7 insertions(+)
 create mode 100644 math_lib/src/math_lib.c

########################################## 

classic@Steel:~/git_home_work$ git merge dev2
Auto-merging main.c
CONFLICT (content): Merge conflict in main.c
Automatic merge failed; fix conflicts and then commit the result.

classic@Steel:~/git_home_work$ vim main.c
classic@Steel:~/git_home_work$ git add .
classic@Steel:~/git_home_work$ git commit -m "resolve merge confict"

########################################## 

git reset --hard HEAD~2classic@Steel:~/git_home_work$ git reset --hard HEAD~1
HEAD is now at a8ef750 Merge branch 'dev1'

########################################## 




