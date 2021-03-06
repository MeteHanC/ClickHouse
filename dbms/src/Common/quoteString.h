#pragma once

#include <Core/Types.h>
#include <common/StringRef.h>


namespace DB
{
/// Quote the string.
String quoteString(const StringRef & x);

/// Quote the identifier with backquotes.
String backQuote(const StringRef & x);

/// Quote the identifier with backquotes, if required.
String backQuoteIfNeed(const StringRef & x);
}
