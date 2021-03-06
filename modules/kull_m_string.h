/*	Benjamin DELPY `gentilkiwi`
	http://blog.gentilkiwi.com
	benjamin@gentilkiwi.com
	Licence : https://creativecommons.org/licenses/by-nc-sa/4.0/
*/
#pragma once
#include "superglobals.h"

typedef CONST char *PCSZ;
typedef STRING ANSI_STRING;
typedef PSTRING PANSI_STRING;
typedef PSTRING PCANSI_STRING;

typedef STRING OEM_STRING;
typedef PSTRING POEM_STRING;
typedef CONST STRING* PCOEM_STRING;
typedef CONST UNICODE_STRING *PCUNICODE_STRING;

extern VOID WINAPI RtlInitString(OUT PSTRING DestinationString, IN PCSZ SourceString);
extern VOID WINAPI RtlInitUnicodeString(OUT PUNICODE_STRING DestinationString, IN PCWSTR SourceString);

extern NTSTATUS WINAPI RtlAnsiStringToUnicodeString(OUT PUNICODE_STRING DestinationString, IN PCANSI_STRING SourceString, IN BOOLEAN AllocateDestinationString);
extern NTSTATUS WINAPI RtlUnicodeStringToAnsiString(OUT PANSI_STRING DestinationString, IN PCUNICODE_STRING SourceString, IN BOOLEAN AllocateDestinationString);

extern VOID WINAPI RtlUpperString(OUT PSTRING DestinationString, IN const STRING *SourceString);
extern NTSTATUS WINAPI RtlUpcaseUnicodeString(IN OUT PUNICODE_STRING DestinationString, IN PCUNICODE_STRING SourceString, IN BOOLEAN AllocateDestinationString);
extern NTSTATUS WINAPI RtlDowncaseUnicodeString(PUNICODE_STRING DestinationString, IN PCUNICODE_STRING SourceString, IN BOOLEAN AllocateDestinationString);
extern WCHAR WINAPI RtlUpcaseUnicodeChar(IN WCHAR SourceCharacter);

extern BOOLEAN WINAPI RtlEqualString(IN const STRING *String1, IN const STRING *String2, IN BOOLEAN CaseInSensitive);
extern BOOLEAN WINAPI RtlEqualUnicodeString(IN PCUNICODE_STRING String1, IN PCUNICODE_STRING String2, IN BOOLEAN CaseInSensitive);

extern LONG WINAPI RtlCompareUnicodeString(IN PCUNICODE_STRING String1, IN PCUNICODE_STRING String2, IN BOOLEAN CaseInSensitive);
extern LONG WINAPI RtlCompareString(IN const STRING *String1, IN const STRING *String2, IN BOOLEAN CaseInSensitive);

extern VOID WINAPI RtlFreeAnsiString(IN PANSI_STRING AnsiString);
extern VOID WINAPI RtlFreeUnicodeString(IN PUNICODE_STRING UnicodeString);

extern NTSTATUS WINAPI RtlStringFromGUID(IN LPCGUID Guid, PUNICODE_STRING UnicodeString);
extern NTSTATUS NTAPI RtlValidateUnicodeString(IN ULONG Flags, IN PCUNICODE_STRING UnicodeString);

extern NTSTATUS WINAPI RtlAppendUnicodeStringToString(IN OUT PUNICODE_STRING Destination, IN PCUNICODE_STRING Source);

wchar_t * kull_m_string_qad_ansi_to_unicode(const char * ansi);
wchar_t * kull_m_string_qad_ansi_c_to_unicode(const char * ansi, SIZE_T szStr);

BOOL kull_m_string_suspectUnicodeStringStructure(IN PUNICODE_STRING pUnicodeString);
BOOL kull_m_string_stringToHex(IN LPCSTR string, IN LPBYTE hex, IN DWORD size);

void kull_m_string_printf_hex(LPCVOID lpData, DWORD cbData, DWORD flags);
void kull_m_string_displayFileTime(IN PFILETIME pFileTime);
void kull_m_string_displayLocalFileTime(IN PFILETIME pFileTime);
BOOL kull_m_string_LocalFileTimeToString(IN PFILETIME pFileTime, OUT CHAR string[14 + 1]);
void kull_m_string_displaySID(IN PSID pSid);
PWSTR kull_m_string_getRandomGUID();

BOOL kull_m_string_args_byName(const int argc, const char * argv[], const char * name, const char ** theArgs, const char * defaultValue);
BOOL kull_m_string_copy(LPSTR *dst, LPCSTR src);