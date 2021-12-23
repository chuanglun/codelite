#ifndef ECLIPSEYAMLTHEMEIMPORTER_H
#define ECLIPSEYAMLTHEMEIMPORTER_H

#include "ThemeImporterBase.hpp"

class WXDLLIMPEXP_SDK ThemeImporterYAML : public ThemeImporterBase
{
public:
    ThemeImporterYAML();
    virtual ~ThemeImporterYAML();

public:
    virtual LexerConf::Ptr_t Import(const wxFileName& eclipseXmlFile);
};

#endif // ECLIPSEYAMLTHEMEIMPORTER_H
