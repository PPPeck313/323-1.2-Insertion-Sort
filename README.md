# 1.2-Insertion-Sort<br />
CSC 323-32: Project 1.2 <Insertion Sort> (C++/Java)<br />
Preston Peck<br />
Due date: Sept. 13, 2016 <br />

**** Algorithm steps for linked list insertion sort:<br />

Step 0: prepare the skeleton of your program, including classes, etc.<br />
Step 1:  inFile1 <-- open common word file<br />
            outFile1 <-- open outFile-1<br />
Step 2: CwordlistHead <-- make a new linked list by the list constructor where CwordlistHead points to a dummy node<br />
Step 3:  commonWord <-- read a word from inFile1<br />
Step 4:  spot <-- findSpot(CwordlistHead , commonWord) // see algorithm steps below<br />
Step 5:  if spot != null // not duplicates<br />
     5.1: newNode <-- make a new node for  commonWord<br />
     5.2: call listInsert (Spot, newNode)<br />
Step 6:  debugPrint(outFile1, CwordlistHead)<br />
Step 7: repeat step 3 to step 6 until the inFile1 is empty<br />
Step 8: inFile2 <-- open English text file<br />
Step  9: insertionCnt <-- 0<br />
Step 10: textListHead <-- make a new linked list by the list constructor where textListHead points to a dummy node<br />
Step 11:  textWord <-- read a word from inFile2<br />
Step 12:  if (isCommonWord (CwordlistHead, data) == false)<br />
     12.1:  spot <-- findSpot(textListHead , textWord)<br />
     12.2: if spot == null <br />
                  Spot.count ++<br />
	else<br />
	    newNode <--  make a new node for  textWord<br />
                  listInsert (Spot, newNode) <br />
                  insertionCnt++<br />
Step 13: if insertionCnt >= 5<br />
	debugPrint(outFile1, textListHead) <br />
 	insertionCnt <-- 0 <br />
Step 14: repeat step 11 to step 13 until the inFile2 is empty<br />
Step 15: outFile2 <-- open output file2<br />
Step 16: printSortedList (outFile2 , textListHead)<br />

INPUT<br />
you<br />
i he she<br />
are is<br />
was am were<br />
of and if or<br />
him a an one<br />
yes no<br />
on in that<br />
the they them who<br />
what where<br />
when how why<br />
it here there<br />
not this for<br />
as be<br />

four score and seven years ago our fathers brought forth on this continent a new nation conceived<br />
in liberty and dedicated to the proposition that all men are created equal now we are engaged in a<br />
great civil war testing whether that nation or any nation so conceived and so dedicated can long<br />
endure we are met on a great battlefield of that war we have come to dedicate a portion of that<br />
field as a final resting place for those who here gave their lives so that nation might live it is<br />
altogether fitting and proper that we should do this but in a larger sense we cannot dedicate we<br />
cannot consecrate we cannot hallow this ground the brave men living and dead who struggled here<br />
have consecrated it far above our poor power to add or detract the world will little note nor long<br />
remember what we say here but it can never forget what they did here it is for us the living<br />
rather to be dedicated here to the unfinished work which they who fought here have thus far so<br />
nobly advanced it is rather for us to be here dedicated to the great task remaining before us that<br />
from these honored dead we take increased devotion to that cause for which they gave the last full<br />
measure of devotion that we here highly resolve that these dead shall not have died in vain that<br />
this nation under god shall have a new birth of freedom and that government of the people by the<br />
people for the people shall not perish from the earth<br />

OUTPUT<br />
listHead --> (dummy, you) --> (you, null)<br />

listHead --> (dummy, i) --> (i, you) --> (you, null)<br />

listHead --> (dummy, he) --> (he, i) --> (i, you) --> (you, null)<br />

listHead --> (dummy, he) --> (he, i) --> (i, she) --> (she, you) --> (you, null)<br />

listHead --> (dummy, are) --> (are, he) --> (he, i) --> (i, she) --> (she, you) --> (you, null)<br />

listHead --> (dummy, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, you) --> (you, null)<br />

