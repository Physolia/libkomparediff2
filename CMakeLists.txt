cmake_minimum_required(VERSION 3.16)

project(LibKompareDiff2 VERSION "5.4.0")

set(QT_MIN_VERSION "5.15.2")
set(KF_MIN_VERSION "5.91.0")

find_package(ECM ${KF_MIN_VERSION} REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)
include(ECMQtDeclareLoggingCategory)
include(ECMSetupVersion)
include(ECMGenerateExportHeader)
include(ECMGenerateHeaders)
include(ECMDeprecationSettings)

include(CMakePackageConfigHelpers)
include(FeatureSummary)

# reset to 0 once all deprecated API has been removed on full switch to Qt6
if (QT_MAJOR_VERSION STREQUAL "6")
set(EXCLUDE_DEPRECATED_BEFORE_AND_AT 5.4.0 CACHE STRING "Control the range of deprecated API excluded from the build [default=7.5.0].")
else()
set(EXCLUDE_DEPRECATED_BEFORE_AND_AT 0 CACHE STRING "Control the range of deprecated API excluded from the build [default=0].")
endif()

if (QT_MAJOR_VERSION STREQUAL "6")
    set(QT_MIN_VERSION "6.5.0")
    set(KF_MIN_VERSION "5.240.0")
    set(KF_MAJOR_VERSION "6")
else()
    set(KF_MAJOR_VERSION "5")
endif()

set(ADDITIONAL_REQUIRED_QT_COMPONENTS)
if(BUILD_TESTING)
    list(APPEND ADDITIONAL_REQUIRED_QT_COMPONENTS Test)
endif()
if (QT_MAJOR_VERSION STREQUAL "6")
    list(APPEND ADDITIONAL_REQUIRED_QT_COMPONENTS Core5Compat) # QTextCodec
endif()

find_package(Qt${QT_MAJOR_VERSION} ${QT_MIN_VERSION} CONFIG REQUIRED
    COMPONENTS
        Core
        Widgets
        ${ADDITIONAL_REQUIRED_QT_COMPONENTS}
)

find_package(KF${KF_MAJOR_VERSION} ${KF_MIN_VERSION} REQUIRED
    COMPONENTS
        CoreAddons
        Config
        XmlGui
        I18n
        KIO
)

if (QT_MAJOR_VERSION STREQUAL "6")
    ecm_set_disabled_deprecation_versions(
        QT 6.5
        KF 5.239
    )
else()
    ecm_set_disabled_deprecation_versions(
        QT 5.15.2
        KF 5.91
    )
endif()

add_subdirectory(src)

if (BUILD_TESTING)
    add_subdirectory(tests)
endif()

ki18n_install(po)

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
