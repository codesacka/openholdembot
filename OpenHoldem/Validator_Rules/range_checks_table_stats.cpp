//
// Table stats symbols
//

BEGIN_TESTCASE
    TESTCASE_ID ("0284")
    REASONING ("Range check for symbol floppct")
    PRECONDITION (true)
    POSTCONDITION ((gws("floppct") >= 0) && (gws("floppct") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("floppct")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0285")
    REASONING ("Range check for symbol turnpct")
    PRECONDITION (true)
    POSTCONDITION ((gws("turnpct") >= 0) && (gws("turnpct") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("turnpct")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0286")
    REASONING ("Range check for symbol riverpct")
    PRECONDITION (true)
    POSTCONDITION ((gws("riverpct") >= 0) && (gws("riverpct") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("riverpct")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0287")
    REASONING ("Range check for symbol avgbetspf")
    PRECONDITION (true)
    POSTCONDITION (gws("avgbetspf") >= 0)
    SYMBOLS_POSSIBLY_AFFECTED ("avgbetspf")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0288")
    REASONING ("Range check for symbol tablepfr")
    PRECONDITION (true)
    POSTCONDITION ((gws("tablepfr") >= 0) && (gws("tablepfr") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("tablepfr")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0289")
    REASONING ("Range check for symbol maxbalance")
    PRECONDITION (true)
    POSTCONDITION (gws("maxbalance") >= 0)
    SYMBOLS_POSSIBLY_AFFECTED ("maxbalance")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0290")
    REASONING ("Range check for symbol handsplayed")
    PRECONDITION (true)
    POSTCONDITION (gws("handsplayed") >= 0)
    SYMBOLS_POSSIBLY_AFFECTED ("handsplayed")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0291")
    REASONING ("Range check for symbols balance_rank0..balance_rank9")
    PRECONDITION (true)
    POSTCONDITION ((gws("balance_rank0") >= gws("balance_rank1")) && (gws("balance_rank1") >= gws("balance_rank2")) && (gws("balance_rank2") >= gws("balance_rank3")) && (gws("balance_rank3") >= gws("balance_rank4")) && (gws("balance_rank4") >= gws("balance_rank5")) && (gws("balance_rank5") >= gws("balance_rank6")) && (gws("balance_rank6") >= gws("balance_rank7")) && (gws("balance_rank7") >= gws("balance_rank8")) && (gws("balance_rank8") >= gws("balance_rank9")) && (gws("balance_rank") >= 0))
    SYMBOLS_POSSIBLY_AFFECTED ("balance_rank0, balance_rank1, balance_rank2, balance_rank3, balance_rank4, balance_rank5, balance_rank6, balance_rank7, balance_rank8, balance_rank9")
END_TESTCASE