from math import sqrt
import sys
from typing import TYPE_CHECKING


if TYPE_CHECKING:
    from collections.abc import Iterator


def factorise(n: int) -> "Iterator[int]":
    yield 1
    for m in range(2, int(sqrt(n)) + 1):
        if n % m != 0: continue
        yield m
        k = int(n / m)
        yield from factorise(k)
        break
    else:
        yield n


def main() -> None:
    n = int(sys.argv[1])
    primes: set[int] = set(factorise(n))
    print(max(primes))


if __name__ == "__main__":
    sys.exit(main())
