cmake_minimum_required(VERSION 3.16)
project(CppDependenciesDemo)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)
find_package(OpenCV REQUIRED)
find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(GTest REQUIRED)
find_package(Poco REQUIRED)
find_package(CURL REQUIRED)
find_package(ZLIB REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(Protobuf REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(SDL2 REQUIRED)
find_package(TBB REQUIRED)
find_package(HDF5 REQUIRED)
find_package(Threads REQUIRED)
find_package(Armadillo REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(libpng REQUIRED)
find_package(libjpeg REQUIRED)
find_package(Freetype REQUIRED)
find_package(Assimp REQUIRED)
find_package(XercesC REQUIRED)
find_package(SOCI REQUIRED)
find_package(ZeroMQ REQUIRED)
find_package(Ceres REQUIRED)
find_package(PCL REQUIRED)
find_package(GDAL REQUIRED)
find_package(MongoCXX REQUIRED)
find_package(benchmark REQUIRED)
find_package(ACE REQUIRED)
find_package(CppUnit REQUIRED)
find_package(Doxygen REQUIRED)
find_package(GMP REQUIRED)
find_package(MPFR REQUIRED)
find_package(ITK REQUIRED)
find_package(VTK REQUIRED)
find_package(DCMTK REQUIRED)
find_package(GeographicLib REQUIRED)
find_package(LibArchive REQUIRED)
find_package(LibXml2 REQUIRED)
find_package(LibXslt REQUIRED)
find_package(LibWebSockets REQUIRED)
find_package(LibSSH REQUIRED)
find_package(LibUSB REQUIRED)
find_package(LibEvent REQUIRED)
find_package(LibPCAP REQUIRED)
find_package(LibSoundFile REQUIRED)
find_package(LibHaru REQUIRED)
find_package(LibRaw REQUIRED)
find_package(LibTiff REQUIRED)
find_package(LibHeif REQUIRED)
find_package(LibOpenAL REQUIRED)
find_package(LibVNCServer REQUIRED)
find_package(LibYAML REQUIRED)
find_package(LibTomCrypt REQUIRED)
find_package(LibTomMath REQUIRED)
find_package(LibSodium REQUIRED)
find_package(LibUnwind REQUIRED)
find_package(LibBacktrace REQUIRED)
find_package(Libuv REQUIRED)
find_package(Libzip REQUIRED)
find_package(Libcurlpp REQUIRED)
find_package(Libgit2 REQUIRED)
find_package(Libssh2 REQUIRED)
find_package(Libarchivepp REQUIRED)
find_package(Libconfig REQUIRED)
find_package(Libcoap REQUIRED)
find_package(Libcroco REQUIRED)
find_package(Libdaemon REQUIRED)
find_package(Libevdev REQUIRED)
find_package(Libexif REQUIRED)
find_package(Libffi REQUIRED)
find_package(Libgcrypt REQUIRED)
find_package(Libgpg-error REQUIRED)
find_package(Libical REQUIRED)
find_package(Libidn REQUIRED)
find_package(Libinput REQUIRED)
find_package(Libiptcdata REQUIRED)
find_package(Libksba REQUIRED)
find_package(Liblzma REQUIRED)
find_package(Libmicrohttpd REQUIRED)
find_package(Libmng REQUIRED)
find_package(Libnice REQUIRED)
find_package(Libnl REQUIRED)
find_package(Libossp-uuid REQUIRED)
find_package(Libpcsc REQUIRED)
find_package(Libplist REQUIRED)
find_package(Libpsl REQUIRED)
find_package(Libqmi REQUIRED)
find_package(Libqrencode REQUIRED)
find_package(Libspatialindex REQUIRED)
find_package(Libgeotiff REQUIRED)
find_package(Libopenjpeg REQUIRED)
find_package(Libwebp REQUIRED)
find_package(Libgphoto2 REQUIRED)
find_package(Libgpiod REQUIRED)
find_package(Libgusb REQUIRED)
find_package(Libhandy REQUIRED)
find_package(Libical-glib REQUIRED)
find_package(Libjxl REQUIRED)
find_package(Libmaxminddb REQUIRED)
find_package(Libmediainfo REQUIRED)
find_package(Libmpdclient REQUIRED)
find_package(Libnfc REQUIRED)
find_package(Libopenmpt REQUIRED)
find_package(Libpcre REQUIRED)
find_package(Libphonenumber REQUIRED)
find_package(Libpng16 REQUIRED)
find_package(Libproxy REQUIRED)
find_package(Librsvg REQUIRED)
find_package(Libsndfile REQUIRED)
find_package(Libsshpp REQUIRED)
find_package(Libstrophe REQUIRED)
find_package(Libsystemd REQUIRED)
find_package(Libtorrent REQUIRED)
find_package(Libudev REQUIRED)
find_package(Libupnp REQUIRED)
find_package(Libusb-1.0 REQUIRED)
find_package(Libuvc REQUIRED)
find_package(Libvpx REQUIRED)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE
    Boost::boost
    OpenCV::opencv
    fmt::fmt
    spdlog::spdlog
    Eigen3::Eigen
    GTest::gtest
    Poco::Foundation
    CURL::libcurl
    ZLIB::ZLIB
    OpenSSL::SSL
    Protobuf::libprotobuf
    Qt5::Widgets
    SDL2::SDL2
    TBB::tbb
    HDF5::HDF5
    Threads::Threads
    Armadillo::armadillo
    GLEW::GLEW
    glfw
    PNG::PNG
    JPEG::JPEG
    Freetype::Freetype
    assimp::assimp
    XercesC::XercesC
    SOCI::soci_core
    ZeroMQ::libzmq
    Ceres::ceres
    PCL::pcl_common
    GDAL::GDAL
    mongo::mongocxx
    Libuv::uv
    Libzip::zip
    Libcurlpp::curlpp
    Libgit2::git2
    Libssh2::libssh2
    Libarchivepp::archivepp
    Libconfig::config
    Libcoap::coap
    Libcroco::croco
    Libdaemon::daemon
    Libevdev::evdev
    Libexif::exif
    Libffi::ffi
    Libgcrypt::gcrypt
    Libgpg-error::gpg-error
    Libical::ical
    Libidn::idn
    Libinput::input
    Libiptcdata::iptcdata
    Libksba::ksba
    Liblzma::lzma
    Libmicrohttpd::microhttpd
    Libmng::mng
    Libnice::nice
    Libnl::nl
    Libossp-uuid::ossp-uuid
    Libpcsc::pcsc
    Libplist::plist
    Libpsl::psl
    Libqmi::qmi
    Libqrencode::qrencode
    benchmark::benchmark
    ACE::ACE
    CppUnit::CppUnit
    Doxygen::doxygen
    GMP::gmp
    MPFR::mpfr
    ITK::ITKCommon
    VTK::vtkCommonCore
    DCMTK::dcmtk
    GeographicLib::Geographic
    LibArchive::archive
    LibXml2::LibXml2
    LibXslt::LibXslt
    LibWebSockets::websockets
    LibSSH::LIBSSH
    LibUSB::LIBUSB
    LibEvent::LibEvent
    LibPCAP::PCAP
    LibSoundFile::sndfile
    LibHaru::haru
    LibRaw::LibRaw
    LibTiff::TIFF
    LibHeif::heif
    LibOpenAL::OpenAL
    LibVNCServer::LibVNCServer
    LibYAML::LibYAML
    LibTomCrypt::tomcrypt
    LibTomMath::tommath
    LibSodium::sodium
    LibUnwind::unwind
    LibBacktrace::backtrace
    Libspatialindex::spatialindex
    Libgeotiff::geotiff
    Libopenjpeg::openjpeg
    Libwebp::webp
    Libgphoto2::gphoto2
    Libgpiod::gpiod
    Libgusb::gusb
    Libhandy::handy
    Libical-glib::ical-glib
    Libjxl::jxl
    Libmaxminddb::maxminddb
    Libmediainfo::mediainfo
    Libmpdclient::mpdclient
    Libnfc::nfc
    Libopenmpt::openmpt
    Libpcre::pcre
    Libphonenumber::phonenumber
    Libpng16::png16
    Libproxy::proxy
    Librsvg::rsvg
    Libsndfile::sndfile
    Libsshpp::sshpp
    Libstrophe::strophe
    Libsystemd::systemd
    Libtorrent::torrent
    Libudev::udev
    Libupnp::upnp
    Libusb-1.0::usb-1.0
    Libuvc::uvc
    Libvpx::vpx
)
