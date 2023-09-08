 #include <QtCore/QtGlobal>

 #if defined(CAMERAPLUGINS_LIBRARY)
 #  define CAMERAPLUGINS_EXPORT Q_DECL_EXPORT
 #else
 #  define CAMERAPLUGINS_EXPORT Q_DECL_IMPORT
 #endif
