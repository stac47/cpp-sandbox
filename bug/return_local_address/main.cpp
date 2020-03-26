namespace std {
  struct random_access_iterator_tag;
}


/** \brief Used as relative pointer within a memory zone.
*
* When this object is dereferenced, it points to	a valid object.
* Several operators are defined to allow this object to
* behave like a pointer.
* If ref is constructed with a null object (explicitly),
* it will be dereferenced as 0.
* \ingroup api
*/
template <class T> struct ref {

typedef T value;
typedef T *pointer;
typedef const T *const_pointer;
typedef T &reference;
typedef const T &const_reference;

typedef T value_type;
typedef ptrdiff_t difference_type;
typedef std::random_access_iterator_tag iterator_category;
off_t d;

/** Constructs a null pointer.
 */
explicit ref (int = 0) :
  d (-1) { }

/** Constructs the object from a pointer.
 */
ref(pointer t): d(-1) {
  if (t != 0)
    d = (char *)t - (char *)this;
}

/** Constructs the object from a const_pointer.
 */
ref (const_pointer t): d(-1) {
  if (t != 0)
    d = (char *)t - (char *)this;
}

/** Initializes the pointee with the given value.
 */
void setVal (const_reference t) {

  *(pointer)((char *)this + d) = t;
}

/**  Copy constructor.
 * never inline because of the casts. PTR#11788008
 */
ref (const ref &r) __attribute__ ((noinline)) {
  if (r.d != -1)
  {
      d = (char *)&r - (char *)this + r.d;
  }
  else
  {
      d = -1;
  }
}

/** Assignment operator.
* never inline because of the casts. PTR#11788008
 */
ref &operator= (const ref &r) __attribute__ ((noinline)) {
  if (r.d == -1)
    d = -1;
  else
    d = (char *)&r - (char *)this + r.d;
  return (*this);
}

/** Dereferences the object.
 */
pointer operator-> () {
  if (d == -1)
    return (0);
  return ((pointer)((char *)this + d));
}

/** Dereferences the object.
 */
const_pointer operator-> () const {
  if (d == -1)
    return (0);
  return ((const_pointer)((char *)this + d));
}

/** Dereferences the object.
 */
reference operator* () {
  return (*(pointer)((char *)this + d));
}

/** Dereferences the object.
 */
const_reference operator* () const {
  return (*(const_pointer)((char *)this + d));
}

/** Dereferences the object.
 */
operator const_pointer () const __attribute__ ((noinline)) {
  if (d == -1)
    return (0);
  return ((const_pointer)((char *)this + d));
}

/** Dereferences the object.
 */
operator pointer () __attribute__ ((noinline)) {
  if (d == -1)
    return (0);
  return ((pointer)((char *)this + d));
}

ref operator+(difference_type n) const {
    ref temp = ref(*this);
    temp += n;
    return temp;
}

/** Preincrement operator.
 */
ref &operator++ () {
  d += sizeof (value);
  return (*this);
}

/** Postincrement operator.
 */
ref operator++ (int) {
  const off_t r = d;
  d += sizeof (value);
  return ((pointer)((char *)this + r));
}

/** Operator+=
 */ 
ref &operator+= (off_t o) {
  d += o * sizeof (value);
  return (*this);
}

/** Predecrement operator.
 */
ref &operator-- () {
  d -= sizeof (value);
  return (*this);
}

};
