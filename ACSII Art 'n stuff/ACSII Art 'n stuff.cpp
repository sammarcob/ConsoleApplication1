/*
Author: Brooks Sammarco
pair programmer: Slater Swart
Project Name: ACSII Art
File Name: ACSII Art 'n stuff.cpp
Purpose: make an art museum with 3 pictures
Pseudocode: introduce the museum and it's pictures, then let the player choose what picture thy want to see.
Maintenance Log:
11/4/21: wrote all the code and found art.
11/5/21: wrote comments
*/

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	string art;
	

	printf("welcome to the art museum. we have like 3 pictures for you to look at\n");
	printf("which would you like to examine\n");
	printf("hope\ndreams\nstroke\n");
	cin >> art;
	if (art == "hope")
	{
printf("	  ____                                    	      \n");
printf("  z@~ b                                    |  `U,	  \n");
printf(" ]@[  |                                   ]'  z@'	  \n");
printf(" d@~' `|, .__     _----L___----, __, .  _t'   `@j	  \n");
printf("`@L_,    -~  -- ~-a,           `C.  ~  O_    ._`@	  \n");
printf(" q@~'   ]P       ]@[            `Y=,   `H+z_  `a@	  \n");
printf(" `@L  _z@        d@               Ya     `-@b,_a'	  \n");
printf("  `-@d@a'       )@[               `VL      `a@@'	  \n");
printf("    aa~'   ],  .a@'                qqL  ), ./~		  \n");
printf("    @@_  _z~  _d@[                 .V@  .L_d'		  \n");
printf("      ~@@@'  ]@@@'        __      )@n@bza@- 		  \n");
printf("       `-@zzz@@@L        )@@z     ]@@=%- 			  \n");
printf("         ~~@@@@@bz_    _a@@@@z___a@K				  \n");
printf("              ~-@@@@@@@@@@@@@@@@@@~    js			  \n");
printf("                `~~~-@~~-@@~~~~~'					  \n");
printf("Jeremy Seinfeld");
	}
	else if (art == "dreams")
	{
printf("             ___		   \n");
printf("          .=`   `=._.---.  \n");
printf("        .`         c ' Y `|\n");
printf("       /   ,       `.  w_/ \n");
printf("   jgs |   '-.   /     /   \n");
printf(" _,..._|      )_-\ \_=.\   \n");
printf("`-....-'`------)))`=-'``'` \n");
printf("Joan G. Stark");
	}
	else if (art == "stroke")
	{
printf("                          .sS$$$$$$$$$$$$$Ss.								 \n");
printf("                        .sS$$$$$$$$$$$$$$$$$Ss.								 \n");
printf("                       .$$.$$$$$$$$$$$$$$$$$$$$s.							 \n");
printf("                      .$$$:$$$$$$$$$$$$$$$$$$$$$$Ss.						 \n");
printf("                    .$$$.'$$$$$$$$;~' `~~~~~~C$$$$$$s.						 \n");
printf("                  .$'$$:$$$$$$$$'            `  $$$$$S.						 \n");
printf("               .S$$:$$:$$$$$$$'             _    `$$$$$s.					 \n");
printf("             .S$$:$$:$$$$$£$$'        __--~~  _    $$$$$$.					 \n");
printf("            .$$$$:$$:$$$$$$$'     _.-~    _.-~     `$$$$$$$.				 \n");
printf("          .$$$$$:$$:$$$$$$$'    -~    _.-~           `$$$$$$.				 \n");
printf("         .$$$$:$$:$$$$$$$$'    _.--~         ..s$$$$S.$$$$$$$s.				 \n");
printf("        .$$$$$:$$$:$$$$$$$     _..._        .$$$SSSSSS$$$$$$$$$.			 \n");
printf("       .$$$$$:$$$$:$$$$$$$    ~.sggg.        `  .~(g )$$$$$$$$$$.			 \n");
printf("       $$$$$:$$$$$:$$$$$$$ .sS$$$$$$$$s.     : '`--`' `$$$$$$$$$$.			 \n");
printf("       `$$$:$$$$$$:$$$$$$$.$$` .. g~-. `.    `.-.._    `$$$$$$$$$$			 \n");
printf("        $$$:$$$$$$:$$$$$$$`$' ' `._.'   :      `---      $$$$$$$$$.			 \n");
printf("        $$$:.$$$$$:$$$$$$$    `---'  _.'                 $$$$$$$$$$$.		 \n");
printf("        $$$$$:$$$$:$$$$$$s      ----`           .        $$$$$$$$$$$$.		 \n");
printf("        $$$$$`.$$$:$$$$$$$.                      `-._   .$$$$$$$$$$$$$$Sss.	 \n");
printf("        $$$$$$` $$:$$$$$$$$.         _.:         .'   ;  $$$$$$$$$$$$$$$$$$$.\n");
printf("       .s$$$$$$'$$`.$$$$$$$$.      .'  `.       ' _ .`.  $$$$$$$$$$$$$$$$$$$$\n");
printf("     .s$$$$$$$$$$$$:$$$$$$$$$     :  _   ~~-...'.'.'  :  $$$$$$$$$$$$$$$$$$$$\n");
printf("   .s$$$$$$$$$$$$$$`.$$$$$$$$s      : .~-,-.-.~:'.'   :  $$$$$$$$$$$$$$$$$$$$\n");
printf(" .s$$$$$$$$$$$$$$$$$`$$$$$$$$$$.    `  ~-.````'.'      `.$$$$$$$$$$$$$$$$$$$'\n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$S.   .      ```'        $$$$$$$$$$$$$$$$$$'	 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$S. `.                 $$$$$$$$$$$$$$$$'	 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$Ss.`.              .$$$$$$$$$$$$$$'		 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$Ss.          .s$$$$$$$$$$$$'			 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$Ss......sS$$$$$$$$$$$'			 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'				 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'				 \n");
printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'					 \n");
printf("Arthur B. james");
	}
	_getch();

	return 0;
}