listHead --> (dummy, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, was) --> (was, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, i) --> (i, is) --> (is, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, are) --> (are, he) --> (he, i) --> (i, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, i) --> (i, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, i) --> (i, if) --> (if, is) --> (is, of) --> (of, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, no) --> (no, of) --> (of, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, they) --> (they, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, who) --> (who, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, who) --> (who, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, where) --> (where, who) --> (who, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, for) --> (for, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, as) --> (as, for) --> (for, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />

listHead --> (dummy, a) --> (a, am) --> (am, an) --> (an, and) --> (and, are) --> (are, as) --> (as, be) --> (be, for) --> (for, he) --> (he, here) --> (here, him) --> (him, how) --> (how, i) --> (i, if) --> (if, in) --> (in, is) --> (is, it) --> (it, no) --> (no, not) --> (not, of) --> (of, on) --> (on, one) --> (one, or) --> (or, she) --> (she, that) --> (that, the) --> (the, them) --> (them, there) --> (there, they) --> (they, this) --> (this, was) --> (was, were) --> (were, what) --> (what, when) --> (when, where) --> (where, who) --> (who, why) --> (why, yes) --> (yes, you) --> (you, null)<br />


listHead --> (dummy, ago) --> (ago, four) --> (four, score) --> (score, seven) --> (seven, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, brought) --> (brought, continent) --> (continent, fathers) --> (fathers, forth) --> (forth, four) --> (four, our) --> (our, score) --> (score, seven) --> (seven, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, brought) --> (brought, conceived) --> (conceived, continent) --> (continent, dedicated) --> (dedicated, fathers) --> (fathers, forth) --> (forth, four) --> (four, liberty) --> (liberty, nation) --> (nation, new) --> (new, our) --> (our, score) --> (score, seven) --> (seven, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, brought) --> (brought, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, fathers) --> (fathers, forth) --> (forth, four) --> (four, liberty) --> (liberty, men) --> (men, nation) --> (nation, new) --> (new, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, to) --> (to, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, brought) --> (brought, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, liberty) --> (liberty, men) --> (men, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, to) --> (to, we) --> (we, years) --> (years, null)

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, brought) --> (brought, civil) --> (civil, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, liberty) --> (liberty, men) --> (men, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, testing) --> (testing, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, brought) --> (brought, can) --> (can, civil) --> (civil, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, liberty) --> (liberty, long) --> (long, men) --> (men, met) --> (met, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, proposition) --> (proposition, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)
listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, forth) --> (forth, four) --> (four, great) --> (great, have) --> (have, liberty) --> (liberty, long) --> (long, men) --> (men, met) --> (met, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, portion) --> (portion, proposition) --> (proposition, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, forth) --> (forth, four) --> (four, great) --> (great, have) --> (have, liberty) --> (liberty, long) --> (long, men) --> (men, met) --> (met, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proposition) --> (proposition, resting) --> (resting, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, have) --> (have, liberty) --> (liberty, live) --> (live, lives) --> (lives, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proposition) --> (proposition, resting) --> (resting, score) --> (score, seven) --> (seven, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, can) --> (can, civil) --> (civil, come) --> (come, conceived) --> (conceived, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, have) --> (have, liberty) --> (liberty, live) --> (live, lives) --> (lives, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, seven) --> (seven, should) --> (should, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, continent) --> (continent, created) --> (created, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, resting) --> (resting, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, will) --> (will, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, new) --> (new, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, war) --> (war, we) --> (we, whether) --> (whether, will) --> (will, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, to) --> (to, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, will) --> (will, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, testing) --> (testing, their) --> (their, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, task) --> (task, testing) --> (testing, their) --> (their, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, from) --> (from, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, honored) --> (honored, increased) --> (increased, larger) --> (larger, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, cause) --> (cause, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, devotion) --> (devotion, did) --> (did, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, from) --> (from, full) --> (full, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, honored) --> (honored, increased) --> (increased, larger) --> (larger, last) --> (last, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, measure) --> (measure, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, cause) --> (cause, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, devotion) --> (devotion, did) --> (did, died) --> (died, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, from) --> (from, full) --> (full, gave) --> (gave, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, highly) --> (highly, honored) --> (honored, increased) --> (increased, larger) --> (larger, last) --> (last, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, measure) --> (measure, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resolve) --> (resolve, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, shall) --> (shall, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, unfinished) --> (unfinished, us) --> (us, vain) --> (vain, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)<br />

