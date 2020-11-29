## JMP - C 101 - Exam 01

----

### Task 01

Given a file `unigrams.txt` with single positive and negative words with weights and a file `bigrams.txt` with double positive and negative words with their weights,

Determine if a passage in the input file `paragraph.txt` is positive or negative.

Both unigrams and bigrams in `unigrams.txt` and `bigrams.txt` begin with either positive or negative sign to indicate whether it is a positive or negative term. A passage is said to be positive when the sum of weight of positive unigrams and bigrams in it is greater than sum of weight of negative unigrams and bigrams in it.

If a passage is negative then replace all the negative unigrams with positive unigrams. Passage in the input file ends with the keyword `"END"`.

Weights of all positive unigrams are unique and similarly weights of all negative unigrams are also unique.

For example, if the content of unigrams.txt is as follows:

**`unigrams.txt`**

```txt
-bad 5
-worse 3
-worst 6
+great 6
+good 5
+nice 3
```

*bad*, *worse* and *worst* are negative words and *great*, *good* and *nice* are positive words. same for bigrams as follows.

**`bigrams.txt`**

```txt
+very good 5
+very great 7
-very bad 5
-bad luck 7
-bad mood 6
+good mood 6
```

If the input pragraph is

> *The movie was very good that we enjoyed it though the theatre was bad, it was a great experience Last movie was very bad and we came out with a bad mood good. END*

then weights sum of positive terms is 21 and weights sum of negative terms is 26. So negative unigrams have to be replaced by positive unigrams of same weight and the result will be.

> *The movie was very good that we enjoyed it though the theatre was good It was a great experience Last movie was very good and we came out with a good mood good*
