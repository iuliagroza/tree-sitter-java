#include "tree_sitter/parser.h"
#include <string.h>

extern const TSLanguage *tree_sitter_java();
// Add similar lines for other languages.

const TSLanguage *tree_sitter_combined(const char *language)
{
    if (strcmp(language, "java") == 0)
    {
        return tree_sitter_java();
    }
    // Add else-if blocks for other languages.

    return NULL; // Return NULL if no matching language is found.
}

__attribute__((visibility("default")))
const TSLanguage *
tree_sitter_combined_language(const char *language)
{
    return tree_sitter_combined(language);
}
