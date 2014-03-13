The Order Metalanguage for C Preprocessor Metaprogramming
=========================================================

From the preface I wrote years ago:

> Order grew out of my interest in the design of programming languages and
> metaprogramming as well as desire to make something original, fascinating and
> beautiful.  My work on the
> [Boost Preprocessor](http://www.boost.org/doc/libs/1_55_0/libs/preprocessor/doc/index.html)-library
> had left me unsatisfied.  While it was clear to me that it could theoretically
> be used to implement *useful* non-trivial metaprograms, it would have been
> quite tedious work, full of nasty little details and limitations to trip you
> up.  I considered the prospects for further enhancements to the library, but
> it didn't seem possible to provide a programming model that I would have
> considered pleasant to think in.  It occured to me that instead of attempting
> to provide semimodular enhancements on top of the C preprocessor in a
> bottom-up fashion, it might be possible to lift the limitations by designing a
> complete monolithic interpreter for a high-level source language in a top-down
> fashion.  After some experiments at interpreting lambda-calculus and a couple
> of prototype interpreters for early versions of the Order language, I was left
> with a feeling that it would be too inefficient to be practical.  The most
> serious limitation seemed to be the inability of the early prototypes to
> generate arbitrary output efficiently.  I decided to forget about the
> interpreter and move on, but the work proved too interesting for me to forget
> completely.  Over a long period of time I found several small incremental
> improvements to the interpreter until it suddenly started to look like more
> than a theoretical curiosity.  Then I knew I just had to finish the work.
> Hopefully everyone will be able to find some beauty in the result.  At least I
> know I've had a lot of fun designing the language.

Vesa Karvonen
