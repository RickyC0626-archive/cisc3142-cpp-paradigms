/**
 * Creating objects of the `Currency` class requires a name (string),
 * a currency symbol (string) and the number of decimal places (integer)
 * usually associated with the currency (in that order).
 * 
 * Creating objects of the `Money` class requires a `Currency` object, and
 * the actual amount (integer) (in that order).
 * 
 * Define an object of type `Currency` named `canadianDollars` and
 * corresponding to the name "Canadian Dollar", the symbol "C$", and
 * 2 decimal places.
 * 
 * Define an object of type `Money` named `valueInCanadians` corresponding
 * to 230 units of `canadianDollars`.
 */

Currency canadianDollars("Canadian Dollar", "C$", 2);
Money valueInCanadians(canadianDollars, 230);