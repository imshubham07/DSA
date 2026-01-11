# Time and Space Complexity

## Time Complexity

Time complexity measures how the runtime of an algorithm grows as the input size increases.

### Common Time Complexities (Best to Worst)
- **O(1)** - Constant: Operation takes same time regardless of input
- **O(log n)** - Logarithmic: Divides input in half each iteration
- **O(n)** - Linear: Runtime grows proportionally with input size
- **O(n log n)** - Linearithmic: Common in efficient sorting algorithms
- **O(n²)** - Quadratic: Nested loops; becomes slow with large inputs
- **O(n³)** - Cubic: Triple nested loops
- **O(2ⁿ)** - Exponential: Extremely slow; often impractical
- **O(n!)** - Factorial: Slowest; rarely acceptable

## Space Complexity

Space complexity measures the amount of memory an algorithm uses relative to input size.

### Common Space Complexities
- **O(1)** - Constant space: Fixed memory regardless of input
- **O(n)** - Linear space: Memory grows with input size
- **O(n²)** - Quadratic space: Creates 2D structures like matrices
- **O(log n)** - Logarithmic space: Recursive call stacks in divide-and-conquer

## Key Differences
| Aspect | Time Complexity | Space Complexity |
|--------|-----------------|------------------|
| Measures | Execution time | Memory usage |
| Goal | Minimize steps | Minimize storage |
| Trade-off | Often inversely related |
