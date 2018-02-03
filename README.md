# 1.2-Insertion-Sort
CSC 323-32: Project 1.2 <Insertion Sort> (C++/Java)
Preston Peck
Due date: Sept. 13, 2016 

**** Algorithm steps for linked list insertion sort:

Step 0: prepare the skeleton of your program, including classes, etc.

Step 1:  inFile1 <-- open common word file
            outFile1 <-- open outFile-1

Step 2: CwordlistHead <-- make a new linked list by the list constructor where CwordlistHead points to a dummy node

Step 3:  commonWord <-- read a word from inFile1

Step 4:  spot <-- findSpot(CwordlistHead , commonWord) // see algorithm steps below

Step 5:  if spot != null // not duplicates
     5.1: newNode <-- make a new node for  commonWord
     5.2: call listInsert (Spot, newNode)

Step 6:  debugPrint(outFile1, CwordlistHead)

Step 7: repeat step 3 to step 6 until the inFile1 is empty

Step 8: inFile2 <-- open English text file

Step  9: insertionCnt <-- 0

Step 10: textListHead <-- make a new linked list by the list constructor where textListHead points to a dummy node

Step 11:  textWord <-- read a word from inFile2

Step 12:  if (isCommonWord (CwordlistHead, data) == false)
     12.1:  spot <-- findSpot(textListHead , textWord)
     12.2: if spot == null 
                  Spot.count ++
	else
	    newNode <--  make a new node for  textWord
                  listInsert (Spot, newNode) 
                  insertionCnt++

Step 13: if insertionCnt >= 5
	debugPrint(outFile1, textListHead) 
 	insertionCnt <-- 0 

Step 14: repeat step 11 to step 13 until the inFile2 is empty

Step 15: outFile2 <-- open output file2

Step 16: printSortedList (outFile2 , textListHead)

INPUT
you
i he she
are is
was am were
of and if or
him a an one
yes no
on in that
the they them who
what where
when how why
it here there
not this for
as be

four score and seven years ago our fathers brought forth on this continent a new nation conceived
in liberty and dedicated to the proposition that all men are created equal now we are engaged in a
great civil war testing whether that nation or any nation so conceived and so dedicated can long
endure we are met on a great battlefield of that war we have come to dedicate a portion of that
field as a final resting place for those who here gave their lives so that nation might live it is
altogether fitting and proper that we should do this but in a larger sense we cannot dedicate we
cannot consecrate we cannot hallow this ground the brave men living and dead who struggled here
have consecrated it far above our poor power to add or detract the world will little note nor long
remember what we say here but it can never forget what they did here it is for us the living
rather to be dedicated here to the unfinished work which they who fought here have thus far so
nobly advanced it is rather for us to be here dedicated to the great task remaining before us that
from these honored dead we take increased devotion to that cause for which they gave the last full
measure of devotion that we here highly resolve that these dead shall not have died in vain that
this nation under god shall have a new birth of freedom and that government of the people by the
people for the people shall not perish from the earth

OUTPUT
listHead --> (dummy, you) --> (you, null)

listHead --> (dummy, i) --> (i, you) --> (you, null)

listHead --> (dummy, he) --> (he, i) --> (i, you) --> (you, null)

listHead --> (dummy, he) --> (he, i) --> (i, she) --> (she, you) --> (you, null)

listHead --> (dummy, are) --> (are, he) --> (he, i) --> (i, she) --> (she, you) --> (you, null)

listHead --> (dummy, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, you) --> (you, null)

listHead --> (dummy, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, i) --> (i, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, i) --> (i, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, i) --> (i, if) --> (if, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, no) --> (no, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, they) --> (they, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, who) --> (who, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, who) --> (who, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, where) --> (where, who) --> (who, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, for) --> (for, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, as) --> (as, for) --> (for, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, as) --> (as, be) --> (be, for) --> (for, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)


