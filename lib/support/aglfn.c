#include "aglfn.h"
#include "glyphorder.h"
// This table contains standard AGLFN 1.7 glyph names, mapped to Unicode.
void setup_aglfn_glyph_names(glyph_order_hash *map) {
	try_name_glyph(map, 0x0041, sdsnew("A"));
	try_name_glyph(map, 0x00C6, sdsnew("AE"));
	try_name_glyph(map, 0x01FC, sdsnew("AEacute"));
	try_name_glyph(map, 0x00C1, sdsnew("Aacute"));
	try_name_glyph(map, 0x0102, sdsnew("Abreve"));
	try_name_glyph(map, 0x00C2, sdsnew("Acircumflex"));
	try_name_glyph(map, 0x00C4, sdsnew("Adieresis"));
	try_name_glyph(map, 0x00C0, sdsnew("Agrave"));
	try_name_glyph(map, 0x0391, sdsnew("Alpha"));
	try_name_glyph(map, 0x0386, sdsnew("Alphatonos"));
	try_name_glyph(map, 0x0100, sdsnew("Amacron"));
	try_name_glyph(map, 0x0104, sdsnew("Aogonek"));
	try_name_glyph(map, 0x00C5, sdsnew("Aring"));
	try_name_glyph(map, 0x01FA, sdsnew("Aringacute"));
	try_name_glyph(map, 0x00C3, sdsnew("Atilde"));
	try_name_glyph(map, 0x0042, sdsnew("B"));
	try_name_glyph(map, 0x0392, sdsnew("Beta"));
	try_name_glyph(map, 0x0043, sdsnew("C"));
	try_name_glyph(map, 0x0106, sdsnew("Cacute"));
	try_name_glyph(map, 0x010C, sdsnew("Ccaron"));
	try_name_glyph(map, 0x00C7, sdsnew("Ccedilla"));
	try_name_glyph(map, 0x0108, sdsnew("Ccircumflex"));
	try_name_glyph(map, 0x010A, sdsnew("Cdotaccent"));
	try_name_glyph(map, 0x03A7, sdsnew("Chi"));
	try_name_glyph(map, 0x0044, sdsnew("D"));
	try_name_glyph(map, 0x010E, sdsnew("Dcaron"));
	try_name_glyph(map, 0x0110, sdsnew("Dcroat"));
	try_name_glyph(map, 0x2206, sdsnew("Delta"));
	try_name_glyph(map, 0x0045, sdsnew("E"));
	try_name_glyph(map, 0x00C9, sdsnew("Eacute"));
	try_name_glyph(map, 0x0114, sdsnew("Ebreve"));
	try_name_glyph(map, 0x011A, sdsnew("Ecaron"));
	try_name_glyph(map, 0x00CA, sdsnew("Ecircumflex"));
	try_name_glyph(map, 0x00CB, sdsnew("Edieresis"));
	try_name_glyph(map, 0x0116, sdsnew("Edotaccent"));
	try_name_glyph(map, 0x00C8, sdsnew("Egrave"));
	try_name_glyph(map, 0x0112, sdsnew("Emacron"));
	try_name_glyph(map, 0x014A, sdsnew("Eng"));
	try_name_glyph(map, 0x0118, sdsnew("Eogonek"));
	try_name_glyph(map, 0x0395, sdsnew("Epsilon"));
	try_name_glyph(map, 0x0388, sdsnew("Epsilontonos"));
	try_name_glyph(map, 0x0397, sdsnew("Eta"));
	try_name_glyph(map, 0x0389, sdsnew("Etatonos"));
	try_name_glyph(map, 0x00D0, sdsnew("Eth"));
	try_name_glyph(map, 0x20AC, sdsnew("Euro"));
	try_name_glyph(map, 0x0046, sdsnew("F"));
	try_name_glyph(map, 0x0047, sdsnew("G"));
	try_name_glyph(map, 0x0393, sdsnew("Gamma"));
	try_name_glyph(map, 0x011E, sdsnew("Gbreve"));
	try_name_glyph(map, 0x01E6, sdsnew("Gcaron"));
	try_name_glyph(map, 0x011C, sdsnew("Gcircumflex"));
	try_name_glyph(map, 0x0120, sdsnew("Gdotaccent"));
	try_name_glyph(map, 0x0048, sdsnew("H"));
	try_name_glyph(map, 0x25CF, sdsnew("H18533"));
	try_name_glyph(map, 0x25AA, sdsnew("H18543"));
	try_name_glyph(map, 0x25AB, sdsnew("H18551"));
	try_name_glyph(map, 0x25A1, sdsnew("H22073"));
	try_name_glyph(map, 0x0126, sdsnew("Hbar"));
	try_name_glyph(map, 0x0124, sdsnew("Hcircumflex"));
	try_name_glyph(map, 0x0049, sdsnew("I"));
	try_name_glyph(map, 0x0132, sdsnew("IJ"));
	try_name_glyph(map, 0x00CD, sdsnew("Iacute"));
	try_name_glyph(map, 0x012C, sdsnew("Ibreve"));
	try_name_glyph(map, 0x00CE, sdsnew("Icircumflex"));
	try_name_glyph(map, 0x00CF, sdsnew("Idieresis"));
	try_name_glyph(map, 0x0130, sdsnew("Idotaccent"));
	try_name_glyph(map, 0x2111, sdsnew("Ifraktur"));
	try_name_glyph(map, 0x00CC, sdsnew("Igrave"));
	try_name_glyph(map, 0x012A, sdsnew("Imacron"));
	try_name_glyph(map, 0x012E, sdsnew("Iogonek"));
	try_name_glyph(map, 0x0399, sdsnew("Iota"));
	try_name_glyph(map, 0x03AA, sdsnew("Iotadieresis"));
	try_name_glyph(map, 0x038A, sdsnew("Iotatonos"));
	try_name_glyph(map, 0x0128, sdsnew("Itilde"));
	try_name_glyph(map, 0x004A, sdsnew("J"));
	try_name_glyph(map, 0x0134, sdsnew("Jcircumflex"));
	try_name_glyph(map, 0x004B, sdsnew("K"));
	try_name_glyph(map, 0x039A, sdsnew("Kappa"));
	try_name_glyph(map, 0x004C, sdsnew("L"));
	try_name_glyph(map, 0x0139, sdsnew("Lacute"));
	try_name_glyph(map, 0x039B, sdsnew("Lambda"));
	try_name_glyph(map, 0x013D, sdsnew("Lcaron"));
	try_name_glyph(map, 0x013F, sdsnew("Ldot"));
	try_name_glyph(map, 0x0141, sdsnew("Lslash"));
	try_name_glyph(map, 0x004D, sdsnew("M"));
	try_name_glyph(map, 0x039C, sdsnew("Mu"));
	try_name_glyph(map, 0x004E, sdsnew("N"));
	try_name_glyph(map, 0x0143, sdsnew("Nacute"));
	try_name_glyph(map, 0x0147, sdsnew("Ncaron"));
	try_name_glyph(map, 0x00D1, sdsnew("Ntilde"));
	try_name_glyph(map, 0x039D, sdsnew("Nu"));
	try_name_glyph(map, 0x004F, sdsnew("O"));
	try_name_glyph(map, 0x0152, sdsnew("OE"));
	try_name_glyph(map, 0x00D3, sdsnew("Oacute"));
	try_name_glyph(map, 0x014E, sdsnew("Obreve"));
	try_name_glyph(map, 0x00D4, sdsnew("Ocircumflex"));
	try_name_glyph(map, 0x00D6, sdsnew("Odieresis"));
	try_name_glyph(map, 0x00D2, sdsnew("Ograve"));
	try_name_glyph(map, 0x01A0, sdsnew("Ohorn"));
	try_name_glyph(map, 0x0150, sdsnew("Ohungarumlaut"));
	try_name_glyph(map, 0x014C, sdsnew("Omacron"));
	try_name_glyph(map, 0x2126, sdsnew("Omega"));
	try_name_glyph(map, 0x038F, sdsnew("Omegatonos"));
	try_name_glyph(map, 0x039F, sdsnew("Omicron"));
	try_name_glyph(map, 0x038C, sdsnew("Omicrontonos"));
	try_name_glyph(map, 0x00D8, sdsnew("Oslash"));
	try_name_glyph(map, 0x01FE, sdsnew("Oslashacute"));
	try_name_glyph(map, 0x00D5, sdsnew("Otilde"));
	try_name_glyph(map, 0x0050, sdsnew("P"));
	try_name_glyph(map, 0x03A6, sdsnew("Phi"));
	try_name_glyph(map, 0x03A0, sdsnew("Pi"));
	try_name_glyph(map, 0x03A8, sdsnew("Psi"));
	try_name_glyph(map, 0x0051, sdsnew("Q"));
	try_name_glyph(map, 0x0052, sdsnew("R"));
	try_name_glyph(map, 0x0154, sdsnew("Racute"));
	try_name_glyph(map, 0x0158, sdsnew("Rcaron"));
	try_name_glyph(map, 0x211C, sdsnew("Rfraktur"));
	try_name_glyph(map, 0x03A1, sdsnew("Rho"));
	try_name_glyph(map, 0x0053, sdsnew("S"));
	try_name_glyph(map, 0x250C, sdsnew("SF010000"));
	try_name_glyph(map, 0x2514, sdsnew("SF020000"));
	try_name_glyph(map, 0x2510, sdsnew("SF030000"));
	try_name_glyph(map, 0x2518, sdsnew("SF040000"));
	try_name_glyph(map, 0x253C, sdsnew("SF050000"));
	try_name_glyph(map, 0x252C, sdsnew("SF060000"));
	try_name_glyph(map, 0x2534, sdsnew("SF070000"));
	try_name_glyph(map, 0x251C, sdsnew("SF080000"));
	try_name_glyph(map, 0x2524, sdsnew("SF090000"));
	try_name_glyph(map, 0x2500, sdsnew("SF100000"));
	try_name_glyph(map, 0x2502, sdsnew("SF110000"));
	try_name_glyph(map, 0x2561, sdsnew("SF190000"));
	try_name_glyph(map, 0x2562, sdsnew("SF200000"));
	try_name_glyph(map, 0x2556, sdsnew("SF210000"));
	try_name_glyph(map, 0x2555, sdsnew("SF220000"));
	try_name_glyph(map, 0x2563, sdsnew("SF230000"));
	try_name_glyph(map, 0x2551, sdsnew("SF240000"));
	try_name_glyph(map, 0x2557, sdsnew("SF250000"));
	try_name_glyph(map, 0x255D, sdsnew("SF260000"));
	try_name_glyph(map, 0x255C, sdsnew("SF270000"));
	try_name_glyph(map, 0x255B, sdsnew("SF280000"));
	try_name_glyph(map, 0x255E, sdsnew("SF360000"));
	try_name_glyph(map, 0x255F, sdsnew("SF370000"));
	try_name_glyph(map, 0x255A, sdsnew("SF380000"));
	try_name_glyph(map, 0x2554, sdsnew("SF390000"));
	try_name_glyph(map, 0x2569, sdsnew("SF400000"));
	try_name_glyph(map, 0x2566, sdsnew("SF410000"));
	try_name_glyph(map, 0x2560, sdsnew("SF420000"));
	try_name_glyph(map, 0x2550, sdsnew("SF430000"));
	try_name_glyph(map, 0x256C, sdsnew("SF440000"));
	try_name_glyph(map, 0x2567, sdsnew("SF450000"));
	try_name_glyph(map, 0x2568, sdsnew("SF460000"));
	try_name_glyph(map, 0x2564, sdsnew("SF470000"));
	try_name_glyph(map, 0x2565, sdsnew("SF480000"));
	try_name_glyph(map, 0x2559, sdsnew("SF490000"));
	try_name_glyph(map, 0x2558, sdsnew("SF500000"));
	try_name_glyph(map, 0x2552, sdsnew("SF510000"));
	try_name_glyph(map, 0x2553, sdsnew("SF520000"));
	try_name_glyph(map, 0x256B, sdsnew("SF530000"));
	try_name_glyph(map, 0x256A, sdsnew("SF540000"));
	try_name_glyph(map, 0x015A, sdsnew("Sacute"));
	try_name_glyph(map, 0x0160, sdsnew("Scaron"));
	try_name_glyph(map, 0x015E, sdsnew("Scedilla"));
	try_name_glyph(map, 0x015C, sdsnew("Scircumflex"));
	try_name_glyph(map, 0x03A3, sdsnew("Sigma"));
	try_name_glyph(map, 0x0054, sdsnew("T"));
	try_name_glyph(map, 0x03A4, sdsnew("Tau"));
	try_name_glyph(map, 0x0166, sdsnew("Tbar"));
	try_name_glyph(map, 0x0164, sdsnew("Tcaron"));
	try_name_glyph(map, 0x0398, sdsnew("Theta"));
	try_name_glyph(map, 0x00DE, sdsnew("Thorn"));
	try_name_glyph(map, 0x0055, sdsnew("U"));
	try_name_glyph(map, 0x00DA, sdsnew("Uacute"));
	try_name_glyph(map, 0x016C, sdsnew("Ubreve"));
	try_name_glyph(map, 0x00DB, sdsnew("Ucircumflex"));
	try_name_glyph(map, 0x00DC, sdsnew("Udieresis"));
	try_name_glyph(map, 0x00D9, sdsnew("Ugrave"));
	try_name_glyph(map, 0x01AF, sdsnew("Uhorn"));
	try_name_glyph(map, 0x0170, sdsnew("Uhungarumlaut"));
	try_name_glyph(map, 0x016A, sdsnew("Umacron"));
	try_name_glyph(map, 0x0172, sdsnew("Uogonek"));
	try_name_glyph(map, 0x03A5, sdsnew("Upsilon"));
	try_name_glyph(map, 0x03D2, sdsnew("Upsilon1"));
	try_name_glyph(map, 0x03AB, sdsnew("Upsilondieresis"));
	try_name_glyph(map, 0x038E, sdsnew("Upsilontonos"));
	try_name_glyph(map, 0x016E, sdsnew("Uring"));
	try_name_glyph(map, 0x0168, sdsnew("Utilde"));
	try_name_glyph(map, 0x0056, sdsnew("V"));
	try_name_glyph(map, 0x0057, sdsnew("W"));
	try_name_glyph(map, 0x1E82, sdsnew("Wacute"));
	try_name_glyph(map, 0x0174, sdsnew("Wcircumflex"));
	try_name_glyph(map, 0x1E84, sdsnew("Wdieresis"));
	try_name_glyph(map, 0x1E80, sdsnew("Wgrave"));
	try_name_glyph(map, 0x0058, sdsnew("X"));
	try_name_glyph(map, 0x039E, sdsnew("Xi"));
	try_name_glyph(map, 0x0059, sdsnew("Y"));
	try_name_glyph(map, 0x00DD, sdsnew("Yacute"));
	try_name_glyph(map, 0x0176, sdsnew("Ycircumflex"));
	try_name_glyph(map, 0x0178, sdsnew("Ydieresis"));
	try_name_glyph(map, 0x1EF2, sdsnew("Ygrave"));
	try_name_glyph(map, 0x005A, sdsnew("Z"));
	try_name_glyph(map, 0x0179, sdsnew("Zacute"));
	try_name_glyph(map, 0x017D, sdsnew("Zcaron"));
	try_name_glyph(map, 0x017B, sdsnew("Zdotaccent"));
	try_name_glyph(map, 0x0396, sdsnew("Zeta"));
	try_name_glyph(map, 0x0061, sdsnew("a"));
	try_name_glyph(map, 0x00E1, sdsnew("aacute"));
	try_name_glyph(map, 0x0103, sdsnew("abreve"));
	try_name_glyph(map, 0x00E2, sdsnew("acircumflex"));
	try_name_glyph(map, 0x00B4, sdsnew("acute"));
	try_name_glyph(map, 0x0301, sdsnew("acutecomb"));
	try_name_glyph(map, 0x00E4, sdsnew("adieresis"));
	try_name_glyph(map, 0x00E6, sdsnew("ae"));
	try_name_glyph(map, 0x01FD, sdsnew("aeacute"));
	try_name_glyph(map, 0x00E0, sdsnew("agrave"));
	try_name_glyph(map, 0x2135, sdsnew("aleph"));
	try_name_glyph(map, 0x03B1, sdsnew("alpha"));
	try_name_glyph(map, 0x03AC, sdsnew("alphatonos"));
	try_name_glyph(map, 0x0101, sdsnew("amacron"));
	try_name_glyph(map, 0x0026, sdsnew("ampersand"));
	try_name_glyph(map, 0x2220, sdsnew("angle"));
	try_name_glyph(map, 0x2329, sdsnew("angleleft"));
	try_name_glyph(map, 0x232A, sdsnew("angleright"));
	try_name_glyph(map, 0x0387, sdsnew("anoteleia"));
	try_name_glyph(map, 0x0105, sdsnew("aogonek"));
	try_name_glyph(map, 0x2248, sdsnew("approxequal"));
	try_name_glyph(map, 0x00E5, sdsnew("aring"));
	try_name_glyph(map, 0x01FB, sdsnew("aringacute"));
	try_name_glyph(map, 0x2194, sdsnew("arrowboth"));
	try_name_glyph(map, 0x21D4, sdsnew("arrowdblboth"));
	try_name_glyph(map, 0x21D3, sdsnew("arrowdbldown"));
	try_name_glyph(map, 0x21D0, sdsnew("arrowdblleft"));
	try_name_glyph(map, 0x21D2, sdsnew("arrowdblright"));
	try_name_glyph(map, 0x21D1, sdsnew("arrowdblup"));
	try_name_glyph(map, 0x2193, sdsnew("arrowdown"));
	try_name_glyph(map, 0x2190, sdsnew("arrowleft"));
	try_name_glyph(map, 0x2192, sdsnew("arrowright"));
	try_name_glyph(map, 0x2191, sdsnew("arrowup"));
	try_name_glyph(map, 0x2195, sdsnew("arrowupdn"));
	try_name_glyph(map, 0x21A8, sdsnew("arrowupdnbse"));
	try_name_glyph(map, 0x005E, sdsnew("asciicircum"));
	try_name_glyph(map, 0x007E, sdsnew("asciitilde"));
	try_name_glyph(map, 0x002A, sdsnew("asterisk"));
	try_name_glyph(map, 0x2217, sdsnew("asteriskmath"));
	try_name_glyph(map, 0x0040, sdsnew("at"));
	try_name_glyph(map, 0x00E3, sdsnew("atilde"));
	try_name_glyph(map, 0x0062, sdsnew("b"));
	try_name_glyph(map, 0x005C, sdsnew("backslash"));
	try_name_glyph(map, 0x007C, sdsnew("bar"));
	try_name_glyph(map, 0x03B2, sdsnew("beta"));
	try_name_glyph(map, 0x2588, sdsnew("block"));
	try_name_glyph(map, 0x007B, sdsnew("braceleft"));
	try_name_glyph(map, 0x007D, sdsnew("braceright"));
	try_name_glyph(map, 0x005B, sdsnew("bracketleft"));
	try_name_glyph(map, 0x005D, sdsnew("bracketright"));
	try_name_glyph(map, 0x02D8, sdsnew("breve"));
	try_name_glyph(map, 0x00A6, sdsnew("brokenbar"));
	try_name_glyph(map, 0x2022, sdsnew("bullet"));
	try_name_glyph(map, 0x0063, sdsnew("c"));
	try_name_glyph(map, 0x0107, sdsnew("cacute"));
	try_name_glyph(map, 0x02C7, sdsnew("caron"));
	try_name_glyph(map, 0x21B5, sdsnew("carriagereturn"));
	try_name_glyph(map, 0x010D, sdsnew("ccaron"));
	try_name_glyph(map, 0x00E7, sdsnew("ccedilla"));
	try_name_glyph(map, 0x0109, sdsnew("ccircumflex"));
	try_name_glyph(map, 0x010B, sdsnew("cdotaccent"));
	try_name_glyph(map, 0x00B8, sdsnew("cedilla"));
	try_name_glyph(map, 0x00A2, sdsnew("cent"));
	try_name_glyph(map, 0x03C7, sdsnew("chi"));
	try_name_glyph(map, 0x25CB, sdsnew("circle"));
	try_name_glyph(map, 0x2297, sdsnew("circlemultiply"));
	try_name_glyph(map, 0x2295, sdsnew("circleplus"));
	try_name_glyph(map, 0x02C6, sdsnew("circumflex"));
	try_name_glyph(map, 0x2663, sdsnew("club"));
	try_name_glyph(map, 0x003A, sdsnew("colon"));
	try_name_glyph(map, 0x20A1, sdsnew("colonmonetary"));
	try_name_glyph(map, 0x002C, sdsnew("comma"));
	try_name_glyph(map, 0x2245, sdsnew("congruent"));
	try_name_glyph(map, 0x00A9, sdsnew("copyright"));
	try_name_glyph(map, 0x00A4, sdsnew("currency"));
	try_name_glyph(map, 0x0064, sdsnew("d"));
	try_name_glyph(map, 0x2020, sdsnew("dagger"));
	try_name_glyph(map, 0x2021, sdsnew("daggerdbl"));
	try_name_glyph(map, 0x010F, sdsnew("dcaron"));
	try_name_glyph(map, 0x0111, sdsnew("dcroat"));
	try_name_glyph(map, 0x00B0, sdsnew("degree"));
	try_name_glyph(map, 0x03B4, sdsnew("delta"));
	try_name_glyph(map, 0x2666, sdsnew("diamond"));
	try_name_glyph(map, 0x00A8, sdsnew("dieresis"));
	try_name_glyph(map, 0x0385, sdsnew("dieresistonos"));
	try_name_glyph(map, 0x00F7, sdsnew("divide"));
	try_name_glyph(map, 0x2593, sdsnew("dkshade"));
	try_name_glyph(map, 0x2584, sdsnew("dnblock"));
	try_name_glyph(map, 0x0024, sdsnew("dollar"));
	try_name_glyph(map, 0x20AB, sdsnew("dong"));
	try_name_glyph(map, 0x02D9, sdsnew("dotaccent"));
	try_name_glyph(map, 0x0323, sdsnew("dotbelowcomb"));
	try_name_glyph(map, 0x0131, sdsnew("dotlessi"));
	try_name_glyph(map, 0x22C5, sdsnew("dotmath"));
	try_name_glyph(map, 0x0065, sdsnew("e"));
	try_name_glyph(map, 0x00E9, sdsnew("eacute"));
	try_name_glyph(map, 0x0115, sdsnew("ebreve"));
	try_name_glyph(map, 0x011B, sdsnew("ecaron"));
	try_name_glyph(map, 0x00EA, sdsnew("ecircumflex"));
	try_name_glyph(map, 0x00EB, sdsnew("edieresis"));
	try_name_glyph(map, 0x0117, sdsnew("edotaccent"));
	try_name_glyph(map, 0x00E8, sdsnew("egrave"));
	try_name_glyph(map, 0x0038, sdsnew("eight"));
	try_name_glyph(map, 0x2208, sdsnew("element"));
	try_name_glyph(map, 0x2026, sdsnew("ellipsis"));
	try_name_glyph(map, 0x0113, sdsnew("emacron"));
	try_name_glyph(map, 0x2014, sdsnew("emdash"));
	try_name_glyph(map, 0x2205, sdsnew("emptyset"));
	try_name_glyph(map, 0x2013, sdsnew("endash"));
	try_name_glyph(map, 0x014B, sdsnew("eng"));
	try_name_glyph(map, 0x0119, sdsnew("eogonek"));
	try_name_glyph(map, 0x03B5, sdsnew("epsilon"));
	try_name_glyph(map, 0x03AD, sdsnew("epsilontonos"));
	try_name_glyph(map, 0x003D, sdsnew("equal"));
	try_name_glyph(map, 0x2261, sdsnew("equivalence"));
	try_name_glyph(map, 0x212E, sdsnew("estimated"));
	try_name_glyph(map, 0x03B7, sdsnew("eta"));
	try_name_glyph(map, 0x03AE, sdsnew("etatonos"));
	try_name_glyph(map, 0x00F0, sdsnew("eth"));
	try_name_glyph(map, 0x0021, sdsnew("exclam"));
	try_name_glyph(map, 0x203C, sdsnew("exclamdbl"));
	try_name_glyph(map, 0x00A1, sdsnew("exclamdown"));
	try_name_glyph(map, 0x2203, sdsnew("existential"));
	try_name_glyph(map, 0x0066, sdsnew("f"));
	try_name_glyph(map, 0x2640, sdsnew("female"));
	try_name_glyph(map, 0x2012, sdsnew("figuredash"));
	try_name_glyph(map, 0x25A0, sdsnew("filledbox"));
	try_name_glyph(map, 0x25AC, sdsnew("filledrect"));
	try_name_glyph(map, 0x0035, sdsnew("five"));
	try_name_glyph(map, 0x215D, sdsnew("fiveeighths"));
	try_name_glyph(map, 0x0192, sdsnew("florin"));
	try_name_glyph(map, 0x0034, sdsnew("four"));
	try_name_glyph(map, 0x2044, sdsnew("fraction"));
	try_name_glyph(map, 0x20A3, sdsnew("franc"));
	try_name_glyph(map, 0x0067, sdsnew("g"));
	try_name_glyph(map, 0x03B3, sdsnew("gamma"));
	try_name_glyph(map, 0x011F, sdsnew("gbreve"));
	try_name_glyph(map, 0x01E7, sdsnew("gcaron"));
	try_name_glyph(map, 0x011D, sdsnew("gcircumflex"));
	try_name_glyph(map, 0x0121, sdsnew("gdotaccent"));
	try_name_glyph(map, 0x00DF, sdsnew("germandbls"));
	try_name_glyph(map, 0x2207, sdsnew("gradient"));
	try_name_glyph(map, 0x0060, sdsnew("grave"));
	try_name_glyph(map, 0x0300, sdsnew("gravecomb"));
	try_name_glyph(map, 0x003E, sdsnew("greater"));
	try_name_glyph(map, 0x2265, sdsnew("greaterequal"));
	try_name_glyph(map, 0x00AB, sdsnew("guillemotleft"));
	try_name_glyph(map, 0x00BB, sdsnew("guillemotright"));
	try_name_glyph(map, 0x2039, sdsnew("guilsinglleft"));
	try_name_glyph(map, 0x203A, sdsnew("guilsinglright"));
	try_name_glyph(map, 0x0068, sdsnew("h"));
	try_name_glyph(map, 0x0127, sdsnew("hbar"));
	try_name_glyph(map, 0x0125, sdsnew("hcircumflex"));
	try_name_glyph(map, 0x2665, sdsnew("heart"));
	try_name_glyph(map, 0x0309, sdsnew("hookabovecomb"));
	try_name_glyph(map, 0x2302, sdsnew("house"));
	try_name_glyph(map, 0x02DD, sdsnew("hungarumlaut"));
	try_name_glyph(map, 0x002D, sdsnew("hyphen"));
	try_name_glyph(map, 0x0069, sdsnew("i"));
	try_name_glyph(map, 0x00ED, sdsnew("iacute"));
	try_name_glyph(map, 0x012D, sdsnew("ibreve"));
	try_name_glyph(map, 0x00EE, sdsnew("icircumflex"));
	try_name_glyph(map, 0x00EF, sdsnew("idieresis"));
	try_name_glyph(map, 0x00EC, sdsnew("igrave"));
	try_name_glyph(map, 0x0133, sdsnew("ij"));
	try_name_glyph(map, 0x012B, sdsnew("imacron"));
	try_name_glyph(map, 0x221E, sdsnew("infinity"));
	try_name_glyph(map, 0x222B, sdsnew("integral"));
	try_name_glyph(map, 0x2321, sdsnew("integralbt"));
	try_name_glyph(map, 0x2320, sdsnew("integraltp"));
	try_name_glyph(map, 0x2229, sdsnew("intersection"));
	try_name_glyph(map, 0x25D8, sdsnew("invbullet"));
	try_name_glyph(map, 0x25D9, sdsnew("invcircle"));
	try_name_glyph(map, 0x263B, sdsnew("invsmileface"));
	try_name_glyph(map, 0x012F, sdsnew("iogonek"));
	try_name_glyph(map, 0x03B9, sdsnew("iota"));
	try_name_glyph(map, 0x03CA, sdsnew("iotadieresis"));
	try_name_glyph(map, 0x0390, sdsnew("iotadieresistonos"));
	try_name_glyph(map, 0x03AF, sdsnew("iotatonos"));
	try_name_glyph(map, 0x0129, sdsnew("itilde"));
	try_name_glyph(map, 0x006A, sdsnew("j"));
	try_name_glyph(map, 0x0135, sdsnew("jcircumflex"));
	try_name_glyph(map, 0x006B, sdsnew("k"));
	try_name_glyph(map, 0x03BA, sdsnew("kappa"));
	try_name_glyph(map, 0x0138, sdsnew("kgreenlandic"));
	try_name_glyph(map, 0x006C, sdsnew("l"));
	try_name_glyph(map, 0x013A, sdsnew("lacute"));
	try_name_glyph(map, 0x03BB, sdsnew("lambda"));
	try_name_glyph(map, 0x013E, sdsnew("lcaron"));
	try_name_glyph(map, 0x0140, sdsnew("ldot"));
	try_name_glyph(map, 0x003C, sdsnew("less"));
	try_name_glyph(map, 0x2264, sdsnew("lessequal"));
	try_name_glyph(map, 0x258C, sdsnew("lfblock"));
	try_name_glyph(map, 0x20A4, sdsnew("lira"));
	try_name_glyph(map, 0x2227, sdsnew("logicaland"));
	try_name_glyph(map, 0x00AC, sdsnew("logicalnot"));
	try_name_glyph(map, 0x2228, sdsnew("logicalor"));
	try_name_glyph(map, 0x017F, sdsnew("longs"));
	try_name_glyph(map, 0x25CA, sdsnew("lozenge"));
	try_name_glyph(map, 0x0142, sdsnew("lslash"));
	try_name_glyph(map, 0x2591, sdsnew("ltshade"));
	try_name_glyph(map, 0x006D, sdsnew("m"));
	try_name_glyph(map, 0x00AF, sdsnew("macron"));
	try_name_glyph(map, 0x2642, sdsnew("male"));
	try_name_glyph(map, 0x2212, sdsnew("minus"));
	try_name_glyph(map, 0x2032, sdsnew("minute"));
	try_name_glyph(map, 0x00B5, sdsnew("mu"));
	try_name_glyph(map, 0x00D7, sdsnew("multiply"));
	try_name_glyph(map, 0x266A, sdsnew("musicalnote"));
	try_name_glyph(map, 0x266B, sdsnew("musicalnotedbl"));
	try_name_glyph(map, 0x006E, sdsnew("n"));
	try_name_glyph(map, 0x0144, sdsnew("nacute"));
	try_name_glyph(map, 0x0149, sdsnew("napostrophe"));
	try_name_glyph(map, 0x0148, sdsnew("ncaron"));
	try_name_glyph(map, 0x0039, sdsnew("nine"));
	try_name_glyph(map, 0x2209, sdsnew("notelement"));
	try_name_glyph(map, 0x2260, sdsnew("notequal"));
	try_name_glyph(map, 0x2284, sdsnew("notsubset"));
	try_name_glyph(map, 0x00F1, sdsnew("ntilde"));
	try_name_glyph(map, 0x03BD, sdsnew("nu"));
	try_name_glyph(map, 0x0023, sdsnew("numbersign"));
	try_name_glyph(map, 0x006F, sdsnew("o"));
	try_name_glyph(map, 0x00F3, sdsnew("oacute"));
	try_name_glyph(map, 0x014F, sdsnew("obreve"));
	try_name_glyph(map, 0x00F4, sdsnew("ocircumflex"));
	try_name_glyph(map, 0x00F6, sdsnew("odieresis"));
	try_name_glyph(map, 0x0153, sdsnew("oe"));
	try_name_glyph(map, 0x02DB, sdsnew("ogonek"));
	try_name_glyph(map, 0x00F2, sdsnew("ograve"));
	try_name_glyph(map, 0x01A1, sdsnew("ohorn"));
	try_name_glyph(map, 0x0151, sdsnew("ohungarumlaut"));
	try_name_glyph(map, 0x014D, sdsnew("omacron"));
	try_name_glyph(map, 0x03C9, sdsnew("omega"));
	try_name_glyph(map, 0x03D6, sdsnew("omega1"));
	try_name_glyph(map, 0x03CE, sdsnew("omegatonos"));
	try_name_glyph(map, 0x03BF, sdsnew("omicron"));
	try_name_glyph(map, 0x03CC, sdsnew("omicrontonos"));
	try_name_glyph(map, 0x0031, sdsnew("one"));
	try_name_glyph(map, 0x2024, sdsnew("onedotenleader"));
	try_name_glyph(map, 0x215B, sdsnew("oneeighth"));
	try_name_glyph(map, 0x00BD, sdsnew("onehalf"));
	try_name_glyph(map, 0x00BC, sdsnew("onequarter"));
	try_name_glyph(map, 0x2153, sdsnew("onethird"));
	try_name_glyph(map, 0x25E6, sdsnew("openbullet"));
	try_name_glyph(map, 0x00AA, sdsnew("ordfeminine"));
	try_name_glyph(map, 0x00BA, sdsnew("ordmasculine"));
	try_name_glyph(map, 0x221F, sdsnew("orthogonal"));
	try_name_glyph(map, 0x00F8, sdsnew("oslash"));
	try_name_glyph(map, 0x01FF, sdsnew("oslashacute"));
	try_name_glyph(map, 0x00F5, sdsnew("otilde"));
	try_name_glyph(map, 0x0070, sdsnew("p"));
	try_name_glyph(map, 0x00B6, sdsnew("paragraph"));
	try_name_glyph(map, 0x0028, sdsnew("parenleft"));
	try_name_glyph(map, 0x0029, sdsnew("parenright"));
	try_name_glyph(map, 0x2202, sdsnew("partialdiff"));
	try_name_glyph(map, 0x0025, sdsnew("percent"));
	try_name_glyph(map, 0x002E, sdsnew("period"));
	try_name_glyph(map, 0x00B7, sdsnew("periodcentered"));
	try_name_glyph(map, 0x22A5, sdsnew("perpendicular"));
	try_name_glyph(map, 0x2030, sdsnew("perthousand"));
	try_name_glyph(map, 0x20A7, sdsnew("peseta"));
	try_name_glyph(map, 0x03C6, sdsnew("phi"));
	try_name_glyph(map, 0x03D5, sdsnew("phi1"));
	try_name_glyph(map, 0x03C0, sdsnew("pi"));
	try_name_glyph(map, 0x002B, sdsnew("plus"));
	try_name_glyph(map, 0x00B1, sdsnew("plusminus"));
	try_name_glyph(map, 0x211E, sdsnew("prescription"));
	try_name_glyph(map, 0x220F, sdsnew("product"));
	try_name_glyph(map, 0x2282, sdsnew("propersubset"));
	try_name_glyph(map, 0x2283, sdsnew("propersuperset"));
	try_name_glyph(map, 0x221D, sdsnew("proportional"));
	try_name_glyph(map, 0x03C8, sdsnew("psi"));
	try_name_glyph(map, 0x0071, sdsnew("q"));
	try_name_glyph(map, 0x003F, sdsnew("question"));
	try_name_glyph(map, 0x00BF, sdsnew("questiondown"));
	try_name_glyph(map, 0x0022, sdsnew("quotedbl"));
	try_name_glyph(map, 0x201E, sdsnew("quotedblbase"));
	try_name_glyph(map, 0x201C, sdsnew("quotedblleft"));
	try_name_glyph(map, 0x201D, sdsnew("quotedblright"));
	try_name_glyph(map, 0x2018, sdsnew("quoteleft"));
	try_name_glyph(map, 0x201B, sdsnew("quotereversed"));
	try_name_glyph(map, 0x2019, sdsnew("quoteright"));
	try_name_glyph(map, 0x201A, sdsnew("quotesinglbase"));
	try_name_glyph(map, 0x0027, sdsnew("quotesingle"));
	try_name_glyph(map, 0x0072, sdsnew("r"));
	try_name_glyph(map, 0x0155, sdsnew("racute"));
	try_name_glyph(map, 0x221A, sdsnew("radical"));
	try_name_glyph(map, 0x0159, sdsnew("rcaron"));
	try_name_glyph(map, 0x2286, sdsnew("reflexsubset"));
	try_name_glyph(map, 0x2287, sdsnew("reflexsuperset"));
	try_name_glyph(map, 0x00AE, sdsnew("registered"));
	try_name_glyph(map, 0x2310, sdsnew("revlogicalnot"));
	try_name_glyph(map, 0x03C1, sdsnew("rho"));
	try_name_glyph(map, 0x02DA, sdsnew("ring"));
	try_name_glyph(map, 0x2590, sdsnew("rtblock"));
	try_name_glyph(map, 0x0073, sdsnew("s"));
	try_name_glyph(map, 0x015B, sdsnew("sacute"));
	try_name_glyph(map, 0x0161, sdsnew("scaron"));
	try_name_glyph(map, 0x015F, sdsnew("scedilla"));
	try_name_glyph(map, 0x015D, sdsnew("scircumflex"));
	try_name_glyph(map, 0x2033, sdsnew("second"));
	try_name_glyph(map, 0x00A7, sdsnew("section"));
	try_name_glyph(map, 0x003B, sdsnew("semicolon"));
	try_name_glyph(map, 0x0037, sdsnew("seven"));
	try_name_glyph(map, 0x215E, sdsnew("seveneighths"));
	try_name_glyph(map, 0x2592, sdsnew("shade"));
	try_name_glyph(map, 0x03C3, sdsnew("sigma"));
	try_name_glyph(map, 0x03C2, sdsnew("sigma1"));
	try_name_glyph(map, 0x223C, sdsnew("similar"));
	try_name_glyph(map, 0x0036, sdsnew("six"));
	try_name_glyph(map, 0x002F, sdsnew("slash"));
	try_name_glyph(map, 0x263A, sdsnew("smileface"));
	try_name_glyph(map, 0x0020, sdsnew("space"));
	try_name_glyph(map, 0x2660, sdsnew("spade"));
	try_name_glyph(map, 0x00A3, sdsnew("sterling"));
	try_name_glyph(map, 0x220B, sdsnew("suchthat"));
	try_name_glyph(map, 0x2211, sdsnew("summation"));
	try_name_glyph(map, 0x263C, sdsnew("sun"));
	try_name_glyph(map, 0x0074, sdsnew("t"));
	try_name_glyph(map, 0x03C4, sdsnew("tau"));
	try_name_glyph(map, 0x0167, sdsnew("tbar"));
	try_name_glyph(map, 0x0165, sdsnew("tcaron"));
	try_name_glyph(map, 0x2234, sdsnew("therefore"));
	try_name_glyph(map, 0x03B8, sdsnew("theta"));
	try_name_glyph(map, 0x03D1, sdsnew("theta1"));
	try_name_glyph(map, 0x00FE, sdsnew("thorn"));
	try_name_glyph(map, 0x0033, sdsnew("three"));
	try_name_glyph(map, 0x215C, sdsnew("threeeighths"));
	try_name_glyph(map, 0x00BE, sdsnew("threequarters"));
	try_name_glyph(map, 0x02DC, sdsnew("tilde"));
	try_name_glyph(map, 0x0303, sdsnew("tildecomb"));
	try_name_glyph(map, 0x0384, sdsnew("tonos"));
	try_name_glyph(map, 0x2122, sdsnew("trademark"));
	try_name_glyph(map, 0x25BC, sdsnew("triagdn"));
	try_name_glyph(map, 0x25C4, sdsnew("triaglf"));
	try_name_glyph(map, 0x25BA, sdsnew("triagrt"));
	try_name_glyph(map, 0x25B2, sdsnew("triagup"));
	try_name_glyph(map, 0x0032, sdsnew("two"));
	try_name_glyph(map, 0x2025, sdsnew("twodotenleader"));
	try_name_glyph(map, 0x2154, sdsnew("twothirds"));
	try_name_glyph(map, 0x0075, sdsnew("u"));
	try_name_glyph(map, 0x00FA, sdsnew("uacute"));
	try_name_glyph(map, 0x016D, sdsnew("ubreve"));
	try_name_glyph(map, 0x00FB, sdsnew("ucircumflex"));
	try_name_glyph(map, 0x00FC, sdsnew("udieresis"));
	try_name_glyph(map, 0x00F9, sdsnew("ugrave"));
	try_name_glyph(map, 0x01B0, sdsnew("uhorn"));
	try_name_glyph(map, 0x0171, sdsnew("uhungarumlaut"));
	try_name_glyph(map, 0x016B, sdsnew("umacron"));
	try_name_glyph(map, 0x005F, sdsnew("underscore"));
	try_name_glyph(map, 0x2017, sdsnew("underscoredbl"));
	try_name_glyph(map, 0x222A, sdsnew("union"));
	try_name_glyph(map, 0x2200, sdsnew("universal"));
	try_name_glyph(map, 0x0173, sdsnew("uogonek"));
	try_name_glyph(map, 0x2580, sdsnew("upblock"));
	try_name_glyph(map, 0x03C5, sdsnew("upsilon"));
	try_name_glyph(map, 0x03CB, sdsnew("upsilondieresis"));
	try_name_glyph(map, 0x03B0, sdsnew("upsilondieresistonos"));
	try_name_glyph(map, 0x03CD, sdsnew("upsilontonos"));
	try_name_glyph(map, 0x016F, sdsnew("uring"));
	try_name_glyph(map, 0x0169, sdsnew("utilde"));
	try_name_glyph(map, 0x0076, sdsnew("v"));
	try_name_glyph(map, 0x0077, sdsnew("w"));
	try_name_glyph(map, 0x1E83, sdsnew("wacute"));
	try_name_glyph(map, 0x0175, sdsnew("wcircumflex"));
	try_name_glyph(map, 0x1E85, sdsnew("wdieresis"));
	try_name_glyph(map, 0x2118, sdsnew("weierstrass"));
	try_name_glyph(map, 0x1E81, sdsnew("wgrave"));
	try_name_glyph(map, 0x0078, sdsnew("x"));
	try_name_glyph(map, 0x03BE, sdsnew("xi"));
	try_name_glyph(map, 0x0079, sdsnew("y"));
	try_name_glyph(map, 0x00FD, sdsnew("yacute"));
	try_name_glyph(map, 0x0177, sdsnew("ycircumflex"));
	try_name_glyph(map, 0x00FF, sdsnew("ydieresis"));
	try_name_glyph(map, 0x00A5, sdsnew("yen"));
	try_name_glyph(map, 0x1EF3, sdsnew("ygrave"));
	try_name_glyph(map, 0x007A, sdsnew("z"));
	try_name_glyph(map, 0x017A, sdsnew("zacute"));
	try_name_glyph(map, 0x017E, sdsnew("zcaron"));
	try_name_glyph(map, 0x017C, sdsnew("zdotaccent"));
	try_name_glyph(map, 0x0030, sdsnew("zero"));
	try_name_glyph(map, 0x03B6, sdsnew("zeta"));
}
