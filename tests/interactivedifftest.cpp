#include "../diffmodellist.h"
    for (actualIter = actual.constBegin(), expectedIter = expected.constBegin(); actualIter != actual.constEnd() && expectedIter != expected.constEnd(); ++actualIter, ++expectedIter) {
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,5 +1,5 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              " efgh\n" <<
              "-delete2\n" <<
              "+insert2\n" <<
              " ijkl\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,3 +1,3 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,3 +1,2 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,5 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              "+insert3\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
        // The first existing difference inside the edit
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,2 +1,3 @@\n" <<
              " abcd\n" <<
              "+\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,3 +1,3 @@\n" <<
              " abcd\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              "+insert3\n" <<
              "+insert4\n" <<
              "+insert5\n" <<
              " efgh\n" <<
              "@@ -10,3 +15,3 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,6 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              "+insert3\n" <<
              "+insert4\n" <<
              " efgh\n" <<
              "@@ -15,3 +17,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,6 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              "+insert3\n" <<
              "+insert4\n" <<
              " efgh\n" <<
              "@@ -15,3 +17,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,4 +1,6 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              "+insert3\n" <<
              "+insert4\n" <<
              " efgh\n" <<
              "@@ -15,3 +17,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -10,4 +10,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "-delete2\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n";
              "--- file1\t2011-01-01 20:23:45.000000000 +0300\n" <<
              "+++ file2\t2011-01-01 20:24:02.000000000 +0300\n" <<
              "@@ -1,3 +1,4 @@\n" <<
              " abcd\n" <<
              "-delete1\n" <<
              "+insert1\n" <<
              "+insert2\n" <<
              " efgh\n" <<
              "@@ -11,4 +12,5 @@\n" <<
              " abcd\n" <<
              "-delete2\n" <<
              "-delete3\n" <<
              "+insert3\n" <<
              "+insert4\n" <<
              "+insert5\n" <<
              " efgh\n" <<
              "@@ -21,4 +23,3 @@\n" <<
              " abcd\n" <<
              "-delete4\n" <<
              "-delete5\n" <<
              "+insert6\n" <<
              " efgh\n";
          "--- file1\t2011-01-01 20:23:45 +0300\n" <<
          "+++ file2\t2011-01-01 20:24:02 +0300\n" <<
          "@@ -1,3 +1,4 @@\n" <<
          " line1\n" <<
          "-delete1\n" <<
          "+insert1\n" <<
          "+insert2\n" <<
          " line2\n" <<
          "@@ -11,4 +12,5 @@\n" <<
          " line3\n" <<
          "-delete2\n" <<
          "-delete3\n" <<
          "+insert3\n" <<
          "+insert4\n" <<
          "+insert5\n" <<
          " line4\n" <<
          "@@ -21,4 +23,2 @@\n" <<
          " line5\n" <<
          "-delete4\n" <<
          "-delete5\n" <<
          " line6\n" <<
          "@@ -31,3 +31,3 @@\n" <<
          " line7\n" <<
          "-delete6\n" <<
          "+insert6\n" <<
          " line8\n";
    foreach (Difference* diff, *model->differences())
          "commit 7377fcc682e85ef9784adb2a2da2c8c6756f9018 (HEAD, KDE/4.11)\n" <<
          "Author:     Dr. Chocholoušek <bla@zin.ec>\n" <<
          "AuthorDate: Sat Jan 25 17:30:01 2014 +0100\n" <<
          "\n" <<
          "    Fake diff.\n" <<
          "\n" <<
          "diff --git a/libdiff2/diffmodel.cpp b/libdiff2/diffmodel.cpp\n" <<
          "new file mode 100644\n" <<
          "index a42e82d..a8da0c9\n" <<
          "*** a/libdiff2/diffmodel.cpp\n" <<  // note the missing timestamps
          "--- b/libdiff2/diffmodel.cpp\n" <<
          "*************** DiffModel::DiffModel() :\n" <<
          "*** 58,64 ****\n" <<
          "  	m_sourceFile( "" ),\n" <<
          "  	m_destinationFile( "" ),\n" <<
          "  	m_sourceTimestamp( "" ),\n" <<
          "! 	m_destinationTimestamp( "" ),\n" <<
          "  	m_sourceRevision( "" ),\n" <<
          "  	m_destinationRevision( "" ),\n" <<
          "  	m_appliedCount( 0 ),\n" <<
          "--- 58,64 ----\n" <<
          "  	m_sourceFile( "" ),\n" <<
          "  	m_destinationFile( "" ),\n" <<
          "  	m_sourceTimestamp( "" ),\n" <<
          "! 	m_destinationTimestamp( \"doh\" ),\n" <<
          "  	m_sourceRevision( "" ),\n" <<
          "  	m_destinationRevision( "" ),\n" <<
          "  	m_appliedCount( 0 ),\n" <<
          "*************** void DiffModel::splitSourceInPathAndFile\n" <<
          "*** 84,89 ****\n" <<
          "--- 84,91 ----\n" <<
          "  	if( ( pos = m_source.lastIndexOf( \"/\" ) ) >= 0 )\n" <<
          "  		m_sourcePath = m_source.mid( 0, pos+1 );\n" <<
          "  \n" <<
          "+ 	add_this;\n" <<
          "+ \n" <<
          "  	if( ( pos = m_source.lastIndexOf( \"/\" ) ) >= 0 )\n" <<
          "  		m_sourceFile = m_source.mid( pos+1, m_source.length() - pos );\n" <<
          "  	else\n";
          "*** a/libdiff2/diffmodel.cpp\n" <<
          "--- b/libdiff2/diffmodel.cpp\n" <<
          "***************\n" <<
          "*** 55,60 **** DiffModel::DiffModel() :\n" << // note the  context here
          "--- 55,61 ----\n" <<
          "  	m_destination( "" ),\n" <<
          "  	m_sourcePath( "" ),\n" <<
          "  	m_destinationPath( "" ),\n" <<
          "+ 	m_hoh ( "" );\n" <<
          "  	m_sourceFile( "" ),\n" <<
          "  	m_destinationFile( "" ),\n" <<
          "  	m_sourceTimestamp( "" ),\n";
          "1c1\n" <<
          "< a\n" <<
          "---\n" <<
          "> b\n";