listHead --> (dummy, above) --> (above, add) --> (add, advanced) --> (advanced, ago) --> (ago, all) --> (all, altogether) --> (altogether, any) --> (any, battlefield) --> (battlefield, before) --> (before, birth) --> (birth, brave) --> (brave, brought) --> (brought, but) --> (but, can) --> (can, cannot) --> (cannot, cause) --> (cause, civil) --> (civil, come) --> (come, conceived) --> (conceived, consecrate) --> (consecrate, consecrated) --> (consecrated, continent) --> (continent, created) --> (created, dead) --> (dead, dedicate) --> (dedicate, dedicated) --> (dedicated, detract) --> (detract, devotion) --> (devotion, did) --> (did, died) --> (died, do) --> (do, endure) --> (endure, engaged) --> (engaged, equal) --> (equal, far) --> (far, fathers) --> (fathers, field) --> (field, final) --> (final, fitting) --> (fitting, forget) --> (forget, forth) --> (forth, fought) --> (fought, four) --> (four, freedom) --> (freedom, from) --> (from, full) --> (full, gave) --> (gave, god) --> (god, government) --> (government, great) --> (great, ground) --> (ground, hallow) --> (hallow, have) --> (have, highly) --> (highly, honored) --> (honored, increased) --> (increased, larger) --> (larger, last) --> (last, liberty) --> (liberty, little) --> (little, live) --> (live, lives) --> (lives, living) --> (living, long) --> (long, measure) --> (measure, men) --> (men, met) --> (met, might) --> (might, nation) --> (nation, never) --> (never, new) --> (new, nobly) --> (nobly, nor) --> (nor, note) --> (note, now) --> (now, our) --> (our, place) --> (place, poor) --> (poor, portion) --> (portion, power) --> (power, proper) --> (proper, proposition) --> (proposition, rather) --> (rather, remaining) --> (remaining, remember) --> (remember, resolve) --> (resolve, resting) --> (resting, say) --> (say, score) --> (score, sense) --> (sense, seven) --> (seven, shall) --> (shall, should) --> (should, so) --> (so, struggled) --> (struggled, take) --> (take, task) --> (task, testing) --> (testing, their) --> (their, these) --> (these, those) --> (those, thus) --> (thus, to) --> (to, under) --> (under, unfinished) --> (unfinished, us) --> (us, vain) --> (vain, war) --> (war, we) --> (we, whether) --> (whether, which) --> (which, will) --> (will, work) --> (work, world) --> (world, years) --> (years, null)<br />

above 1<br />
add 1<br />
advanced 1<br />
ago 1<br />
all 1<br />
altogether 1<br />
any 1<br />
battlefield 1<br />
before 1<br />
birth 1<br />
brave 1<br />
brought 1<br />
but 2<br />
by 1<br />
can 2<br />
cannot 3<br />
cause 1<br />
civil 1<br />
come 1<br />
conceived 2<br />
consecrate 1<br />
consecrated 1<br />
continent 1<br />
created 1<br />
dead 3<br />
dedicate 2<br />
dedicated 4<br />
detract 1<br />
devotion 2<br />
did 1<br />
died 1<br />
do 1<br />
earth 1<br />
endure 1<br />
engaged 1<br />
equal 1<br />
far 2<br />
fathers 1<br />
field 1<br />
final 1<br />
fitting 1<br />
forget 1<br />
forth 1<br />
fought 1<br />
four 1<br />
freedom 1<br />
from 2<br />
full 1<br />
gave 2<br />
god 1<br />
government 1<br />
great 3<br />
ground 1<br />
hallow 1<br />
have 5<br />
highly 1<br />
honored 1<br />
increased 1<br />
larger 1<br />
last 1<br />
liberty 1<br />
little 1<br />
live 1<br />
lives 1<br />
living 2<br />
long 2<br />
measure 1<br />
men 2<br />
met 1<br />
might 1<br />
nation 5<br />
never 1<br />
new 2<br />
nobly 1<br />
nor 1<br />
note 1<br />
now 1<br />
our 2<br />
people 3<br />
perish 1<br />
place 1<br />
poor 1<br />
portion 1<br />
power 1<br />
proper 1<br />
proposition 1<br />
rather 2<br />
remaining 1<br />
remember 1<br />
resolve 1<br />
resting 1<br />
say 1<br />
score 1<br />
sense 1<br />
seven 1<br />
shall 3<br />
should 1<br />
so 4<br />
struggled 1<br />
take 1<br />
task 1<br />
testing 1<br />
their 1<br />
these 2<br />
those 1<br />
thus 1<br />
to 8<br />
under 1<br />
unfinished 1<br />
us 3<br />
vain 1<br />
war 2<br />
we 10<br />
whether 1<br />
which 2<br />
will 1<br />
work 1<br />
world 1<br />
years 1<br />
