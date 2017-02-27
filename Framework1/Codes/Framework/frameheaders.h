#ifndef FRAMEHEADERS
#define FRAMEHEADERS

#include <string>
namespace NSFrame1 {
#ifndef interface
#define interface class
#endif
    interface IXObject{
        virtual void Init() = 0;
        virtual IXObject* GetPObject() = 0;
    };
    interface IHttpReqHeaders : public IXObject{
        virtual void AddFilter(std::string) = 0;
        virtual void AddFilterFromFile(std::string) = 0;
    };
    interface IPlugin : public IXObject{
        virtual void AddPlugin() = 0;
        virtual void RemovePlugin() = 0;
    };
    interface IWeiXin : public IXObject{
        virtual void Logon() = 0;
        virtual void Logout() = 0;
    };
    interface IWeiBo : public IXObject{
        virtual void Logon() = 0;
        virtual void Logout() = 0;
    };
    interface IDownLoad : public IXObject{
        virtual void SetUrlPath(std::string) = 0;
        virtual void StartDownload() = 0;

    };
    interface IAccounts : public IXObject{
        virtual void Registation() = 0;
        virtual void Logon()=0;
        virtual void Logout()=0;
    };
    interface IServices : public IXObject{
        virtual void Init() = 0;
        virtual void Run() = 0;
    };
    interface IServices : public IXObject{
        virtual void Init() = 0;
        virtual void Run() = 0;
    };
    interface IDBHelper : public IXObject{
        virtual void Init() = 0;
        virtual void Run() = 0;
        virtual void Exec() = 0;
    };
    interface IAI : public IXObject{
        virtual void Init() = 0;
    };
}

#endif // FRAMEHEADERS

