
#include <langinfo.h>
#include <mlibc/ensure.h>

char *nl_langinfo(nl_item) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

char *nl_langinfo_1(nl_item, locale_t) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}
