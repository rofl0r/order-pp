(C) Copyright Vesa Karvonen 2004.

Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.)

# Order programming examples

An attempt has been made to make each example mostly self-contained
at the cost of repeating some explanations. A reader having a good
understanding of programming should be able to follow the examples
with a minimal understanding of the Order language. The narrative
body of each example briefly motivates the example and gives a bit
of background information, but doesn't aim to explain every detail
of each Order language feature used.

Most of the examples are meant to apply programming techniques that
are likely to be useful in practice to the kind of problems that one
might encounter in practice, but none of the examples is meant to be
an industry strength solution. This is emphasized by exercises,
given at the end of each example, that ask the reader to modify and
extend the examples in various ways. While it is probably too much
to ask the reader to complete all the exercises, all readers are
strongly recommended to preprocess one or more examples to actually
see what is ultimately being generated.

## Rant of the day

In case the reader is interested in preprocessing the examples, it
is good to know that at the time of writing, the author is only
aware of two preprocessors that are able to preprocess the examples
correctly. The preprocessors are the GNU CPP and the Wave
preprocessor library by Hartmut Kaiser. To the best of the knowledge
of the author, the implementation of the Order interpreter strictly
conforms to the [C99] standard. Unfortunately, despite the supposed
simplicity of the C preprocessor, and the existence of a stable C
standard first since 1989 and later since 1999, with a couple of
exceptions, almost no preprocessor implementation conforms even to
the 1989 standard. In the opinion of the author, 5 years, let alone
15 years, should be considerably more than enough time to get the
implementation of a simple language right. The author will not spend
one minute of his time to write workarounds for broken
preprocessors.
