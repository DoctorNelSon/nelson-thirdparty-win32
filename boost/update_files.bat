set VC_VERSION=vc143
set BOOST_VERSION=x32-1_80
set SRC=E:\boost_1_80_0-32\lib32-msvc-14.3
set DST=E:\Developpements\GitHub\nelson-thirdparty-win32\boost\lib
mkdir %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_date_time-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_date_time-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_filesystem-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_filesystem-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_iostreams-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_iostreams-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_program_options-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_program_options-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST% 
copy %SRC%\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_system-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_system-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_system-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_system-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_thread-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_thread-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_thread-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_thread-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_locale-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_locale-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_locale-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_locale-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_regex-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_regex-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_regex-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_regex-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_random-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_random-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_random-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_random-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_zlib-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_zlib-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_zlib-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_zlib-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_bzip2-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_bzip2-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_bzip2-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_bzip2-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_serialization-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_serialization-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_serialization-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_serialization-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%