listHead --> (dummy, ago) --> (ago, four) --> (four, score) --> (score, seven) --> (seven, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, brought) --> (brought, continent) --> (continent, fathers) --> (fathers, forth) --> (forth, four) --> (four, our) --> (our, score) --> (score, seven) --> (seven, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, brought) --> (brought, conceived) --> (conceived, continent) --> (continent, dedicated) --> (dedicated, fathers) --> (fathers, forth) --> (forth, four) --> (four, liberty) --> (liberty, nation) --> (nation, new) --> (new, our) --> (our, score) --> (score, seven) --> (seven, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, brought) --> (brought, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, fathers) --> (fathers, forth) --> (forth, four) --> (four, liberty) --> (liberty, men) --> (men, nation) --> (nation, new) --> (new, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, to) --> (to, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, brought) --> (brought, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, liberty) --> (liberty, men) --> (men, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, to) --> (to, we) --> (we, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, brought) --> (brought, civil) --> (civil, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, liberty) --> (liberty, men) --> (men, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, testing) --> (testing, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, brought) --> (brought, can) --> (can, civil) --> (civil, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, liberty) --> (liberty, long) --> (long, men) --> (men, met) --> (met, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)
listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, have) --> (have, liberty) --> (liberty, long) --> (long, men) --> (men, met) --> (met, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, portion) --> (portion, proposition) --> (proposition, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, forth) --> (forth, four) --> (four, great) --> (great, have) --> (have, liberty) --> (liberty, long) --> (long, men) --> (men, met) --> (met, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proposition) --> (proposition, resting) --> (resting, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, have) --> (have, liberty) --> (liberty, live) --> (live, lives) --> (lives, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proposition) --> (proposition, resting) --> (resting, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, have) --> (have, liberty) --> (liberty, live) --> (live, lives) --> (lives, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, seven) --> (seven, should) --> (should, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, above) --> (above, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, will) --> (will, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, will) --> (will, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, will) --> (will, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, task) --> (task, testing) --> (testing, their) --> (their, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, from) --> (from, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, honored) --> (honored, increased) --> (increased, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, cause) --> (cause, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, devotion) --> (devotion, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, from) --> (from, full) --> (full, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, honored) --> (honored, increased) --> (increased, larger) --> (larger, last) --> (last, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, measure) --> (measure, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, cause) --> (cause, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, devotion) --> (devotion, did) --> (did, died) --> (died, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, from) --> (from, full) --> (full, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, highly) --> (highly, honored) --> (honored, increased) --> (increased, larger) --> (larger, last) --> (last, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, measure) --> (measure, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resolve) --> (resolve, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, shall) --> (shall, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, vain) --> (vain, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, birth) --> (birth, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, cause) --> (cause, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, devotion) --> (devotion, did) --> (did, died) --> (died, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, freedom) --> (freedom, from) --> (from, full) --> (full, gave) --> (gave, god) --> (god, government) --> (government, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, highly) --> (highly, honored) --> (honored, increased) --> (increased, larger) --> (larger, last) --> (last, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, measure) --> (measure, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resolve) --> (resolve, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, shall) --> (shall, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, under) --> (under, unfinished) --> (unfinished, us) --> (us, vain) --> (vain, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)

above 1
add 1
advanced 1
ago 1
all 1
altogether 1
any 1
battlefield 1
before 1
birth 1
brave 1
brought 1
but 2
by 1
can 2
cannot 3
cause 1
civil 1
come 1
conceived 2
consecrate 1
consecrated 1
continent 1
created 1
dead 3
dedicate 2
dedicated 4
detract 1
devotion 2
did 1
died 1
do 1
earth 1
endure 1
engaged 1
equal 1
far 2
fathers 1
field 1
final 1
fitting 1
forget 1
forth 1
fought 1
four 1
freedom 1
from 2
full 1
gave 2
god 1
government 1
great 3
ground 1
hallow 1
have 5
highly 1
honored 1
increased 1
larger 1
last 1
liberty 1
little 1
live 1
lives 1
living 2
long 2
measure 1
men 2
met 1
might 1
nation 5
never 1
new 2
nobly 1
nor 1
note 1
now 1
our 2
people 3
perish 1
place 1
poor 1
portion 1
power 1
proper 1
proposition 1
rather 2
remaining 1
remember 1
resolve 1
resting 1
say 1
score 1
sense 1
seven 1
shall 3
should 1
so 4
struggled 1
take 1
task 1
testing 1
their 1
these 2
those 1
thus 1
to 8
under 1
unfinished 1
us 3
vain 1
war 2
we 10
whether 1
which 2
will 1
work 1
world 1
years 1
