BEGIN_TESTCASE
    TESTCASE_ID ("0800")
    HEURISTIC_RULE (true)
    REASONING ("A single game can last at most 120 seconds.")
    PRECONDITION (true)
    POSTCONDITION (gws("elapsedhand") <= 120)
    SYMBOLS_POSSIBLY_AFFECTED ("elapsedhand")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0801")
    HEURISTIC_RULE (true)
    REASONING ("We have to act at least once per hand (which can last at most 120 seconds).")
    PRECONDITION (true)
    POSTCONDITION (gws("elapsedauto") <= 120)
    SYMBOLS_POSSIBLY_AFFECTED ("elapsedauto")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0802")
    HEURISTIC_RULE (false)
    REASONING ("elapsed1970 has to be greater than elapsedtoday.")
    PRECONDITION (true)
    POSTCONDITION (gws("elapsed1970") > gws("elapsedtoday"))
    SYMBOLS_POSSIBLY_AFFECTED ("elapsed1970, elapsedtoday")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0803")
    HEURISTIC_RULE (false)
    REASONING ("Once the first hand is finished, the session duration has to be greater than the duration of a hand.")
    PRECONDITION (gws("handsplayed") > 1)
    POSTCONDITION (gws("elapsed") > gws("elapsedhand"))
    SYMBOLS_POSSIBLY_AFFECTED ("elapsed, elapsedhand")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0804")
    HEURISTIC_RULE (false)
    REASONING ("Once the first hand is finished, the session duration has to be greater than the time since our last action.")
    PRECONDITION (gws("handsplayed") >= 1)
    POSTCONDITION (gws("elapsed") > gws("elapsedauto"))
    SYMBOLS_POSSIBLY_AFFECTED ("elapsed, elapsedauto, handsplayed")
END_TESTCASE







 