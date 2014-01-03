#include "CROptions.h"


bool CROptions::RunOnce = false;
unsigned int CROptions::SleepInterval = SLEEPINTERVAL;
const char* CROptions::PATH = ABSOLUTE_PATH;
const char* CROptions::TestCasesPath = TESTCASESPATH;
const char* CROptions::URLToGetFileIds = URL_TO_GET_FILE_IDS;
const char* CROptions::FilesPath = FILEPATH;
const char* CROptions::URLToSendResults = URL_TO_SEND_RESULTS;
const char* CROptions::LogFilePath = LOGFILEPATH;
const char* CROptions::LogFileName = LOGFILENAME;
const char* CROptions::URLToGetSourceCode = URL_TO_GET_SOURCE_CODE;
const char* CROptions::username = USERNAME;
const char* CROptions::password = PASSWORD;
bool CROptions::ForcePushResult = false;
bool CROptions::GetAllFileIds = false;
bool CROptions::Clean = false;
bool CROptions::SendResults = true;
bool CROptions::DownloadSourceFile = true;
bool CROptions::OneFileExecution = false;
bool CROptions::PrintOnScreen = true;
bool CROptions::Verbose = false;
CROptions::FileInfoFetchOptionsStruct *CROptions::FileInfoFetchOptions = new CROptions::FileInfoFetchOptionsStruct();
