package com.sun.tools.jdeps.resources;

public final class jdeps_ja extends java.util.ListResourceBundle {
    protected final Object[][] getContents() {
        return new Object[][] {
            { "artifact.not.found", "\u898B\u3064\u304B\u308A\u307E\u305B\u3093" },
            { "err.internal.error", "\u5185\u90E8\u30A8\u30E9\u30FC: {0} {1} {2}" },
            { "err.invalid.arg.for.option", "\u30AA\u30D7\u30B7\u30E7\u30F3\u306E\u5F15\u6570\u304C\u7121\u52B9\u3067\u3059: {0}" },
            { "err.missing.arg", "{0}\u306B\u5024\u304C\u6307\u5B9A\u3055\u308C\u3066\u3044\u307E\u305B\u3093" },
            { "err.option.after.class", "\u30AA\u30D7\u30B7\u30E7\u30F3\u306F\u30AF\u30E9\u30B9\u306E\u524D\u306B\u6307\u5B9A\u3059\u308B\u5FC5\u8981\u304C\u3042\u308A\u307E\u3059: {0}" },
            { "err.option.unsupported", "{0}\u306F\u30B5\u30DD\u30FC\u30C8\u3055\u308C\u3066\u3044\u307E\u305B\u3093: {1}" },
            { "err.profiles.msg", "\u30D7\u30ED\u30D5\u30A1\u30A4\u30EB\u60C5\u5831\u304C\u3042\u308A\u307E\u305B\u3093" },
            { "err.unknown.option", "\u4E0D\u660E\u306A\u30AA\u30D7\u30B7\u30E7\u30F3: {0}" },
            { "error.prefix", "\u30A8\u30E9\u30FC:" },
            { "main.opt.P", "  -P         --profile                 \u30D1\u30C3\u30B1\u30FC\u30B8\u3092\u542B\u3080\u30D7\u30ED\u30D5\u30A1\u30A4\u30EB\u307E\u305F\u306F\u30D5\u30A1\u30A4\u30EB\u3092\u8868\u793A\u3059\u308B" },
            { "main.opt.R", "  -R         --recursive               \u3059\u3079\u3066\u306E\u4F9D\u5B58\u6027\u3092\u53CD\u5FA9\u7684\u306B\u8D70\u67FB\u3059\u308B" },
            { "main.opt.V", "  -V <level> --verbose-level=<level>   \u30D1\u30C3\u30B1\u30FC\u30B8\u30FB\u30EC\u30D9\u30EB\u307E\u305F\u306F\u30AF\u30E9\u30B9\u30FB\u30EC\u30D9\u30EB\u306E\u4F9D\u5B58\u6027\u3092\u51FA\u529B\u3059\u308B\n                                       \u6709\u52B9\u306A\u30EC\u30D9\u30EB: \"package\"\u304A\u3088\u3073\"class\"" },
            { "main.opt.c", "  -c <path>  --classpath=<path>        \u30AF\u30E9\u30B9\u30FB\u30D5\u30A1\u30A4\u30EB\u3092\u691C\u7D22\u3059\u308B\u5834\u6240\u3092\u6307\u5B9A\u3059\u308B" },
            { "main.opt.d", "  -d <depth> --depth=<depth>           \u63A8\u79FB\u7684\u306A\u4F9D\u5B58\u6027\u5206\u6790\u306E\u6DF1\u3055\u3092\u6307\u5B9A\u3059\u308B" },
            { "main.opt.e", "  -e <regex> --regex=<regex>           \u5206\u6790\u3092\u30D1\u30BF\u30FC\u30F3\u306B\u4E00\u81F4\u3059\u308B\u30D1\u30C3\u30B1\u30FC\u30B8\u306B\u5236\u9650\u3059\u308B\n                                       (-p\u3068-e\u306F\u6392\u4ED6\u7684)" },
            { "main.opt.h", "  -h -?      --help                    \u3053\u306E\u4F7F\u7528\u65B9\u6CD5\u306E\u30E1\u30C3\u30BB\u30FC\u30B8\u3092\u51FA\u529B\u3059\u308B" },
            { "main.opt.p", "  -p <pkg name> --package=<pkg name>   \u5206\u6790\u3092\u3053\u306E\u30D1\u30C3\u30B1\u30FC\u30B8\u306E\u30AF\u30E9\u30B9\u306B\u5236\u9650\u3059\u308B\n                                       (\u8907\u6570\u56DE\u6307\u5B9A\u53EF\u80FD)" },
            { "main.opt.s", "  -s         --summary                 \u4F9D\u5B58\u6027\u306E\u8981\u7D04\u306E\u307F\u51FA\u529B\u3059\u308B" },
            { "main.opt.v", "  -v         --verbose                 \u8FFD\u52A0\u60C5\u5831\u3092\u51FA\u529B\u3059\u308B" },
            { "main.opt.version", "             --version                 \u30D0\u30FC\u30B8\u30E7\u30F3\u60C5\u5831" },
            { "main.usage", "\u4F7F\u7528\u65B9\u6CD5: {0} <options> <classes...>\n<classes>\u306B\u306F\u3001.class\u30D5\u30A1\u30A4\u30EB\u306E\u30D1\u30B9\u540D\u3001\u30C7\u30A3\u30EC\u30AF\u30C8\u30EA\u3001JAR\u30D5\u30A1\u30A4\u30EB\u3001\u5B8C\u5168\u4FEE\u98FE\u30AF\u30E9\u30B9\u540D\n\u307E\u305F\u306F\u30EF\u30A4\u30EB\u30C9\u30AB\u30FC\u30C9\"*\"\u3092\u6307\u5B9A\u3067\u304D\u307E\u3059\u3002\u4F7F\u7528\u3067\u304D\u308B\u30AA\u30D7\u30B7\u30E7\u30F3\u306F\u6B21\u306E\u3068\u304A\u308A\u3067\u3059:" },
            { "main.usage.summary", "\u4F7F\u7528\u65B9\u6CD5: {0} <options> <classes...>\n\u4F7F\u7528\u53EF\u80FD\u306A\u30AA\u30D7\u30B7\u30E7\u30F3\u306E\u30EA\u30B9\u30C8\u306B\u3064\u3044\u3066\u306F\u3001-h\u3001-?\u307E\u305F\u306F--help\u3092\u4F7F\u7528\u3057\u307E\u3059" },
            { "warn.invalid.arg", "\u7121\u52B9\u306A\u30AF\u30E9\u30B9\u540D\u307E\u305F\u306F\u30D1\u30B9\u540D\u304C\u5B58\u5728\u3057\u307E\u305B\u3093: {0}" },
            { "warn.prefix", "\u8B66\u544A:" },
            { "warn.split.package", "\u30D1\u30C3\u30B1\u30FC\u30B8{0}\u306F{1} {2}\u3067\u5B9A\u7FA9\u3055\u308C\u3066\u3044\u307E\u3059" },
        };
    }
}