#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>
struct ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<System.IO.Stream>>
struct Dictionary_2_t36F9DA08F173AF333CCB0E2FD15EAA0FD258477B;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IList`1<System.String>>
struct Dictionary_2_t264C031C2F7E4139CD124F01FC6B6AA5DCD3890B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.EnumMemberAttribute>
struct IEnumerable_1_t12FC555E5CFF3E3FB1900657DA9B62D9AE3AA060;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.IList`1<System.Object>>>
struct IEnumerator_1_tC3F8E9785130146DE8695BAAEFCC424E8AE06CD0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>>
struct IEnumerator_1_tF50EE634569CCF065DA40B43344A543BABC49F06;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail>
struct List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF;
// Unity.Services.Authentication.Shared.Multimap`2<System.Object,System.Object>
struct Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2;
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream>
struct Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1;
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>
struct Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>
struct TaskFactory_1_t73F15CF0D59247215EBCF0FF4FF34A1DF07779D2;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>
struct Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Unity.Services.Authentication.Generated.Detail[]
struct DetailU5BU5D_t7247667F6342FF84D4560BFC3894B982F6E78C15;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Authentication.Shared.ApiConfiguration
struct ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E;
// Unity.Services.Authentication.Shared.ApiException
struct ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B;
// Unity.Services.Authentication.Shared.ApiRequestOptions
struct ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9;
// Unity.Services.Authentication.Shared.ApiRequestPathBuilder
struct ApiRequestPathBuilder_tA39A2E0890B266BFC69600101CDC589E984302A0;
// Unity.Services.Authentication.Shared.ApiResponse
struct ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73;
// Unity.Services.Authentication.Shared.ApiUtils
struct ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Unity.Services.Authentication.Models.Compatibility
struct Compatibility_tD9AEEA2924AC3C375D9E8712E711C8FDF85AC04E;
// Unity.Services.Authentication.Utilities.Compatibility
struct Compatibility_tFA1E59ED80B83C1E7B88589F69BBA1039539E520;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// Unity.Services.Authentication.Generated.Detail
struct Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F;
// Unity.Services.Authentication.Generated.ErrorStatus
struct ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Unity.Services.Authentication.Shared.IApiClient
struct IApiClient_t1C27FBAEFA9264D160D53990A25634D358C36033;
// Unity.Services.Authentication.Shared.IApiConfiguration
struct IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2;
// Unity.Services.Authentication.Shared.IApiResponse
struct IApiResponse_t695EC992E9BE4890DA85C5684EA0CF084797654E;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Unity.Services.Authentication.Shared.OpenAPIDateConverter
struct OpenAPIDateConverter_t9F8E729C74401A523E3381638C3124D443ABB9D5;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// Unity.Services.Authentication.Generated.Player
struct Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA;
// Unity.Services.Authentication.Generated.PlayerNamesApi
struct PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// Unity.Services.Authentication.Generated.UpdateNameRequest
struct UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9
struct U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211;
// Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10
struct U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF50EE634569CCF065DA40B43344A543BABC49F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE89EC3ED7E7902EA16003699DE0CDE1D977171;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral16ED25D43E6B8BB4EC81719E7598003A0A43915F;
IL2CPP_EXTERN_C String_t* _stringLiteral1992C4944CFCBCEDF8A8D48E9D2420F9FDB2D84A;
IL2CPP_EXTERN_C String_t* _stringLiteral1CFDF637E4057BD8B5FA1F345A7964A79D6F3E71;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral29A3B3107F4157B33E42EC2CCE1873928C3B5118;
IL2CPP_EXTERN_C String_t* _stringLiteral2BD8BA1A6907BE5DD0C5B778437EFBBBF0838518;
IL2CPP_EXTERN_C String_t* _stringLiteral39D59F14072F59EC06BEDF3E1392549CC7C43E9C;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5612DBF2F2056635EE8F724B44E649D5F914CB19;
IL2CPP_EXTERN_C String_t* _stringLiteral570DE56D596D729C7148156364A55D4AB062C8A0;
IL2CPP_EXTERN_C String_t* _stringLiteral586D7C2C88363797FB7BCA6CFEC2220EB425C013;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral61E23188B03F7E146645C4EB717216584FBC4BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3AD588F235747E2CE112556E9BD72AA3654AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral711563FB20607527EC0B94A64461FD2CEE28D73C;
IL2CPP_EXTERN_C String_t* _stringLiteral7163F6D2AF6F36BA28A60CCDF3092C194360BE75;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral79BBF6EBD2AFF54539778FC8AC2FDDEDC0E928E2;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA461BC136C1214EAE9290A8413EDCD39030C910E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralCD5DE33013731C59C131F9283EA1EDEDD4BA3C3A;
IL2CPP_EXTERN_C String_t* _stringLiteralD9239F59B9C99D310EB8BBEA02B5CBB15E73CB22;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAEAA4DCC5E824E4A4BE785187E6B2A1FEFF6B47;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DD5600C78E630DEA83353A8B5E6F2AC43C968A;
IL2CPP_EXTERN_C String_t* _stringLiteralE85391D4D5A6C03D58F54D2DB2AA605F1DCF8FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF2ECF8DAACA0A88470C174A4DD8D6E606EE52992;
IL2CPP_EXTERN_C String_t* _stringLiteralF55287E7C5B1B29E0C38F4EB26BD01879D2C68D5;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUtils_GetEnumMemberAttrValue_m75B6DE9D47241BD570561A93C4E36EA0416BB95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUtils_HasEnumMemberAttrValue_m685B69501DF3CE90C84537D67BA68E706D7EE607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m3A542B3003BD058E93280C895CC5B692F741EC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mCA2E8E5B4F14B488FF6380D2ED2791D20D4420EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m75C45CE0278D487EE52871732D54700F82F73160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m5709A8675E23D5C181A3D2F6A13E1BCDFCAB337C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mE2E714B8F456B7866265EE0D631F2BF19E654F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail__ctor_mA23496DF27895D537EE4C37DA035B565C1FF57AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m47DB730A3194B48CB67D6202DCA8A97FAE93581F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ErrorStatus__ctor_mA80AA43121C6349DB991DCFAB6C34511378E1100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IApiClient_GetAsync_TisPlayer_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA_m20D379185946C86BCA56F8FE953E475B0B80858F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IApiClient_PostAsync_TisPlayer_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA_m585A713E3E723ECB6510FB8914CD43BAF4D4CA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m06ED87C7E926CEF8CA7BC33BC5305BDD1A926007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB58492AAA9D92B0937D71FB6AD9AC1500AEFD1D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Multimap_2_GetEnumerator_m52BD66CC87291C115582D64B9486D161B825BC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Multimap_2__ctor_m748C5A9304D3A0B9924807FD695C9A6CB01E2C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerNamesApi__ctor_m6A47B018F51DBB7A7E44B67D3270780D4506400C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerNamesApi__ctor_mC3521B39910F5C9BD09D5392917E2F1C173A2559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Player__ctor_m6C4A35BB8399CCFF3A958B00C72011903A1B9640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetNameAsyncU3Ed__9_MoveNext_m32AD7EDF4657AC7553B2AFCB480C04410A777355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateNameAsyncU3Ed__10_MoveNext_m2C3EF838C1C29CFEAB55356F6E73D0A519554C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdateNameRequest__ctor_m70CE4F6DA33EB81349CF76FED1E942E887C53A24_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail>
struct List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DetailU5BU5D_t7247667F6342FF84D4560BFC3894B982F6E78C15* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DetailU5BU5D_t7247667F6342FF84D4560BFC3894B982F6E78C15* ___s_emptyArray_5;
};

// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream>
struct Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.IList`1<TValue>> Unity.Services.Authentication.Shared.Multimap`2::_dictionary
	Dictionary_2_t36F9DA08F173AF333CCB0E2FD15EAA0FD258477B* ____dictionary_0;
};

// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>
struct Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.IList`1<TValue>> Unity.Services.Authentication.Shared.Multimap`2::_dictionary
	Dictionary_2_t264C031C2F7E4139CD124F01FC6B6AA5DCD3890B* ____dictionary_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t11694B2A9AC82A595ECC5184A26FDEEAB04F40B8  : public RuntimeObject
{
};

// Unity.Services.Authentication.Shared.ApiConfiguration
struct ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiConfiguration::<DefaultHeaders>k__BackingField
	RuntimeObject* ___U3CDefaultHeadersU3Ek__BackingField_1;
	// System.Int32 Unity.Services.Authentication.Shared.ApiConfiguration::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_2;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::<UserAgent>k__BackingField
	String_t* ___U3CUserAgentU3Ek__BackingField_3;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::<Username>k__BackingField
	String_t* ___U3CUsernameU3Ek__BackingField_4;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_5;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_6;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::_basePath
	String_t* ____basePath_7;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiConfiguration::_apiKey
	RuntimeObject* ____apiKey_8;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiConfiguration::_apiKeyPrefix
	RuntimeObject* ____apiKeyPrefix_9;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::_dateTimeFormat
	String_t* ____dateTimeFormat_10;
	// System.String Unity.Services.Authentication.Shared.ApiConfiguration::_tempFolderPath
	String_t* ____tempFolderPath_11;
};

// Unity.Services.Authentication.Shared.ApiRequestOptions
struct ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::<PathParameters>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CPathParametersU3Ek__BackingField_0;
	// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::<QueryParameters>k__BackingField
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___U3CQueryParametersU3Ek__BackingField_1;
	// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::<HeaderParameters>k__BackingField
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___U3CHeaderParametersU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::<FormParameters>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CFormParametersU3Ek__BackingField_3;
	// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream> Unity.Services.Authentication.Shared.ApiRequestOptions::<FileParameters>k__BackingField
	Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* ___U3CFileParametersU3Ek__BackingField_4;
	// System.String Unity.Services.Authentication.Shared.ApiRequestOptions::<Operation>k__BackingField
	String_t* ___U3COperationU3Ek__BackingField_5;
	// System.Object Unity.Services.Authentication.Shared.ApiRequestOptions::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_6;
};

// Unity.Services.Authentication.Shared.ApiRequestPathBuilder
struct ApiRequestPathBuilder_tA39A2E0890B266BFC69600101CDC589E984302A0  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.Shared.ApiRequestPathBuilder::_baseUrl
	String_t* ____baseUrl_0;
	// System.String Unity.Services.Authentication.Shared.ApiRequestPathBuilder::_path
	String_t* ____path_1;
	// System.String Unity.Services.Authentication.Shared.ApiRequestPathBuilder::_query
	String_t* ____query_2;
};

// Unity.Services.Authentication.Shared.ApiResponse
struct ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.Shared.ApiResponse::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_0;
	// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiResponse::<Headers>k__BackingField
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___U3CHeadersU3Ek__BackingField_1;
	// System.String Unity.Services.Authentication.Shared.ApiResponse::<ErrorText>k__BackingField
	String_t* ___U3CErrorTextU3Ek__BackingField_2;
	// System.String Unity.Services.Authentication.Shared.ApiResponse::<RawContent>k__BackingField
	String_t* ___U3CRawContentU3Ek__BackingField_3;
};

// Unity.Services.Authentication.Shared.ApiUtils
struct ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99  : public RuntimeObject
{
};

struct ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_StaticFields
{
	// System.Text.RegularExpressions.Regex Unity.Services.Authentication.Shared.ApiUtils::JsonRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___JsonRegex_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Services.Authentication.Models.Compatibility
struct Compatibility_tD9AEEA2924AC3C375D9E8712E711C8FDF85AC04E  : public RuntimeObject
{
};

// Unity.Services.Authentication.Utilities.Compatibility
struct Compatibility_tFA1E59ED80B83C1E7B88589F69BBA1039539E520  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Authentication.Generated.Detail
struct Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.Generated.Detail::<ErrorType>k__BackingField
	String_t* ___U3CErrorTypeU3Ek__BackingField_0;
	// System.String Unity.Services.Authentication.Generated.Detail::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Unity.Services.Authentication.Generated.ErrorStatus
struct ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.Generated.ErrorStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// System.String Unity.Services.Authentication.Generated.ErrorStatus::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_1;
	// System.String Unity.Services.Authentication.Generated.ErrorStatus::<Detail>k__BackingField
	String_t* ___U3CDetailU3Ek__BackingField_2;
	// System.Int32 Unity.Services.Authentication.Generated.ErrorStatus::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail> Unity.Services.Authentication.Generated.ErrorStatus::<Details>k__BackingField
	List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* ___U3CDetailsU3Ek__BackingField_4;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Services.Authentication.Generated.Player
struct Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.Generated.Player::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Services.Authentication.Generated.Player::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Boolean Unity.Services.Authentication.Generated.Player::<AutoGenerated>k__BackingField
	bool ___U3CAutoGeneratedU3Ek__BackingField_2;
};

// Unity.Services.Authentication.Generated.PlayerNamesApi
struct PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA  : public RuntimeObject
{
	// Unity.Services.Authentication.Shared.IApiClient Unity.Services.Authentication.Generated.PlayerNamesApi::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_0;
	// Unity.Services.Authentication.Shared.IApiConfiguration Unity.Services.Authentication.Generated.PlayerNamesApi::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Unity.Services.Authentication.Generated.UpdateNameRequest
struct UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C  : public RuntimeObject
{
	// System.String Unity.Services.Authentication.Generated.UpdateNameRequest::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>
struct ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69  : public ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73
{
	// T Unity.Services.Authentication.Shared.ApiResponse`1::<Data>k__BackingField
	Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* ___U3CDataU3Ek__BackingField_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>
struct KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>
struct TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>
struct Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* ___m_result_22;
};

struct Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t73F15CF0D59247215EBCF0FF4FF34A1DF07779D2* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// Newtonsoft.Json.Converters.DateTimeConverterBase
struct DateTimeConverterBase_t36BB1B6037D3FB7F14C612DD537FA6B05C807E31  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>
struct AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C  : public DateTimeConverterBase_t36BB1B6037D3FB7F14C612DD537FA6B05C807E31
{
	// System.Globalization.DateTimeStyles Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeStyles
	int32_t ____dateTimeStyles_1;
	// System.String Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeFormat
	String_t* ____dateTimeFormat_2;
	// System.Globalization.CultureInfo Newtonsoft.Json.Converters.IsoDateTimeConverter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_3;
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Services.Authentication.Shared.ApiException
struct ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B  : public Exception_t
{
	// Unity.Services.Authentication.Shared.ApiExceptionType Unity.Services.Authentication.Shared.ApiException::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_18;
	// Unity.Services.Authentication.Shared.IApiResponse Unity.Services.Authentication.Shared.ApiException::<Response>k__BackingField
	RuntimeObject* ___U3CResponseU3Ek__BackingField_19;
};

// Unity.Services.Authentication.Shared.OpenAPIDateConverter
struct OpenAPIDateConverter_t9F8E729C74401A523E3381638C3124D443ABB9D5  : public IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9
struct U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>> Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 ___U3CU3Et__builder_1;
	// System.String Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::playerId
	String_t* ___playerId_2;
	// System.Nullable`1<System.Boolean> Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::autoGenerate
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___autoGenerate_3;
	// System.Nullable`1<System.Boolean> Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::showMetadata
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___showMetadata_4;
	// System.Threading.CancellationToken Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_5;
	// Unity.Services.Authentication.Generated.PlayerNamesApi Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<>4__this
	PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* ___U3CU3E4__this_6;
	// Unity.Services.Authentication.Shared.ApiRequestOptions Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<localRequestOptions>5__1
	ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* ___U3ClocalRequestOptionsU3E5__1_7;
	// System.String[] Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<_contentTypes>5__2
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3C_contentTypesU3E5__2_8;
	// System.String[] Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<_accepts>5__3
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3C_acceptsU3E5__3_9;
	// System.String Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<localContentType>5__4
	String_t* ___U3ClocalContentTypeU3E5__4_10;
	// System.String Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<localAccept>5__5
	String_t* ___U3ClocalAcceptU3E5__5_11;
	// Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player> Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<>s__6
	ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* ___U3CU3Es__6_12;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>> Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::<>u__1
	TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 ___U3CU3Eu__1_13;
};

// Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10
struct U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B  : public RuntimeObject
{
	// System.Int32 Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>> Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 ___U3CU3Et__builder_1;
	// System.String Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::playerId
	String_t* ___playerId_2;
	// Unity.Services.Authentication.Generated.UpdateNameRequest Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::updateNameRequest
	UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* ___updateNameRequest_3;
	// System.Threading.CancellationToken Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Unity.Services.Authentication.Generated.PlayerNamesApi Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<>4__this
	PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* ___U3CU3E4__this_5;
	// Unity.Services.Authentication.Shared.ApiRequestOptions Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<localRequestOptions>5__1
	ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* ___U3ClocalRequestOptionsU3E5__1_6;
	// System.String[] Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<_contentTypes>5__2
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3C_contentTypesU3E5__2_7;
	// System.String[] Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<_accepts>5__3
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3C_acceptsU3E5__3_8;
	// System.String Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<localContentType>5__4
	String_t* ___U3ClocalContentTypeU3E5__4_9;
	// System.String Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<localAccept>5__5
	String_t* ___U3ClocalAcceptU3E5__5_10;
	// Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player> Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<>s__6
	ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* ___U3CU3Es__6_11;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>> Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::<>u__1
	TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 ___U3CU3Eu__1_12;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Multimap_2__ctor_mEC78EF79238BE5C7992D559932B29B21FF87C7FA_gshared (Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,System.Collections.Generic.IList`1<TValue>>> Unity.Services.Authentication.Shared.Multimap`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Multimap_2_GetEnumerator_m2848432276E27E8409A43A73BEF90A8E18657CB3_gshared (Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Multimap_2_Add_m037B4F33BAC463E14996DA820AA7180DF5BF93C2_gshared (Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_m4790202A7933DC16EDCE02BF077B16246B400436_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.Object,System.Object>::Add(Unity.Services.Authentication.Shared.Multimap`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Multimap_2_Add_m218990BC8ED3A46A24C629E625F625ACA928109B_gshared (Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2* __this, Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2* ___multimap0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.Shared.Multimap`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Multimap_2_ContainsKey_mBE2201418B7FC0CB8FD5A45A75B04B2ACFE1E008_gshared (Multimap_2_tE012DCCA101C650695E8401D9214FE3673696CB2* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.ApiException::set_Type(Unity.Services.Authentication.Shared.ApiExceptionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiException_set_Type_m6632103E498066083D34CE8FC08B1693ECFBC24B_inline (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.ApiException::set_Response(Unity.Services.Authentication.Shared.IApiResponse)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiException_set_Response_m0CD74A5EF88E695D5592F356CF4EC76CF81A7787_inline (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_PathParameters(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_PathParameters_m5A27A4A5C73F335CCA8944D6221CF4B6D114AC3B_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>::.ctor()
inline void Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2 (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* __this, const RuntimeMethod* method)
{
	((  void (*) (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*, const RuntimeMethod*))Multimap_2__ctor_mEC78EF79238BE5C7992D559932B29B21FF87C7FA_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_QueryParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_QueryParameters_m44F0DBEA8495726DE17B66977B87572AA2A8A9DA_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_HeaderParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_HeaderParameters_m927BA51AF752E4E1DC053C5B33CBBE4825D83080_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_FormParameters(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_FormParameters_mF32697C09568970C064F86C8F7EF87F6DC04179C_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream>::.ctor()
inline void Multimap_2__ctor_m748C5A9304D3A0B9924807FD695C9A6CB01E2C13 (Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1*, const RuntimeMethod*))Multimap_2__ctor_mEC78EF79238BE5C7992D559932B29B21FF87C7FA_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_FileParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_FileParameters_mB75B33A63800177EFB0196557F005E029667F47B_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m0D32DB5F61DFFE1E4F61EE513E3419F9DA8F773E (String_t* ___stringToEscape0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,System.Collections.Generic.IList`1<TValue>>> Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>::GetEnumerator()
inline RuntimeObject* Multimap_2_GetEnumerator_m52BD66CC87291C115582D64B9486D161B825BC3F (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*, const RuntimeMethod*))Multimap_2_GetEnumerator_m2848432276E27E8409A43A73BEF90A8E18657CB3_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_mB58492AAA9D92B0937D71FB6AD9AC1500AEFD1D0_inline (KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m06ED87C7E926CEF8CA7BC33BC5305BDD1A926007_inline (KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Authentication.Shared.ApiResponse::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.Shared.ApiUtils::ParameterToString(Unity.Services.Authentication.Shared.IApiConfiguration,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618 (RuntimeObject* ___configuration0, RuntimeObject* ___obj1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>::Add(TKey,TValue)
inline void Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0 (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*, String_t*, String_t*, const RuntimeMethod*))Multimap_2_Add_m037B4F33BAC463E14996DA820AA7180DF5BF93C2_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.DateTimeOffset::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_mAC5241022745D7158B8ED97099483537115ACA80 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330_gshared)(___source0, method);
}
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_gshared)(___separator0, ___values1, method);
}
// System.Boolean Unity.Services.Authentication.Shared.ApiUtils::HasEnumMemberAttrValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiUtils_HasEnumMemberAttrValue_m685B69501DF3CE90C84537D67BA68E706D7EE607 (RuntimeObject* ___enumVal0, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.Shared.ApiUtils::GetEnumMemberAttrValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_GetEnumMemberAttrValue_m75B6DE9D47241BD570561A93C4E36EA0416BB95E (RuntimeObject* ___enumVal0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mCC5DC13CDF7E338DB15699432F28477C7DF52DE1 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.Shared.ApiUtils::IsJsonMime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiUtils_IsJsonMime_m1A973694028C4217B53A545CD77D01D794A3805F (String_t* ___mime0, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
inline bool Enumerable_Contains_TisString_t_m47DB730A3194B48CB67D6202DCA8A97FAE93581F (RuntimeObject* ___source0, String_t* ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_m4790202A7933DC16EDCE02BF077B16246B400436_gshared)(___source0, ___value1, ___comparer2, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MemberInfo_t* Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MemberInfo_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Runtime.Serialization.EnumMemberAttribute>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Runtime.Serialization.EnumMemberAttribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mB41126B613B9FD1CD8A05D08FCEC4B6663864BE9_inline (EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsoDateTimeConverter__ctor_m826994A815114F0A06F4788BEAF6A1EE2AFD0432 (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsoDateTimeConverter_set_DateTimeFormat_mE422F40170E5CDE98FE7AE5DB543122D9D7AA4D1 (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.ApiConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiConfiguration__ctor_mD0765A0047517478AA8A11CD99F9771DEB201DDD (ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Shared.IApiConfiguration Unity.Services.Authentication.Generated.PlayerNamesApi::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameAsyncU3Ed__9__ctor_m830A6522B5ED4177463CEFF147ABA0C3E71B1CA9 (U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::Create()
inline AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::Start<Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m5709A8675E23D5C181A3D2F6A13E1BCDFCAB337C (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::get_Task()
inline Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateNameAsyncU3Ed__10__ctor_m0D5487EEFD91E552B5ECCDE0A5A53F148A9A5609 (U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::Start<Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mE2E714B8F456B7866265EE0D631F2BF19E654F5F (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Authentication.Shared.ApiException::.ctor(Unity.Services.Authentication.Shared.ApiExceptionType,System.String,Unity.Services.Authentication.Shared.IApiResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiException__ctor_m8613EA62B65E8A7792588C837DD66FAEA80A07F2 (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, int32_t ___type0, String_t* ___message1, RuntimeObject* ___response2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions__ctor_m5EA6E302AC08BC87D183EA5FB5F67604BC6A94F4 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.Shared.ApiUtils::SelectHeaderContentType(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_SelectHeaderContentType_mF7C16C7668E4ADA3416AA750126D23B64D19C905 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___contentTypes0, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_HeaderParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Authentication.Shared.ApiUtils::SelectHeaderAccept(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_SelectHeaderAccept_mEEF0AB9C8A31C2EEE285A7B8E6A0DBF9577790B6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___accepts0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_PathParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ApiRequestOptions_get_PathParameters_m751BD01D7CC6653A0FF5F30CC7F0B02DA0EC9386_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_QueryParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiRequestOptions_get_QueryParameters_m8C131BD0B1D6DAE86F3B976D825E6228A4CFEEE8_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiUtils::ParameterToMultiMap(Unity.Services.Authentication.Shared.IApiConfiguration,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiUtils_ParameterToMultiMap_mA5FF4F2FE41AD40764B0568ED0D2E3129F6DD0B6 (RuntimeObject* ___configuration0, String_t* ___collectionFormat1, String_t* ___name2, RuntimeObject* ___value3, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>::Add(Unity.Services.Authentication.Shared.Multimap`2<TKey,TValue>)
inline void Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___multimap0, const RuntimeMethod* method)
{
	((  void (*) (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*, const RuntimeMethod*))Multimap_2_Add_m218990BC8ED3A46A24C629E625F625ACA928109B_gshared)(__this, ___multimap0, method);
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_Operation(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_Operation_mF6B25F8B3F9385D03C00A8522E3C5BDF131B5FBE_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>::ContainsKey(TKey)
inline bool Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*, String_t*, const RuntimeMethod*))Multimap_2_ContainsKey_mBE2201418B7FC0CB8FD5A45A75B04B2ACFE1E008_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Shared.IApiClient Unity.Services.Authentication.Generated.PlayerNamesApi::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerNamesApi_get_Client_mC71FA0206EB7FD0FAD365D49E567535475C17437_inline (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::GetAwaiter()
inline TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66 (Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 (*) (Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7 (TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>,Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m3A542B3003BD058E93280C895CC5B692F741EC88 (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8* ___awaiter0, U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8*, U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::GetResult()
inline ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48 (TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8* __this, const RuntimeMethod* method)
{
	return ((  ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* (*) (TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m75C45CE0278D487EE52871732D54700F82F73160 (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631 (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_Data(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_Data_m9C0F99493783FD2CDF74A14BFF007E9D73CE4E94_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>>,Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mCA2E8E5B4F14B488FF6380D2ED2791D20D4420EA (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* __this, TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8* ___awaiter0, U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320*, TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8*, U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Unity.Services.Authentication.Generated.Detail::set_ErrorType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Detail_set_ErrorType_m9CAA5495DC1F80877CB05811C3D50C236E2CAF62_inline (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.Detail::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Detail_set_Message_mE40A9C78E0D10E1C553EB4A29A60FED86D910602_inline (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Status(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Status_mCFADC1F24F28ED7E936E2778F4FE4756DEB58D97_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Title_m8AFE10D39C118B50EDE0BA9685023C7327FCCF78_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Detail(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Detail_mC0716E0869BFF81FE40436B64702F8663926B9B4_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Code_mF9E4A74606AEF9FD6569CB161CCD95C7EE4245F7_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Details(System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Details_mB5D7E4F22EE5C1FFD6B5068949E0D47BDDB786F6_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.Player::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Id_m7B34F85899A22D29B8751359753555EC3581F03B_inline (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.Player::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Name_m33F257E68B9AA0AD62B0CD9263F0344B3019981B_inline (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.Player::set_AutoGenerated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_AutoGenerated_m61400194E7C2FBB1D23CEE242E1A55F78356DB80_inline (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Authentication.Generated.UpdateNameRequest::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateNameRequest_set_Name_mACF219FCC5AC88C7327EACB6CD221E2D2CE2A030_inline (UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Authentication.Shared.ApiExceptionType Unity.Services.Authentication.Shared.ApiException::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiException_get_Type_m5F8DB59E8E17BC0E7034E94798202930C78B273A (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, const RuntimeMethod* method) 
{
	{
		// public ApiExceptionType Type { get; private set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiException::set_Type(Unity.Services.Authentication.Shared.ApiExceptionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiException_set_Type_m6632103E498066083D34CE8FC08B1693ECFBC24B (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ApiExceptionType Type { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_18 = L_0;
		return;
	}
}
// Unity.Services.Authentication.Shared.IApiResponse Unity.Services.Authentication.Shared.ApiException::get_Response()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApiException_get_Response_m0561EBC006BB8F6778F5DF40667D0745E2F7F942 (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, const RuntimeMethod* method) 
{
	{
		// public IApiResponse Response { get; private set; }
		RuntimeObject* L_0 = __this->___U3CResponseU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiException::set_Response(Unity.Services.Authentication.Shared.IApiResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiException_set_Response_m0CD74A5EF88E695D5592F356CF4EC76CF81A7787 (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IApiResponse Response { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CResponseU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiException::.ctor(Unity.Services.Authentication.Shared.ApiExceptionType,System.String,Unity.Services.Authentication.Shared.IApiResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiException__ctor_m8613EA62B65E8A7792588C837DD66FAEA80A07F2 (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, int32_t ___type0, String_t* ___message1, RuntimeObject* ___response2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ApiException(ApiExceptionType type, string message, IApiResponse response = null) : base(message)
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// this.Type = type;
		int32_t L_1 = ___type0;
		ApiException_set_Type_m6632103E498066083D34CE8FC08B1693ECFBC24B_inline(__this, L_1, NULL);
		// this.Response = response;
		RuntimeObject* L_2 = ___response2;
		ApiException_set_Response_m0CD74A5EF88E695D5592F356CF4EC76CF81A7787_inline(__this, L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_PathParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ApiRequestOptions_get_PathParameters_m751BD01D7CC6653A0FF5F30CC7F0B02DA0EC9386 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> PathParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CPathParametersU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_PathParameters(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_PathParameters_m5A27A4A5C73F335CCA8944D6221CF4B6D114AC3B (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> PathParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->___U3CPathParametersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathParametersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_QueryParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiRequestOptions_get_QueryParameters_m8C131BD0B1D6DAE86F3B976D825E6228A4CFEEE8 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> QueryParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = __this->___U3CQueryParametersU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_QueryParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_QueryParameters_m44F0DBEA8495726DE17B66977B87572AA2A8A9DA (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> QueryParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = ___value0;
		__this->___U3CQueryParametersU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryParametersU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_HeaderParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> HeaderParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = __this->___U3CHeaderParametersU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_HeaderParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_HeaderParameters_m927BA51AF752E4E1DC053C5B33CBBE4825D83080 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> HeaderParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = ___value0;
		__this->___U3CHeaderParametersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderParametersU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiRequestOptions::get_FormParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ApiRequestOptions_get_FormParameters_mB18244AA248D13991854DE3F09B8F96E2B9D68B4 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> FormParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CFormParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_FormParameters(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_FormParameters_mF32697C09568970C064F86C8F7EF87F6DC04179C (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> FormParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->___U3CFormParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream> Unity.Services.Authentication.Shared.ApiRequestOptions::get_FileParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* ApiRequestOptions_get_FileParameters_mC8C0FFEFF2077EDF82A7A5BFEAEC10F3A98C94CF (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, Stream> FileParameters { get; set; }
		Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* L_0 = __this->___U3CFileParametersU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_FileParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.IO.Stream>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_FileParameters_mB75B33A63800177EFB0196557F005E029667F47B (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, Stream> FileParameters { get; set; }
		Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* L_0 = ___value0;
		__this->___U3CFileParametersU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileParametersU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiRequestOptions::get_Operation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiRequestOptions_get_Operation_m6C54FFA2373DCD8FB11004DB77C1143B53D0B6FE (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public string Operation { get; set; }
		String_t* L_0 = __this->___U3COperationU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_Operation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_Operation_mF6B25F8B3F9385D03C00A8522E3C5BDF131B5FBE (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Operation { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3COperationU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COperationU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Object Unity.Services.Authentication.Shared.ApiRequestOptions::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApiRequestOptions_get_Data_m12FF77F83192BA3324222402386095B5BCDA8898 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public object Data { get; set; }
		RuntimeObject* L_0 = __this->___U3CDataU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::set_Data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions_set_Data_m9C0F99493783FD2CDF74A14BFF007E9D73CE4E94 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Data { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestOptions__ctor_m5EA6E302AC08BC87D183EA5FB5F67604BC6A94F4 (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2__ctor_m748C5A9304D3A0B9924807FD695C9A6CB01E2C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ApiRequestOptions()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// PathParameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		ApiRequestOptions_set_PathParameters_m5A27A4A5C73F335CCA8944D6221CF4B6D114AC3B_inline(__this, L_0, NULL);
		// QueryParameters = new Multimap<string, string>();
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_1 = (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*)il2cpp_codegen_object_new(Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2(L_1, Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2_RuntimeMethod_var);
		ApiRequestOptions_set_QueryParameters_m44F0DBEA8495726DE17B66977B87572AA2A8A9DA_inline(__this, L_1, NULL);
		// HeaderParameters = new Multimap<string, string>();
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_2 = (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*)il2cpp_codegen_object_new(Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2(L_2, Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2_RuntimeMethod_var);
		ApiRequestOptions_set_HeaderParameters_m927BA51AF752E4E1DC053C5B33CBBE4825D83080_inline(__this, L_2, NULL);
		// FormParameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_3, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		ApiRequestOptions_set_FormParameters_mF32697C09568970C064F86C8F7EF87F6DC04179C_inline(__this, L_3, NULL);
		// FileParameters = new Multimap<string, Stream>();
		Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* L_4 = (Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1*)il2cpp_codegen_object_new(Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Multimap_2__ctor_m748C5A9304D3A0B9924807FD695C9A6CB01E2C13(L_4, Multimap_2__ctor_m748C5A9304D3A0B9924807FD695C9A6CB01E2C13_RuntimeMethod_var);
		ApiRequestOptions_set_FileParameters_mB75B33A63800177EFB0196557F005E029667F47B_inline(__this, L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.Shared.ApiRequestPathBuilder::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestPathBuilder__ctor_mF257137CF45B4DFD8B6D4FE33F6F7057820B081B (ApiRequestPathBuilder_tA39A2E0890B266BFC69600101CDC589E984302A0* __this, String_t* ___baseUrl0, String_t* ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _query = "?";
		__this->____query_2 = _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____query_2), (void*)_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		// public ApiRequestPathBuilder(string baseUrl, string path)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _baseUrl = baseUrl;
		String_t* L_0 = ___baseUrl0;
		__this->____baseUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseUrl_0), (void*)L_0);
		// _path = path;
		String_t* L_1 = ___path1;
		__this->____path_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____path_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestPathBuilder::AddPathParameters(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestPathBuilder_AddPathParameters_mDCD93CB1350B2870FF741E63C5FE14871A94C828 (ApiRequestPathBuilder_tA39A2E0890B266BFC69600101CDC589E984302A0* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var parameter in parameters)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___parameters0;
		NullCheck(L_0);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_1;
		L_1 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_0, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_0), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_000b_1:
			{
				// foreach (var parameter in parameters)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_2;
				L_2 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_0), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_2;
				// _path = _path.Replace("{" + parameter.Key + "}", Uri.EscapeDataString(parameter.Value));
				String_t* L_3 = __this->____path_1;
				String_t* L_4;
				L_4 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_5;
				L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_4, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
				String_t* L_7;
				L_7 = Uri_EscapeDataString_m0D32DB5F61DFFE1E4F61EE513E3419F9DA8F773E(L_6, NULL);
				NullCheck(L_3);
				String_t* L_8;
				L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, L_5, L_7, NULL);
				__this->____path_1 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____path_1), (void*)L_8);
			}

IL_0048_1:
			{
				// foreach (var parameter in parameters)
				bool L_9;
				L_9 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_0), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiRequestPathBuilder::AddQueryParameters(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiRequestPathBuilder_AddQueryParameters_m80C5135402EE1A6F2B4D0C27DC1D42943CAF32E7 (ApiRequestPathBuilder_tA39A2E0890B266BFC69600101CDC589E984302A0* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF50EE634569CCF065DA40B43344A543BABC49F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m06ED87C7E926CEF8CA7BC33BC5305BDD1A926007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB58492AAA9D92B0937D71FB6AD9AC1500AEFD1D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_GetEnumerator_m52BD66CC87291C115582D64B9486D161B825BC3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// foreach (var parameter in parameters)
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = ___parameters0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Multimap_2_GetEnumerator_m52BD66CC87291C115582D64B9486D161B825BC3F(L_0, Multimap_2_GetEnumerator_m52BD66CC87291C115582D64B9486D161B825BC3F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0089:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0093;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0093:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007f_1;
			}

IL_000b_1:
			{
				// foreach (var parameter in parameters)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tE8F767C8037F2F5FE94E4B80F302702122FFE2D0 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>>::get_Current() */, IEnumerator_1_tF50EE634569CCF065DA40B43344A543BABC49F06_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// foreach (var value in parameter.Value)
				RuntimeObject* L_6;
				L_6 = KeyValuePair_2_get_Value_mB58492AAA9D92B0937D71FB6AD9AC1500AEFD1D0_inline((&V_1), KeyValuePair_2_get_Value_mB58492AAA9D92B0937D71FB6AD9AC1500AEFD1D0_RuntimeMethod_var);
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0073_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_8 = V_2;
							if (!L_8)
							{
								goto IL_007d_1;
							}
						}
						{
							RuntimeObject* L_9 = V_2;
							NullCheck(L_9);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_007d_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0069_2;
					}

IL_0023_2:
					{
						// foreach (var value in parameter.Value)
						RuntimeObject* L_10 = V_2;
						NullCheck(L_10);
						String_t* L_11;
						L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_10);
						V_3 = L_11;
						// _query = _query + parameter.Key + "=" + Uri.EscapeDataString(value) + "&";
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
						String_t* L_14 = __this->____query_2;
						NullCheck(L_13);
						ArrayElementTypeCheck (L_13, L_14);
						(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
						String_t* L_16;
						L_16 = KeyValuePair_2_get_Key_m06ED87C7E926CEF8CA7BC33BC5305BDD1A926007_inline((&V_1), KeyValuePair_2_get_Key_m06ED87C7E926CEF8CA7BC33BC5305BDD1A926007_RuntimeMethod_var);
						NullCheck(L_15);
						ArrayElementTypeCheck (L_15, L_16);
						(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
						NullCheck(L_17);
						ArrayElementTypeCheck (L_17, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
						(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
						String_t* L_19 = V_3;
						il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
						String_t* L_20;
						L_20 = Uri_EscapeDataString_m0D32DB5F61DFFE1E4F61EE513E3419F9DA8F773E(L_19, NULL);
						NullCheck(L_18);
						ArrayElementTypeCheck (L_18, L_20);
						(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
						NullCheck(L_21);
						ArrayElementTypeCheck (L_21, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
						(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
						String_t* L_22;
						L_22 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_21, NULL);
						__this->____query_2 = L_22;
						Il2CppCodeGenWriteBarrier((void**)(&__this->____query_2), (void*)L_22);
					}

IL_0069_2:
					{
						// foreach (var value in parameter.Value)
						RuntimeObject* L_23 = V_2;
						NullCheck(L_23);
						bool L_24;
						L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
						if (L_24)
						{
							goto IL_0023_2;
						}
					}
					{
						goto IL_007e_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007e_1:
			{
			}

IL_007f_1:
			{
				// foreach (var parameter in parameters)
				RuntimeObject* L_25 = V_0;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0094;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiRequestPathBuilder::GetFullUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiRequestPathBuilder_GetFullUri_mA1A601A434BFB570B79733F2ED44776F25D09195 (ApiRequestPathBuilder_tA39A2E0890B266BFC69600101CDC589E984302A0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return _baseUrl + _path + _query.Substring(0, _query.Length - 1);
		String_t* L_0 = __this->____baseUrl_0;
		String_t* L_1 = __this->____path_1;
		String_t* L_2 = __this->____query_2;
		String_t* L_3 = __this->____query_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		NullCheck(L_2);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, 0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_1, L_5, NULL);
		V_0 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		String_t* L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Services.Authentication.Shared.ApiResponse::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public int StatusCode { get; internal set; }
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiResponse::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponse_set_StatusCode_mF460FCFB59C55B8B0DF60DF9005A7CC06F276CA0 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int StatusCode { get; internal set; }
		int32_t L_0 = ___value0;
		__this->___U3CStatusCodeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiResponse::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiResponse_get_Headers_m7FA6BF859C996C8A1BFAF079ADE1CD08C844CBA4 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> Headers { get; internal set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = __this->___U3CHeadersU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiResponse::set_Headers(Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponse_set_Headers_mD0450BD8C5EFB8F0932D200EDFC3542D701AA4A7 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> Headers { get; internal set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = ___value0;
		__this->___U3CHeadersU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiResponse::get_ErrorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiResponse_get_ErrorText_m38BA3B5F403672DBF5A020AA78BDBFA899D24A42 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorText { get; internal set; }
		String_t* L_0 = __this->___U3CErrorTextU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiResponse::set_ErrorText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponse_set_ErrorText_m7A750E4E43A350A68B75277BBBDC1401B129ECD4 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ErrorText { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorTextU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorTextU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiResponse::get_RawContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiResponse_get_RawContent_m2D2EAFA5ED1387F1672919B27A92233D85C23B3C (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public string RawContent { get; internal set; }
		String_t* L_0 = __this->___U3CRawContentU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiResponse::set_RawContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponse_set_RawContent_m154FC204FD427B14D197DB7EC557491D1CA24C00 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string RawContent { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CRawContentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawContentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object Unity.Services.Authentication.Shared.ApiResponse::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApiResponse_get_Content_mD4627A4B787C1DFB1568401562FF51D9361818F0 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public virtual object Content => null;
		return NULL;
	}
}
// System.Boolean Unity.Services.Authentication.Shared.ApiResponse::get_IsSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiResponse_get_IsSuccessful_mBAB116A9E236704F153E63B85DDE1E2DF2FD7FF0 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public bool IsSuccessful => StatusCode >= 200 && StatusCode < 300;
		int32_t L_0;
		L_0 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)200))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)300)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Unity.Services.Authentication.Shared.ApiResponse::get_IsRedirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiResponse_get_IsRedirection_m439C2988DB5E24466C09A3B6699A79DF0B5CFC15 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public bool IsRedirection => StatusCode >= 300 && StatusCode < 400;
		int32_t L_0;
		L_0 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)300))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)400)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Unity.Services.Authentication.Shared.ApiResponse::get_IsClientError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiResponse_get_IsClientError_m2CADBF466C138FD56CB6DAE3FB6CB90CAA7F20A1 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public bool IsClientError => StatusCode >= 400 && StatusCode < 500;
		int32_t L_0;
		L_0 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)400))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)500)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Unity.Services.Authentication.Shared.ApiResponse::get_IsServerError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiResponse_get_IsServerError_mAC6E2BD0EAE4C0BCDD475CC39E8913D6563078F4 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public bool IsServerError => StatusCode >= 500 && StatusCode < 600;
		int32_t L_0;
		L_0 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)500))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)600)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponse__ctor_mDB7CD5C73E9B7318FC9D0B695E87812CCCB2A160 (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public ApiResponse()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Authentication.Shared.Multimap`2<System.String,System.String> Unity.Services.Authentication.Shared.ApiUtils::ParameterToMultiMap(Unity.Services.Authentication.Shared.IApiConfiguration,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiUtils_ParameterToMultiMap_mA5FF4F2FE41AD40764B0568ED0D2E3129F6DD0B6 (RuntimeObject* ___configuration0, String_t* ___collectionFormat1, String_t* ___name2, RuntimeObject* ___value3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3AD588F235747E2CE112556E9BD72AA3654AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55287E7C5B1B29E0C38F4EB26BD01879D2C68D5);
		s_Il2CppMethodInitialized = true;
	}
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_12;
	memset((&V_12), 0, sizeof(V_12));
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* V_13 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeObject* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* G_B19_3 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B18_2 = NULL;
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B20_2 = NULL;
	Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* G_B20_3 = NULL;
	{
		// var parameters = new Multimap<string, string>();
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = (Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8*)il2cpp_codegen_object_new(Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2(L_0, Multimap_2__ctor_mEC16A10BD3780BFAAD0EBF74A28456F8813837B2_RuntimeMethod_var);
		V_0 = L_0;
		// if (value is ICollection collection && collectionFormat == "multi")
		RuntimeObject* L_1 = ___value3;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___collectionFormat1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralF55287E7C5B1B29E0C38F4EB26BD01879D2C68D5, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		// foreach (var item in collection)
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_3;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_5;
					if (!L_9)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_10 = V_5;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_002e_1:
			{
				// foreach (var item in collection)
				RuntimeObject* L_11 = V_3;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				V_4 = L_12;
				// parameters.Add(name, ParameterToString(configuration, item));
				Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_13 = V_0;
				String_t* L_14 = ___name2;
				RuntimeObject* L_15 = ___configuration0;
				RuntimeObject* L_16 = V_4;
				il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
				String_t* L_17;
				L_17 = ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618(L_15, L_16, NULL);
				NullCheck(L_13);
				Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_13, L_14, L_17, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
			}

IL_0048_1:
			{
				// foreach (var item in collection)
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		goto IL_0180;
	}

IL_006d:
	{
		// else if (value is IDictionary dictionary)
		RuntimeObject* L_20 = ___value3;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		RuntimeObject* L_21 = V_6;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_016f;
		}
	}
	{
		// if(collectionFormat == "deepObject") {
		String_t* L_23 = ___collectionFormat1;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral6C3AD588F235747E2CE112556E9BD72AA3654AE3, NULL);
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_010d;
		}
	}
	{
		// foreach (DictionaryEntry entry in dictionary)
		RuntimeObject* L_26 = V_6;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_26);
		V_9 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_9;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_29 = V_5;
					if (!L_29)
					{
						goto IL_0109;
					}
				}
				{
					RuntimeObject* L_30 = V_5;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_0109:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e9_1;
			}

IL_00a2_1:
			{
				// foreach (DictionaryEntry entry in dictionary)
				RuntimeObject* L_31 = V_9;
				NullCheck(L_31);
				RuntimeObject* L_32;
				L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				V_10 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_32, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				// parameters.Add(name + "[" + entry.Key + "]", ParameterToString(configuration, entry.Value));
				Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_33 = V_0;
				String_t* L_34 = ___name2;
				RuntimeObject* L_35;
				L_35 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_10), NULL);
				RuntimeObject* L_36 = L_35;
				G_B18_0 = L_36;
				G_B18_1 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
				G_B18_2 = L_34;
				G_B18_3 = L_33;
				if (L_36)
				{
					G_B19_0 = L_36;
					G_B19_1 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
					G_B19_2 = L_34;
					G_B19_3 = L_33;
					goto IL_00c6_1;
				}
			}
			{
				G_B20_0 = ((String_t*)(NULL));
				G_B20_1 = G_B18_1;
				G_B20_2 = G_B18_2;
				G_B20_3 = G_B18_3;
				goto IL_00cb_1;
			}

IL_00c6_1:
			{
				NullCheck(G_B19_0);
				String_t* L_37;
				L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B19_0);
				G_B20_0 = L_37;
				G_B20_1 = G_B19_1;
				G_B20_2 = G_B19_2;
				G_B20_3 = G_B19_3;
			}

IL_00cb_1:
			{
				String_t* L_38;
				L_38 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B20_2, G_B20_1, G_B20_0, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
				RuntimeObject* L_39 = ___configuration0;
				RuntimeObject* L_40;
				L_40 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_10), NULL);
				il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
				String_t* L_41;
				L_41 = ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618(L_39, L_40, NULL);
				NullCheck(G_B20_3);
				Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(G_B20_3, L_38, L_41, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
			}

IL_00e9_1:
			{
				// foreach (DictionaryEntry entry in dictionary)
				RuntimeObject* L_42 = V_9;
				NullCheck(L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00a2_1;
				}
			}
			{
				goto IL_010a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		goto IL_016c;
	}

IL_010d:
	{
		// foreach (DictionaryEntry entry in dictionary)
		RuntimeObject* L_44 = V_6;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_44);
		V_11 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0155:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_46 = V_11;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_46, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_47 = V_5;
					if (!L_47)
					{
						goto IL_016a;
					}
				}
				{
					RuntimeObject* L_48 = V_5;
					NullCheck(L_48);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_48);
				}

IL_016a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014a_1;
			}

IL_011a_1:
			{
				// foreach (DictionaryEntry entry in dictionary)
				RuntimeObject* L_49 = V_11;
				NullCheck(L_49);
				RuntimeObject* L_50;
				L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				V_12 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_50, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				// parameters.Add(entry.Key.ToString(), ParameterToString(configuration, entry.Value));
				Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_51 = V_0;
				RuntimeObject* L_52;
				L_52 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_12), NULL);
				NullCheck(L_52);
				String_t* L_53;
				L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
				RuntimeObject* L_54 = ___configuration0;
				RuntimeObject* L_55;
				L_55 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_12), NULL);
				il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
				String_t* L_56;
				L_56 = ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618(L_54, L_55, NULL);
				NullCheck(L_51);
				Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_51, L_53, L_56, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
			}

IL_014a_1:
			{
				// foreach (DictionaryEntry entry in dictionary)
				RuntimeObject* L_57 = V_11;
				NullCheck(L_57);
				bool L_58;
				L_58 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_57);
				if (L_58)
				{
					goto IL_011a_1;
				}
			}
			{
				goto IL_016b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_016b:
	{
	}

IL_016c:
	{
		goto IL_0180;
	}

IL_016f:
	{
		// parameters.Add(name, ParameterToString(configuration, value));
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_59 = V_0;
		String_t* L_60 = ___name2;
		RuntimeObject* L_61 = ___configuration0;
		RuntimeObject* L_62 = ___value3;
		il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		String_t* L_63;
		L_63 = ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618(L_61, L_62, NULL);
		NullCheck(L_59);
		Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_59, L_60, L_63, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
	}

IL_0180:
	{
		// return parameters;
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_64 = V_0;
		V_13 = L_64;
		goto IL_0185;
	}

IL_0185:
	{
		// }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_65 = V_13;
		return L_65;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiUtils::ParameterToString(Unity.Services.Authentication.Shared.IApiConfiguration,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618 (RuntimeObject* ___configuration0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	String_t* G_B17_0 = NULL;
	int32_t G_B23_0 = 0;
	{
		// if (obj is DateTime dateTime)
		RuntimeObject* L_0 = ___obj1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___obj1;
		V_0 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_4 = (bool)G_B3_0;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return dateTime.ToString(configuration.DateTimeFormat);
		RuntimeObject* L_3 = ___configuration0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_DateTimeFormat() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), L_4, NULL);
		V_5 = L_5;
		goto IL_00dc;
	}

IL_002e:
	{
		// if (obj is DateTimeOffset dateTimeOffset)
		RuntimeObject* L_6 = ___obj1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_7 = ___obj1;
		V_1 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_7, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		G_B8_0 = 1;
		goto IL_0041;
	}

IL_0040:
	{
		G_B8_0 = 0;
	}

IL_0041:
	{
		V_6 = (bool)G_B8_0;
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// return dateTimeOffset.ToString(configuration.DateTimeFormat);
		RuntimeObject* L_9 = ___configuration0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_DateTimeFormat() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_9);
		String_t* L_11;
		L_11 = DateTimeOffset_ToString_mAC5241022745D7158B8ED97099483537115ACA80((&V_1), L_10, NULL);
		V_5 = L_11;
		goto IL_00dc;
	}

IL_005b:
	{
		// if (obj is bool boolean)
		RuntimeObject* L_12 = ___obj1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___obj1;
		V_2 = ((*(bool*)((bool*)(bool*)UnBox(L_13, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		G_B13_0 = 1;
		goto IL_006e;
	}

IL_006d:
	{
		G_B13_0 = 0;
	}

IL_006e:
	{
		V_7 = (bool)G_B13_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		// return boolean ? "true" : "false";
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_007e;
		}
	}
	{
		G_B17_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		goto IL_0083;
	}

IL_007e:
	{
		G_B17_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
	}

IL_0083:
	{
		V_5 = G_B17_0;
		goto IL_00dc;
	}

IL_0087:
	{
		// if (obj is ICollection collection)
		RuntimeObject* L_16 = ___obj1;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_17 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_00ac;
		}
	}
	{
		// return string.Join(",", collection.Cast<object>());
		RuntimeObject* L_19 = V_3;
		RuntimeObject* L_20;
		L_20 = Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330(L_19, Enumerable_Cast_TisRuntimeObject_m2A5A4081E63E9C54E004DDD58B93C44866FE1330_RuntimeMethod_var);
		String_t* L_21;
		L_21 = String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_20, String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_RuntimeMethod_var);
		V_5 = L_21;
		goto IL_00dc;
	}

IL_00ac:
	{
		// if (obj is Enum && HasEnumMemberAttrValue(obj))
		RuntimeObject* L_22 = ___obj1;
		if (!((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)IsInstClass((RuntimeObject*)L_22, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var)))
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_23 = ___obj1;
		il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = ApiUtils_HasEnumMemberAttrValue_m685B69501DF3CE90C84537D67BA68E706D7EE607(L_23, NULL);
		G_B23_0 = ((int32_t)(L_24));
		goto IL_00bd;
	}

IL_00bc:
	{
		G_B23_0 = 0;
	}

IL_00bd:
	{
		V_9 = (bool)G_B23_0;
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00cd;
		}
	}
	{
		// return GetEnumMemberAttrValue(obj);
		RuntimeObject* L_26 = ___obj1;
		il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = ApiUtils_GetEnumMemberAttrValue_m75B6DE9D47241BD570561A93C4E36EA0416BB95E(L_26, NULL);
		V_5 = L_27;
		goto IL_00dc;
	}

IL_00cd:
	{
		// return Convert.ToString(obj, CultureInfo.InvariantCulture);
		RuntimeObject* L_28 = ___obj1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_29;
		L_29 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Convert_ToString_mCC5DC13CDF7E338DB15699432F28477C7DF52DE1(L_28, L_29, NULL);
		V_5 = L_30;
		goto IL_00dc;
	}

IL_00dc:
	{
		// }
		String_t* L_31 = V_5;
		return L_31;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiUtils::Base64Encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_Base64Encode_mD8E83249E65916FF0D9F5C022B9DD17E3023F304 (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Convert.ToBase64String(System.Text.Encoding.UTF8.GetBytes(text));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToBase64String_mB276B21511FB01CDE030619C81757E786F91B9F3(L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiUtils::SelectHeaderContentType(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_SelectHeaderContentType_mF7C16C7668E4ADA3416AA750126D23B64D19C905 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___contentTypes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		// if (contentTypes.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___contentTypes0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_003e;
	}

IL_000e:
	{
		// foreach (var contentType in contentTypes)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___contentTypes0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0032;
	}

IL_0015:
	{
		// foreach (var contentType in contentTypes)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// if (IsJsonMime(contentType))
		String_t* L_7 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = ApiUtils_IsJsonMime_m1A973694028C4217B53A545CD77D01D794A3805F(L_7, NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		// return contentType;
		String_t* L_10 = V_4;
		V_1 = L_10;
		goto IL_003e;
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		// foreach (var contentType in contentTypes)
		int32_t L_12 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// return contentTypes[0]; // use the first content type specified in 'consumes'
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___contentTypes0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = L_16;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiUtils::SelectHeaderAccept(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_SelectHeaderAccept_mEEF0AB9C8A31C2EEE285A7B8E6A0DBF9577790B6 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___accepts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m47DB730A3194B48CB67D6202DCA8A97FAE93581F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if (accepts.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___accepts0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_0038;
	}

IL_000e:
	{
		// if (accepts.Contains("application/json", StringComparer.OrdinalIgnoreCase))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___accepts0;
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_3;
		L_3 = StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline(NULL);
		bool L_4;
		L_4 = Enumerable_Contains_TisString_t_m47DB730A3194B48CB67D6202DCA8A97FAE93581F((RuntimeObject*)L_2, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, L_3, Enumerable_Contains_TisString_t_m47DB730A3194B48CB67D6202DCA8A97FAE93581F_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return "application/json";
		V_1 = _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
		goto IL_0038;
	}

IL_002a:
	{
		// return string.Join(",", accepts);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___accepts0;
		String_t* L_7;
		L_7 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_6, NULL);
		V_1 = L_7;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Unity.Services.Authentication.Shared.ApiUtils::IsJsonMime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiUtils_IsJsonMime_m1A973694028C4217B53A545CD77D01D794A3805F (String_t* ___mime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570DE56D596D729C7148156364A55D4AB062C8A0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (string.IsNullOrWhiteSpace(mime)) return false;
		String_t* L_0 = ___mime0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (string.IsNullOrWhiteSpace(mime)) return false;
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_000f:
	{
		// return JsonRegex.IsMatch(mime) || mime.Equals("application/json-patch+json");
		il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = ((ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_StaticFields*)il2cpp_codegen_static_fields_for(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var))->___JsonRegex_0;
		String_t* L_4 = ___mime0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___mime0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, _stringLiteral570DE56D596D729C7148156364A55D4AB062C8A0, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 1;
	}

IL_002a:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Unity.Services.Authentication.Shared.ApiUtils::HasEnumMemberAttrValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiUtils_HasEnumMemberAttrValue_m685B69501DF3CE90C84537D67BA68E706D7EE607 (RuntimeObject* ___enumVal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_1 = NULL;
	EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	String_t* G_B4_0 = NULL;
	Type_t* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Type_t* G_B3_1 = NULL;
	MemberInfo_t* G_B6_0 = NULL;
	MemberInfo_t* G_B5_0 = NULL;
	EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* G_B7_0 = NULL;
	{
		// if (enumVal == null)
		RuntimeObject* L_0 = ___enumVal0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(enumVal));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FE89EC3ED7E7902EA16003699DE0CDE1D977171)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiUtils_HasEnumMemberAttrValue_m685B69501DF3CE90C84537D67BA68E706D7EE607_RuntimeMethod_var)));
	}

IL_0014:
	{
		// var enumType = enumVal.GetType();
		RuntimeObject* L_3 = ___enumVal0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		V_0 = L_4;
		// var memInfo = enumType.GetMember(enumVal.ToString() ?? throw new InvalidOperationException());
		Type_t* L_5 = V_0;
		RuntimeObject* L_6 = ___enumVal0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_5;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_5;
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiUtils_HasEnumMemberAttrValue_m685B69501DF3CE90C84537D67BA68E706D7EE607_RuntimeMethod_var)));
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_10;
		L_10 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(G_B4_1, G_B4_0, NULL);
		V_1 = L_10;
		// var attr = memInfo.FirstOrDefault()?.GetCustomAttributes(false).OfType<EnumMemberAttribute>().FirstOrDefault();
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_11 = V_1;
		MemberInfo_t* L_12;
		L_12 = Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818((RuntimeObject*)L_11, Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818_RuntimeMethod_var);
		MemberInfo_t* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_003f;
		}
	}
	{
		G_B7_0 = ((EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F*)(NULL));
		goto IL_004f;
	}

IL_003f:
	{
		NullCheck(G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, G_B6_0, (bool)0);
		RuntimeObject* L_15;
		L_15 = Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1((RuntimeObject*)L_14, Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1_RuntimeMethod_var);
		EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* L_16;
		L_16 = Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743(L_15, Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743_RuntimeMethod_var);
		G_B7_0 = L_16;
	}

IL_004f:
	{
		V_2 = G_B7_0;
		// if (attr != null) return true;
		EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* L_17 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		// if (attr != null) return true;
		V_5 = (bool)1;
		goto IL_0064;
	}

IL_005f:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		bool L_19 = V_5;
		return L_19;
	}
}
// System.String Unity.Services.Authentication.Shared.ApiUtils::GetEnumMemberAttrValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUtils_GetEnumMemberAttrValue_m75B6DE9D47241BD570561A93C4E36EA0416BB95E (RuntimeObject* ___enumVal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_1 = NULL;
	EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	String_t* G_B4_0 = NULL;
	Type_t* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Type_t* G_B3_1 = NULL;
	MemberInfo_t* G_B6_0 = NULL;
	MemberInfo_t* G_B5_0 = NULL;
	EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* G_B7_0 = NULL;
	{
		// if (enumVal == null)
		RuntimeObject* L_0 = ___enumVal0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(enumVal));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FE89EC3ED7E7902EA16003699DE0CDE1D977171)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiUtils_GetEnumMemberAttrValue_m75B6DE9D47241BD570561A93C4E36EA0416BB95E_RuntimeMethod_var)));
	}

IL_0014:
	{
		// var enumType = enumVal.GetType();
		RuntimeObject* L_3 = ___enumVal0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		V_0 = L_4;
		// var memInfo = enumType.GetMember(enumVal.ToString() ?? throw new InvalidOperationException());
		Type_t* L_5 = V_0;
		RuntimeObject* L_6 = ___enumVal0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_5;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_5;
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiUtils_GetEnumMemberAttrValue_m75B6DE9D47241BD570561A93C4E36EA0416BB95E_RuntimeMethod_var)));
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_10;
		L_10 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(G_B4_1, G_B4_0, NULL);
		V_1 = L_10;
		// var attr = memInfo.FirstOrDefault()?.GetCustomAttributes(false).OfType<EnumMemberAttribute>().FirstOrDefault();
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_11 = V_1;
		MemberInfo_t* L_12;
		L_12 = Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818((RuntimeObject*)L_11, Enumerable_FirstOrDefault_TisMemberInfo_t_mFC74DED9B2A88F62AD2AB6BFBC5D790FAE376818_RuntimeMethod_var);
		MemberInfo_t* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_003f;
		}
	}
	{
		G_B7_0 = ((EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F*)(NULL));
		goto IL_004f;
	}

IL_003f:
	{
		NullCheck(G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, G_B6_0, (bool)0);
		RuntimeObject* L_15;
		L_15 = Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1((RuntimeObject*)L_14, Enumerable_OfType_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m99BCBFC908708597137BACFB4C77A7686AECBEF1_RuntimeMethod_var);
		EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* L_16;
		L_16 = Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743(L_15, Enumerable_FirstOrDefault_TisEnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F_m06B8DD93D9E829D4F423E8A8B4FA3A73EDA80743_RuntimeMethod_var);
		G_B7_0 = L_16;
	}

IL_004f:
	{
		V_2 = G_B7_0;
		// if (attr != null)
		EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* L_17 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0065;
		}
	}
	{
		// return attr.Value;
		EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = EnumMemberAttribute_get_Value_mB41126B613B9FD1CD8A05D08FCEC4B6663864BE9_inline(L_19, NULL);
		V_5 = L_20;
		goto IL_006a;
	}

IL_0065:
	{
		// return null;
		V_5 = (String_t*)NULL;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		String_t* L_21 = V_5;
		return L_21;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUtils__ctor_m0B7D18CD58D0FB9AF44BF36F973A40EB40CB4A47 (ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.Shared.ApiUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUtils__cctor_m03BE50F7B2B241F2CD018C16B76F8E7EE44862E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29A3B3107F4157B33E42EC2CCE1873928C3B5118);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Regex JsonRegex = new Regex("(?i)^(application/json|[^;/ \t]+/[^;/ \t]+[+]json)[ \t]*(;.*)?$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral29A3B3107F4157B33E42EC2CCE1873928C3B5118, NULL);
		((ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_StaticFields*)il2cpp_codegen_static_fields_for(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var))->___JsonRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_StaticFields*)il2cpp_codegen_static_fields_for(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var))->___JsonRegex_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.Shared.OpenAPIDateConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenAPIDateConverter__ctor_m0BC75A039126DA48EA00B60C8B24F04EC4CD50A2 (OpenAPIDateConverter_t9F8E729C74401A523E3381638C3124D443ABB9D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OpenAPIDateConverter()
		IsoDateTimeConverter__ctor_m826994A815114F0A06F4788BEAF6A1EE2AFD0432(__this, NULL);
		// DateTimeFormat = "yyyy-MM-dd";
		IsoDateTimeConverter_set_DateTimeFormat_mE422F40170E5CDE98FE7AE5DB543122D9D7AA4D1(__this, _stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Authentication.Shared.IApiClient Unity.Services.Authentication.Generated.PlayerNamesApi::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerNamesApi_get_Client_mC71FA0206EB7FD0FAD365D49E567535475C17437 (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) 
{
	{
		// public IApiClient Client { get; }
		RuntimeObject* L_0 = __this->___U3CClientU3Ek__BackingField_0;
		return L_0;
	}
}
// Unity.Services.Authentication.Shared.IApiConfiguration Unity.Services.Authentication.Generated.PlayerNamesApi::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) 
{
	{
		// public IApiConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->___U3CConfigurationU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi::.ctor(Unity.Services.Authentication.Shared.IApiClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNamesApi__ctor_mC3521B39910F5C9BD09D5392917E2F1C173A2559 (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, RuntimeObject* ___apiClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1992C4944CFCBCEDF8A8D48E9D2420F9FDB2D84A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public PlayerNamesApi(IApiClient apiClient)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (apiClient == null) throw new ArgumentNullException("apiClient");
		RuntimeObject* L_0 = ___apiClient0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (apiClient == null) throw new ArgumentNullException("apiClient");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE85391D4D5A6C03D58F54D2DB2AA605F1DCF8FBE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayerNamesApi__ctor_mC3521B39910F5C9BD09D5392917E2F1C173A2559_RuntimeMethod_var)));
	}

IL_001b:
	{
		// this.Client = apiClient;
		RuntimeObject* L_3 = ___apiClient0;
		__this->___U3CClientU3Ek__BackingField_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_0), (void*)L_3);
		// this.Configuration = new ApiConfiguration()
		// {
		//     BasePath = "https://social.services.api.unity.com/v1"
		// };
		ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E* L_4 = (ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E*)il2cpp_codegen_object_new(ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ApiConfiguration__ctor_mD0765A0047517478AA8A11CD99F9771DEB201DDD(L_4, NULL);
		ApiConfiguration_tE85131E1E2B26651693E36FA790122EC1654AC8E* L_5 = L_4;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Unity.Services.Authentication.Shared.ApiConfiguration::set_BasePath(System.String) */, L_5, _stringLiteral1992C4944CFCBCEDF8A8D48E9D2420F9FDB2D84A);
		__this->___U3CConfigurationU3Ek__BackingField_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigurationU3Ek__BackingField_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi::.ctor(Unity.Services.Authentication.Shared.IApiClient,Unity.Services.Authentication.Shared.IApiConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerNamesApi__ctor_m6A47B018F51DBB7A7E44B67D3270780D4506400C (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, RuntimeObject* ___apiClient0, RuntimeObject* ___apiConfiguration1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// public PlayerNamesApi(IApiClient apiClient, IApiConfiguration apiConfiguration)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (apiClient == null) throw new ArgumentNullException("apiClient");
		RuntimeObject* L_0 = ___apiClient0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (apiClient == null) throw new ArgumentNullException("apiClient");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE85391D4D5A6C03D58F54D2DB2AA605F1DCF8FBE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayerNamesApi__ctor_m6A47B018F51DBB7A7E44B67D3270780D4506400C_RuntimeMethod_var)));
	}

IL_001b:
	{
		// if (apiConfiguration == null) throw new ArgumentNullException("apiConfiguration");
		RuntimeObject* L_3 = ___apiConfiguration1;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// if (apiConfiguration == null) throw new ArgumentNullException("apiConfiguration");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF2ECF8DAACA0A88470C174A4DD8D6E606EE52992)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayerNamesApi__ctor_m6A47B018F51DBB7A7E44B67D3270780D4506400C_RuntimeMethod_var)));
	}

IL_002e:
	{
		// this.Client = apiClient;
		RuntimeObject* L_6 = ___apiClient0;
		__this->___U3CClientU3Ek__BackingField_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_0), (void*)L_6);
		// this.Configuration = apiConfiguration;
		RuntimeObject* L_7 = ___apiConfiguration1;
		__this->___U3CConfigurationU3Ek__BackingField_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigurationU3Ek__BackingField_1), (void*)L_7);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.Generated.PlayerNamesApi::GetBasePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerNamesApi_GetBasePath_m5E84AD1EAD82778599AC5C871A3B20376BEE6131 (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.Configuration.BasePath;
		RuntimeObject* L_0;
		L_0 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_BasePath() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>> Unity.Services.Authentication.Generated.PlayerNamesApi::GetNameAsync(System.String,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* PlayerNamesApi_GetNameAsync_m5A13397E74853CD866D91CE0671EBCBD8ED75849 (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, String_t* ___playerId0, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___autoGenerate1, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___showMetadata2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m5709A8675E23D5C181A3D2F6A13E1BCDFCAB337C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* V_0 = NULL;
	{
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_0 = (U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211*)il2cpp_codegen_object_new(U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetNameAsyncU3Ed__9__ctor_m830A6522B5ED4177463CEFF147ABA0C3E71B1CA9(L_0, NULL);
		V_0 = L_0;
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D(AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_6), (void*)__this);
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_4 = V_0;
		String_t* L_5 = ___playerId0;
		NullCheck(L_4);
		L_4->___playerId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___playerId_2), (void*)L_5);
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_6 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_7 = ___autoGenerate1;
		NullCheck(L_6);
		L_6->___autoGenerate_3 = L_7;
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_8 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9 = ___showMetadata2;
		NullCheck(L_8);
		L_8->___showMetadata_4 = L_9;
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_10 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___cancellationToken3;
		NullCheck(L_10);
		L_10->___cancellationToken_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->___cancellationToken_5))->____source_0), (void*)NULL);
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_12 = V_0;
		NullCheck(L_12);
		L_12->___U3CU3E1__state_0 = (-1);
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_13 = V_0;
		NullCheck(L_13);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_14 = (&L_13->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m5709A8675E23D5C181A3D2F6A13E1BCDFCAB337C(L_14, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m5709A8675E23D5C181A3D2F6A13E1BCDFCAB337C_RuntimeMethod_var);
		U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* L_15 = V_0;
		NullCheck(L_15);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_16 = (&L_15->___U3CU3Et__builder_1);
		Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* L_17;
		L_17 = AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F(L_16, AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F_RuntimeMethod_var);
		return L_17;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.Shared.ApiResponse`1<Unity.Services.Authentication.Generated.Player>> Unity.Services.Authentication.Generated.PlayerNamesApi::UpdateNameAsync(System.String,Unity.Services.Authentication.Generated.UpdateNameRequest,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* PlayerNamesApi_UpdateNameAsync_m5EDA12920878A81B81E44311ED7A9F2D77C5227A (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, String_t* ___playerId0, UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* ___updateNameRequest1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mE2E714B8F456B7866265EE0D631F2BF19E654F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* V_0 = NULL;
	{
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_0 = (U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B*)il2cpp_codegen_object_new(U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateNameAsyncU3Ed__10__ctor_m0D5487EEFD91E552B5ECCDE0A5A53F148A9A5609(L_0, NULL);
		V_0 = L_0;
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D(AsyncTaskMethodBuilder_1_Create_mC5167678BF9123A328E9F1821F85C3144562556D_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_5), (void*)__this);
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_4 = V_0;
		String_t* L_5 = ___playerId0;
		NullCheck(L_4);
		L_4->___playerId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___playerId_2), (void*)L_5);
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_6 = V_0;
		UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* L_7 = ___updateNameRequest1;
		NullCheck(L_6);
		L_6->___updateNameRequest_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___updateNameRequest_3), (void*)L_7);
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_8 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___cancellationToken2;
		NullCheck(L_8);
		L_8->___cancellationToken_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_8->___cancellationToken_4))->____source_0), (void*)NULL);
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_10 = V_0;
		NullCheck(L_10);
		L_10->___U3CU3E1__state_0 = (-1);
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_12 = (&L_11->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mE2E714B8F456B7866265EE0D631F2BF19E654F5F(L_12, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mE2E714B8F456B7866265EE0D631F2BF19E654F5F_RuntimeMethod_var);
		U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* L_13 = V_0;
		NullCheck(L_13);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_14 = (&L_13->___U3CU3Et__builder_1);
		Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* L_15;
		L_15 = AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F(L_14, AsyncTaskMethodBuilder_1_get_Task_m894FF36492E408808E639DFD844AC12AA1A7DF8F_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameAsyncU3Ed__9__ctor_m830A6522B5ED4177463CEFF147ABA0C3E71B1CA9 (U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameAsyncU3Ed__9_MoveNext_m32AD7EDF4657AC7553B2AFCB480C04410A777355 (U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m3A542B3003BD058E93280C895CC5B692F741EC88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IApiClient_GetAsync_TisPlayer_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA_m20D379185946C86BCA56F8FE953E475B0B80858F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16ED25D43E6B8BB4EC81719E7598003A0A43915F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39D59F14072F59EC06BEDF3E1392549CC7C43E9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5612DBF2F2056635EE8F724B44E649D5F914CB19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586D7C2C88363797FB7BCA6CFEC2220EB425C013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA461BC136C1214EAE9290A8413EDCD39030C910E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* V_9 = NULL;
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_0278_1;
		}

IL_0011_1:
		{
			// if (playerId == null)
			String_t* L_2 = __this->___playerId_2;
			V_2 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_002d_1;
			}
		}
		{
			// throw new ApiException(ApiExceptionType.InvalidParameters, "Missing required parameter 'playerId' when calling PlayerNamesApi->GetName");
			ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* L_4 = (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			ApiException__ctor_m8613EA62B65E8A7792588C837DD66FAEA80A07F2(L_4, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BD8BA1A6907BE5DD0C5B778437EFBBBF0838518)), (RuntimeObject*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetNameAsyncU3Ed__9_MoveNext_m32AD7EDF4657AC7553B2AFCB480C04410A777355_RuntimeMethod_var)));
		}

IL_002d_1:
		{
			// ApiRequestOptions localRequestOptions = new ApiRequestOptions();
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_5 = (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)il2cpp_codegen_object_new(ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			ApiRequestOptions__ctor_m5EA6E302AC08BC87D183EA5FB5F67604BC6A94F4(L_5, NULL);
			__this->___U3ClocalRequestOptionsU3E5__1_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalRequestOptionsU3E5__1_7), (void*)L_5);
			// string[] _contentTypes = new string[] {
			// };
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
			__this->___U3C_contentTypesU3E5__2_8 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_contentTypesU3E5__2_8), (void*)L_6);
			// string[] _accepts = new string[] {
			//     "application/json",
			//     "application/problem+json"
			// };
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, _stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
			__this->___U3C_acceptsU3E5__3_9 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_acceptsU3E5__3_9), (void*)L_9);
			// var localContentType = ApiUtils.SelectHeaderContentType(_contentTypes);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___U3C_contentTypesU3E5__2_8;
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			String_t* L_11;
			L_11 = ApiUtils_SelectHeaderContentType_mF7C16C7668E4ADA3416AA750126D23B64D19C905(L_10, NULL);
			__this->___U3ClocalContentTypeU3E5__4_10 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalContentTypeU3E5__4_10), (void*)L_11);
			// if (localContentType != null)
			String_t* L_12 = __this->___U3ClocalContentTypeU3E5__4_10;
			V_3 = (bool)((!(((RuntimeObject*)(String_t*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_13 = V_3;
			if (!L_13)
			{
				goto IL_009c_1;
			}
		}
		{
			// localRequestOptions.HeaderParameters.Add("Content-Type", localContentType);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_14 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_14);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_15;
			L_15 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_14, NULL);
			String_t* L_16 = __this->___U3ClocalContentTypeU3E5__4_10;
			NullCheck(L_15);
			Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_15, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_16, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		}

IL_009c_1:
		{
			// var localAccept = ApiUtils.SelectHeaderAccept(_accepts);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___U3C_acceptsU3E5__3_9;
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			String_t* L_18;
			L_18 = ApiUtils_SelectHeaderAccept_mEEF0AB9C8A31C2EEE285A7B8E6A0DBF9577790B6(L_17, NULL);
			__this->___U3ClocalAcceptU3E5__5_11 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalAcceptU3E5__5_11), (void*)L_18);
			// if (localAccept != null)
			String_t* L_19 = __this->___U3ClocalAcceptU3E5__5_11;
			V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_19) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_20 = V_4;
			if (!L_20)
			{
				goto IL_00da_1;
			}
		}
		{
			// localRequestOptions.HeaderParameters.Add("Accept", localAccept);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_21 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_21);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_22;
			L_22 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_21, NULL);
			String_t* L_23 = __this->___U3ClocalAcceptU3E5__5_11;
			NullCheck(L_22);
			Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_22, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, L_23, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		}

IL_00da_1:
		{
			// localRequestOptions.PathParameters.Add("playerId", ApiUtils.ParameterToString(Configuration, playerId)); // path parameter
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_24 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_24);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25;
			L_25 = ApiRequestOptions_get_PathParameters_m751BD01D7CC6653A0FF5F30CC7F0B02DA0EC9386_inline(L_24, NULL);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_26 = __this->___U3CU3E4__this_6;
			NullCheck(L_26);
			RuntimeObject* L_27;
			L_27 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_26, NULL);
			String_t* L_28 = __this->___playerId_2;
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			String_t* L_29;
			L_29 = ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618(L_27, L_28, NULL);
			NullCheck(L_25);
			Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteral5612DBF2F2056635EE8F724B44E649D5F914CB19, L_29, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
			// if (autoGenerate != null)
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_30 = (&__this->___autoGenerate_3);
			bool L_31;
			L_31 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline(L_30, Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
			V_5 = L_31;
			bool L_32 = V_5;
			if (!L_32)
			{
				goto IL_014f_1;
			}
		}
		{
			// localRequestOptions.QueryParameters.Add(ApiUtils.ParameterToMultiMap(Configuration, "", "autoGenerate", autoGenerate));
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_33 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_33);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_34;
			L_34 = ApiRequestOptions_get_QueryParameters_m8C131BD0B1D6DAE86F3B976D825E6228A4CFEEE8_inline(L_33, NULL);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_35 = __this->___U3CU3E4__this_6;
			NullCheck(L_35);
			RuntimeObject* L_36;
			L_36 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_35, NULL);
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_37 = __this->___autoGenerate_3;
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_38 = L_37;
			RuntimeObject* L_39 = Box(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var, &L_38);
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_40;
			L_40 = ApiUtils_ParameterToMultiMap_mA5FF4F2FE41AD40764B0568ED0D2E3129F6DD0B6(L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteral39D59F14072F59EC06BEDF3E1392549CC7C43E9C, L_39, NULL);
			NullCheck(L_34);
			Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF(L_34, L_40, Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF_RuntimeMethod_var);
		}

IL_014f_1:
		{
			// if (showMetadata != null)
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_41 = (&__this->___showMetadata_4);
			bool L_42;
			L_42 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline(L_41, Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
			V_6 = L_42;
			bool L_43 = V_6;
			if (!L_43)
			{
				goto IL_0198_1;
			}
		}
		{
			// localRequestOptions.QueryParameters.Add(ApiUtils.ParameterToMultiMap(Configuration, "", "showMetadata", showMetadata));
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_44 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_44);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_45;
			L_45 = ApiRequestOptions_get_QueryParameters_m8C131BD0B1D6DAE86F3B976D825E6228A4CFEEE8_inline(L_44, NULL);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_46 = __this->___U3CU3E4__this_6;
			NullCheck(L_46);
			RuntimeObject* L_47;
			L_47 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_46, NULL);
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_48 = __this->___showMetadata_4;
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_49 = L_48;
			RuntimeObject* L_50 = Box(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_il2cpp_TypeInfo_var, &L_49);
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_51;
			L_51 = ApiUtils_ParameterToMultiMap_mA5FF4F2FE41AD40764B0568ED0D2E3129F6DD0B6(L_47, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteral586D7C2C88363797FB7BCA6CFEC2220EB425C013, L_50, NULL);
			NullCheck(L_45);
			Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF(L_45, L_51, Multimap_2_Add_m81E8B90BD6EBF8E8613F04903EBFD50F53A0F5FF_RuntimeMethod_var);
		}

IL_0198_1:
		{
			// localRequestOptions.Operation = "PlayerNamesApi.GetName";
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_52 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_52);
			ApiRequestOptions_set_Operation_mF6B25F8B3F9385D03C00A8522E3C5BDF131B5FBE_inline(L_52, _stringLiteralA461BC136C1214EAE9290A8413EDCD39030C910E, NULL);
			// if (!string.IsNullOrEmpty(this.Configuration.AccessToken) && !localRequestOptions.HeaderParameters.ContainsKey("Authorization"))
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_53 = __this->___U3CU3E4__this_6;
			NullCheck(L_53);
			RuntimeObject* L_54;
			L_54 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_53, NULL);
			NullCheck(L_54);
			String_t* L_55;
			L_55 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_AccessToken() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_54);
			bool L_56;
			L_56 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_55, NULL);
			if (L_56)
			{
				goto IL_01da_1;
			}
		}
		{
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_57 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_57);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_58;
			L_58 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_57, NULL);
			NullCheck(L_58);
			bool L_59;
			L_59 = Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D(L_58, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D_RuntimeMethod_var);
			G_B17_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
			goto IL_01db_1;
		}

IL_01da_1:
		{
			G_B17_0 = 0;
		}

IL_01db_1:
		{
			V_7 = (bool)G_B17_0;
			bool L_60 = V_7;
			if (!L_60)
			{
				goto IL_0213_1;
			}
		}
		{
			// localRequestOptions.HeaderParameters.Add("Authorization", "Bearer " + this.Configuration.AccessToken);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_61 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			NullCheck(L_61);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_62;
			L_62 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_61, NULL);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_63 = __this->___U3CU3E4__this_6;
			NullCheck(L_63);
			RuntimeObject* L_64;
			L_64 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_63, NULL);
			NullCheck(L_64);
			String_t* L_65;
			L_65 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_AccessToken() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_64);
			String_t* L_66;
			L_66 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_65, NULL);
			NullCheck(L_62);
			Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_62, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_66, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		}

IL_0213_1:
		{
			// return await this.Client.GetAsync<Player>("/names/{playerId}", localRequestOptions, this.Configuration, cancellationToken);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_67 = __this->___U3CU3E4__this_6;
			NullCheck(L_67);
			RuntimeObject* L_68;
			L_68 = PlayerNamesApi_get_Client_mC71FA0206EB7FD0FAD365D49E567535475C17437_inline(L_67, NULL);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_69 = __this->___U3ClocalRequestOptionsU3E5__1_7;
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_70 = __this->___U3CU3E4__this_6;
			NullCheck(L_70);
			RuntimeObject* L_71;
			L_71 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_70, NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_72 = __this->___cancellationToken_5;
			NullCheck(L_68);
			Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* L_73;
			L_73 = GenericInterfaceFuncInvoker4< Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D*, String_t*, ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(IApiClient_GetAsync_TisPlayer_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA_m20D379185946C86BCA56F8FE953E475B0B80858F_RuntimeMethod_var, L_68, _stringLiteral16ED25D43E6B8BB4EC81719E7598003A0A43915F, L_69, L_71, L_72);
			NullCheck(L_73);
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 L_74;
			L_74 = Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66(L_73, Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66_RuntimeMethod_var);
			V_8 = L_74;
			bool L_75;
			L_75 = TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7((&V_8), TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_0295_1;
			}
		}
		{
			int32_t L_76 = 0;
			V_0 = L_76;
			__this->___U3CU3E1__state_0 = L_76;
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 L_77 = V_8;
			__this->___U3CU3Eu__1_13 = L_77;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_13))->___m_task_0), (void*)NULL);
			V_9 = __this;
			AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_78 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m3A542B3003BD058E93280C895CC5B692F741EC88(L_78, (&V_8), (&V_9), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211_m3A542B3003BD058E93280C895CC5B692F741EC88_RuntimeMethod_var);
			goto IL_0320;
		}

IL_0278_1:
		{
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 L_79 = __this->___U3CU3Eu__1_13;
			V_8 = L_79;
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8* L_80 = (&__this->___U3CU3Eu__1_13);
			il2cpp_codegen_initobj(L_80, sizeof(TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8));
			int32_t L_81 = (-1);
			V_0 = L_81;
			__this->___U3CU3E1__state_0 = L_81;
		}

IL_0295_1:
		{
			ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* L_82;
			L_82 = TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48((&V_8), TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48_RuntimeMethod_var);
			__this->___U3CU3Es__6_12 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_12), (void*)L_82);
			ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* L_83 = __this->___U3CU3Es__6_12;
			V_1 = L_83;
			goto IL_02e8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02ab;
		}
		throw e;
	}

CATCH_02ab:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ClocalRequestOptionsU3E5__1_7 = (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalRequestOptionsU3E5__1_7), (void*)(ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL);
		__this->___U3C_contentTypesU3E5__2_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_contentTypesU3E5__2_8), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3C_acceptsU3E5__3_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_acceptsU3E5__3_9), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3ClocalContentTypeU3E5__4_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalContentTypeU3E5__4_10), (void*)(String_t*)NULL);
		__this->___U3ClocalAcceptU3E5__5_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalAcceptU3E5__5_11), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_84 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_85 = V_10;
		AsyncTaskMethodBuilder_1_SetException_m75C45CE0278D487EE52871732D54700F82F73160(L_84, L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m75C45CE0278D487EE52871732D54700F82F73160_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0320;
	}// end catch (depth: 1)

IL_02e8:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ClocalRequestOptionsU3E5__1_7 = (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalRequestOptionsU3E5__1_7), (void*)(ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL);
		__this->___U3C_contentTypesU3E5__2_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_contentTypesU3E5__2_8), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3C_acceptsU3E5__3_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_acceptsU3E5__3_9), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3ClocalContentTypeU3E5__4_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalContentTypeU3E5__4_10), (void*)(String_t*)NULL);
		__this->___U3ClocalAcceptU3E5__5_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalAcceptU3E5__5_11), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_86 = (&__this->___U3CU3Et__builder_1);
		ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* L_87 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631(L_86, L_87, AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631_RuntimeMethod_var);
	}

IL_0320:
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<GetNameAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameAsyncU3Ed__9_SetStateMachine_mF540258C99A1327479B5BB70FCA15DAB5597ED33 (U3CGetNameAsyncU3Ed__9_t0893F8E4AC7669A7DB80C8F30FE5138D9A3D8211* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateNameAsyncU3Ed__10__ctor_m0D5487EEFD91E552B5ECCDE0A5A53F148A9A5609 (U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateNameAsyncU3Ed__10_MoveNext_m2C3EF838C1C29CFEAB55356F6E73D0A519554C75 (U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mCA2E8E5B4F14B488FF6380D2ED2791D20D4420EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IApiClient_PostAsync_TisPlayer_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA_m585A713E3E723ECB6510FB8914CD43BAF4D4CA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16ED25D43E6B8BB4EC81719E7598003A0A43915F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5612DBF2F2056635EE8F724B44E649D5F914CB19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9239F59B9C99D310EB8BBEA02B5CBB15E73CB22);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* V_8 = NULL;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_021d_1;
		}

IL_0011_1:
		{
			// if (playerId == null)
			String_t* L_2 = __this->___playerId_2;
			V_2 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_002d_1;
			}
		}
		{
			// throw new ApiException(ApiExceptionType.InvalidParameters, "Missing required parameter 'playerId' when calling PlayerNamesApi->UpdateName");
			ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* L_4 = (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			ApiException__ctor_m8613EA62B65E8A7792588C837DD66FAEA80A07F2(L_4, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3DD5600C78E630DEA83353A8B5E6F2AC43C968A)), (RuntimeObject*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateNameAsyncU3Ed__10_MoveNext_m2C3EF838C1C29CFEAB55356F6E73D0A519554C75_RuntimeMethod_var)));
		}

IL_002d_1:
		{
			// if (updateNameRequest == null)
			UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* L_5 = __this->___updateNameRequest_3;
			V_3 = (bool)((((RuntimeObject*)(UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0048_1;
			}
		}
		{
			// throw new ApiException(ApiExceptionType.InvalidParameters, "Missing required parameter 'updateNameRequest' when calling PlayerNamesApi->UpdateName");
			ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* L_7 = (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B_il2cpp_TypeInfo_var)));
			NullCheck(L_7);
			ApiException__ctor_m8613EA62B65E8A7792588C837DD66FAEA80A07F2(L_7, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1CFDF637E4057BD8B5FA1F345A7964A79D6F3E71)), (RuntimeObject*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateNameAsyncU3Ed__10_MoveNext_m2C3EF838C1C29CFEAB55356F6E73D0A519554C75_RuntimeMethod_var)));
		}

IL_0048_1:
		{
			// ApiRequestOptions localRequestOptions = new ApiRequestOptions();
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_8 = (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)il2cpp_codegen_object_new(ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ApiRequestOptions__ctor_m5EA6E302AC08BC87D183EA5FB5F67604BC6A94F4(L_8, NULL);
			__this->___U3ClocalRequestOptionsU3E5__1_6 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalRequestOptionsU3E5__1_6), (void*)L_8);
			// string[] _contentTypes = new string[] {
			//     "application/json"
			// };
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			__this->___U3C_contentTypesU3E5__2_7 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_contentTypesU3E5__2_7), (void*)L_10);
			// string[] _accepts = new string[] {
			//     "application/json",
			//     "application/problem+json"
			// };
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, _stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3FF5838922E4DC9DD811798F02736FB74F36EF3E);
			__this->___U3C_acceptsU3E5__3_8 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_acceptsU3E5__3_8), (void*)L_13);
			// var localContentType = ApiUtils.SelectHeaderContentType(_contentTypes);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->___U3C_contentTypesU3E5__2_7;
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			String_t* L_15;
			L_15 = ApiUtils_SelectHeaderContentType_mF7C16C7668E4ADA3416AA750126D23B64D19C905(L_14, NULL);
			__this->___U3ClocalContentTypeU3E5__4_9 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalContentTypeU3E5__4_9), (void*)L_15);
			// if (localContentType != null)
			String_t* L_16 = __this->___U3ClocalContentTypeU3E5__4_9;
			V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_00c1_1;
			}
		}
		{
			// localRequestOptions.HeaderParameters.Add("Content-Type", localContentType);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_18 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			NullCheck(L_18);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_19;
			L_19 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_18, NULL);
			String_t* L_20 = __this->___U3ClocalContentTypeU3E5__4_9;
			NullCheck(L_19);
			Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_19, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_20, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		}

IL_00c1_1:
		{
			// var localAccept = ApiUtils.SelectHeaderAccept(_accepts);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = __this->___U3C_acceptsU3E5__3_8;
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			String_t* L_22;
			L_22 = ApiUtils_SelectHeaderAccept_mEEF0AB9C8A31C2EEE285A7B8E6A0DBF9577790B6(L_21, NULL);
			__this->___U3ClocalAcceptU3E5__5_10 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalAcceptU3E5__5_10), (void*)L_22);
			// if (localAccept != null)
			String_t* L_23 = __this->___U3ClocalAcceptU3E5__5_10;
			V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_23) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_24 = V_5;
			if (!L_24)
			{
				goto IL_00ff_1;
			}
		}
		{
			// localRequestOptions.HeaderParameters.Add("Accept", localAccept);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_25 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			NullCheck(L_25);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_26;
			L_26 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_25, NULL);
			String_t* L_27 = __this->___U3ClocalAcceptU3E5__5_10;
			NullCheck(L_26);
			Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_26, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, L_27, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		}

IL_00ff_1:
		{
			// localRequestOptions.PathParameters.Add("playerId", ApiUtils.ParameterToString(Configuration, playerId)); // path parameter
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_28 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			NullCheck(L_28);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29;
			L_29 = ApiRequestOptions_get_PathParameters_m751BD01D7CC6653A0FF5F30CC7F0B02DA0EC9386_inline(L_28, NULL);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_30 = __this->___U3CU3E4__this_5;
			NullCheck(L_30);
			RuntimeObject* L_31;
			L_31 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_30, NULL);
			String_t* L_32 = __this->___playerId_2;
			il2cpp_codegen_runtime_class_init_inline(ApiUtils_t8FB4BB3F46AC1795E8353FE0BB12D85AB0E06F99_il2cpp_TypeInfo_var);
			String_t* L_33;
			L_33 = ApiUtils_ParameterToString_m452FC1F26571C7B33B89A63A1AC17D461A876618(L_31, L_32, NULL);
			NullCheck(L_29);
			Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_29, _stringLiteral5612DBF2F2056635EE8F724B44E649D5F914CB19, L_33, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
			// localRequestOptions.Data = updateNameRequest;
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_34 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* L_35 = __this->___updateNameRequest_3;
			NullCheck(L_34);
			ApiRequestOptions_set_Data_m9C0F99493783FD2CDF74A14BFF007E9D73CE4E94_inline(L_34, L_35, NULL);
			// localRequestOptions.Operation = "PlayerNamesApi.UpdateName";
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_36 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			NullCheck(L_36);
			ApiRequestOptions_set_Operation_mF6B25F8B3F9385D03C00A8522E3C5BDF131B5FBE_inline(L_36, _stringLiteralD9239F59B9C99D310EB8BBEA02B5CBB15E73CB22, NULL);
			// if (!string.IsNullOrEmpty(this.Configuration.AccessToken) && !localRequestOptions.HeaderParameters.ContainsKey("Authorization"))
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_37 = __this->___U3CU3E4__this_5;
			NullCheck(L_37);
			RuntimeObject* L_38;
			L_38 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_37, NULL);
			NullCheck(L_38);
			String_t* L_39;
			L_39 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_AccessToken() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_38);
			bool L_40;
			L_40 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_39, NULL);
			if (L_40)
			{
				goto IL_017f_1;
			}
		}
		{
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_41 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			NullCheck(L_41);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_42;
			L_42 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_41, NULL);
			NullCheck(L_42);
			bool L_43;
			L_43 = Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D(L_42, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, Multimap_2_ContainsKey_m34DFD1DED156F2F86800CD99818893CFA6DCFF8D_RuntimeMethod_var);
			G_B15_0 = ((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
			goto IL_0180_1;
		}

IL_017f_1:
		{
			G_B15_0 = 0;
		}

IL_0180_1:
		{
			V_6 = (bool)G_B15_0;
			bool L_44 = V_6;
			if (!L_44)
			{
				goto IL_01b8_1;
			}
		}
		{
			// localRequestOptions.HeaderParameters.Add("Authorization", "Bearer " + this.Configuration.AccessToken);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_45 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			NullCheck(L_45);
			Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_46;
			L_46 = ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline(L_45, NULL);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_47 = __this->___U3CU3E4__this_5;
			NullCheck(L_47);
			RuntimeObject* L_48;
			L_48 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_47, NULL);
			NullCheck(L_48);
			String_t* L_49;
			L_49 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Shared.IApiConfiguration::get_AccessToken() */, IApiConfiguration_t0BA7081D1C258F215870EA0A156B1F8E134DBBB2_il2cpp_TypeInfo_var, L_48);
			String_t* L_50;
			L_50 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_49, NULL);
			NullCheck(L_46);
			Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0(L_46, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_50, Multimap_2_Add_m603881D9636E56EF2CCF4D0975B87080C08BE2E0_RuntimeMethod_var);
		}

IL_01b8_1:
		{
			// return await this.Client.PostAsync<Player>("/names/{playerId}", localRequestOptions, this.Configuration, cancellationToken);
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_51 = __this->___U3CU3E4__this_5;
			NullCheck(L_51);
			RuntimeObject* L_52;
			L_52 = PlayerNamesApi_get_Client_mC71FA0206EB7FD0FAD365D49E567535475C17437_inline(L_51, NULL);
			ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* L_53 = __this->___U3ClocalRequestOptionsU3E5__1_6;
			PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* L_54 = __this->___U3CU3E4__this_5;
			NullCheck(L_54);
			RuntimeObject* L_55;
			L_55 = PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline(L_54, NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_56 = __this->___cancellationToken_4;
			NullCheck(L_52);
			Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D* L_57;
			L_57 = GenericInterfaceFuncInvoker4< Task_1_t9D7475C86F015202B9CB9A62AA9A78F38B6C830D*, String_t*, ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(IApiClient_PostAsync_TisPlayer_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA_m585A713E3E723ECB6510FB8914CD43BAF4D4CA3A_RuntimeMethod_var, L_52, _stringLiteral16ED25D43E6B8BB4EC81719E7598003A0A43915F, L_53, L_55, L_56);
			NullCheck(L_57);
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 L_58;
			L_58 = Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66(L_57, Task_1_GetAwaiter_m91536B1CADCD65DDB787FA2CAA7AFB91FB48AF66_RuntimeMethod_var);
			V_7 = L_58;
			bool L_59;
			L_59 = TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7((&V_7), TaskAwaiter_1_get_IsCompleted_m7F345539A92DEBE65F2B5633C3C859B3CC643BE7_RuntimeMethod_var);
			if (L_59)
			{
				goto IL_023a_1;
			}
		}
		{
			int32_t L_60 = 0;
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 L_61 = V_7;
			__this->___U3CU3Eu__1_12 = L_61;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_12))->___m_task_0), (void*)NULL);
			V_8 = __this;
			AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_62 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mCA2E8E5B4F14B488FF6380D2ED2791D20D4420EA(L_62, (&V_7), (&V_8), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8_TisU3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B_mCA2E8E5B4F14B488FF6380D2ED2791D20D4420EA_RuntimeMethod_var);
			goto IL_02c5;
		}

IL_021d_1:
		{
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8 L_63 = __this->___U3CU3Eu__1_12;
			V_7 = L_63;
			TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8* L_64 = (&__this->___U3CU3Eu__1_12);
			il2cpp_codegen_initobj(L_64, sizeof(TaskAwaiter_1_t5C60E8DACE797033F89C07CAF1353021649F37B8));
			int32_t L_65 = (-1);
			V_0 = L_65;
			__this->___U3CU3E1__state_0 = L_65;
		}

IL_023a_1:
		{
			ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* L_66;
			L_66 = TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48((&V_7), TaskAwaiter_1_GetResult_m8DFDE456608D43226F4ECC682C529E1B10380F48_RuntimeMethod_var);
			__this->___U3CU3Es__6_11 = L_66;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_11), (void*)L_66);
			ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* L_67 = __this->___U3CU3Es__6_11;
			V_1 = L_67;
			goto IL_028d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0250;
		}
		throw e;
	}

CATCH_0250:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ClocalRequestOptionsU3E5__1_6 = (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalRequestOptionsU3E5__1_6), (void*)(ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL);
		__this->___U3C_contentTypesU3E5__2_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_contentTypesU3E5__2_7), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3C_acceptsU3E5__3_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_acceptsU3E5__3_8), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3ClocalContentTypeU3E5__4_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalContentTypeU3E5__4_9), (void*)(String_t*)NULL);
		__this->___U3ClocalAcceptU3E5__5_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalAcceptU3E5__5_10), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_68 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_69 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m75C45CE0278D487EE52871732D54700F82F73160(L_68, L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m75C45CE0278D487EE52871732D54700F82F73160_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02c5;
	}// end catch (depth: 1)

IL_028d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ClocalRequestOptionsU3E5__1_6 = (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalRequestOptionsU3E5__1_6), (void*)(ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9*)NULL);
		__this->___U3C_contentTypesU3E5__2_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_contentTypesU3E5__2_7), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3C_acceptsU3E5__3_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_acceptsU3E5__3_8), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->___U3ClocalContentTypeU3E5__4_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalContentTypeU3E5__4_9), (void*)(String_t*)NULL);
		__this->___U3ClocalAcceptU3E5__5_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClocalAcceptU3E5__5_10), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t230160BEA94425D2187B9042D0CF4307BDE44320* L_70 = (&__this->___U3CU3Et__builder_1);
		ApiResponse_1_tB71FDD8F9D18744F6DFE21C01CE614C408AE7C69* L_71 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631(L_70, L_71, AsyncTaskMethodBuilder_1_SetResult_mF5E00971E383EF809CDB4697A186DD69761AE631_RuntimeMethod_var);
	}

IL_02c5:
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.PlayerNamesApi/<UpdateNameAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateNameAsyncU3Ed__10_SetStateMachine_m3C095CAA4BD5D723FF0FAD7F467E7D33D2AF9B1C (U3CUpdateNameAsyncU3Ed__10_tF71F872307210BBC40878A2FD5144916CCED561B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Authentication.Generated.Detail::get_ErrorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Detail_get_ErrorType_mD9CA98EAEDDF382BDE9368A7B083CC64F9FDEF87 (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorType { get; set; }
		String_t* L_0 = __this->___U3CErrorTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.Detail::set_ErrorType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_set_ErrorType_m9CAA5495DC1F80877CB05811C3D50C236E2CAF62 (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ErrorType { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Authentication.Generated.Detail::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Detail_get_Message_m0EFB620B7FB56055373C852AB3B5CD41E8DC30CD (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.Detail::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_set_Message_mE40A9C78E0D10E1C553EB4A29A60FED86D910602 (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.Detail::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail__ctor_mA23496DF27895D537EE4C37DA035B565C1FF57AF (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___errorType0, String_t* ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// public Detail(string errorType = default(string), string message = default(string))
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (errorType == null)
		String_t* L_0 = ___errorType0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException("errorType is a required property for Detail and cannot be null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79BBF6EBD2AFF54539778FC8AC2FDDEDC0E928E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Detail__ctor_mA23496DF27895D537EE4C37DA035B565C1FF57AF_RuntimeMethod_var)));
	}

IL_001c:
	{
		// this.ErrorType = errorType;
		String_t* L_3 = ___errorType0;
		Detail_set_ErrorType_m9CAA5495DC1F80877CB05811C3D50C236E2CAF62_inline(__this, L_3, NULL);
		// if (message == null)
		String_t* L_4 = ___message1;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// throw new ArgumentNullException("message is a required property for Detail and cannot be null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral711563FB20607527EC0B94A64461FD2CEE28D73C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Detail__ctor_mA23496DF27895D537EE4C37DA035B565C1FF57AF_RuntimeMethod_var)));
	}

IL_0038:
	{
		// this.Message = message;
		String_t* L_7 = ___message1;
		Detail_set_Message_mE40A9C78E0D10E1C553EB4A29A60FED86D910602_inline(__this, L_7, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Services.Authentication.Generated.ErrorStatus::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorStatus_get_Status_m9105A9F5AD2AA40E17B9B75A577A2E8ECDB2D82F (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, const RuntimeMethod* method) 
{
	{
		// public int Status { get; set; }
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Status(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorStatus_set_Status_mCFADC1F24F28ED7E936E2778F4FE4756DEB58D97 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Status { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Unity.Services.Authentication.Generated.ErrorStatus::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorStatus_get_Title_mA4C8064B7E4A88786A06A736BC8AD4398AFDBC59 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorStatus_set_Title_m8AFE10D39C118B50EDE0BA9685023C7327FCCF78 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Authentication.Generated.ErrorStatus::get_Detail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorStatus_get_Detail_m2950DB824A66F762D3ED68ADC5475FDB30C26FEE (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, const RuntimeMethod* method) 
{
	{
		// public string Detail { get; set; }
		String_t* L_0 = __this->___U3CDetailU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Detail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorStatus_set_Detail_mC0716E0869BFF81FE40436B64702F8663926B9B4 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Detail { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDetailU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.Services.Authentication.Generated.ErrorStatus::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ErrorStatus_get_Code_mD5D141B73E6AB27C8D560054915A1E3E31B940C2 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, const RuntimeMethod* method) 
{
	{
		// public int Code { get; set; }
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorStatus_set_Code_mF9E4A74606AEF9FD6569CB161CCD95C7EE4245F7 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Code { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail> Unity.Services.Authentication.Generated.ErrorStatus::get_Details()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* ErrorStatus_get_Details_m82EE7300D1845EEDFDD8F574FCBBB82FDF24E67B (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, const RuntimeMethod* method) 
{
	{
		// public List<Detail> Details { get; set; }
		List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* L_0 = __this->___U3CDetailsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::set_Details(System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorStatus_set_Details_mB5D7E4F22EE5C1FFD6B5068949E0D47BDDB786F6 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Detail> Details { get; set; }
		List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* L_0 = ___value0;
		__this->___U3CDetailsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.ErrorStatus::.ctor(System.Int32,System.String,System.String,System.Int32,System.Collections.Generic.List`1<Unity.Services.Authentication.Generated.Detail>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorStatus__ctor_mA80AA43121C6349DB991DCFAB6C34511378E1100 (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___status0, String_t* ___title1, String_t* ___detail2, int32_t ___code3, List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* ___details4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// public ErrorStatus(int status = default(int), string title = default(string), string detail = default(string), int code = default(int), List<Detail> details = default(List<Detail>))
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Status = status;
		int32_t L_0 = ___status0;
		ErrorStatus_set_Status_mCFADC1F24F28ED7E936E2778F4FE4756DEB58D97_inline(__this, L_0, NULL);
		// if (title == null)
		String_t* L_1 = ___title1;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentNullException("title is a required property for ErrorStatus and cannot be null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD5DE33013731C59C131F9283EA1EDEDD4BA3C3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorStatus__ctor_mA80AA43121C6349DB991DCFAB6C34511378E1100_RuntimeMethod_var)));
	}

IL_0024:
	{
		// this.Title = title;
		String_t* L_4 = ___title1;
		ErrorStatus_set_Title_m8AFE10D39C118B50EDE0BA9685023C7327FCCF78_inline(__this, L_4, NULL);
		// if (detail == null)
		String_t* L_5 = ___detail2;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// throw new ArgumentNullException("detail is a required property for ErrorStatus and cannot be null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7163F6D2AF6F36BA28A60CCDF3092C194360BE75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorStatus__ctor_mA80AA43121C6349DB991DCFAB6C34511378E1100_RuntimeMethod_var)));
	}

IL_0040:
	{
		// this.Detail = detail;
		String_t* L_8 = ___detail2;
		ErrorStatus_set_Detail_mC0716E0869BFF81FE40436B64702F8663926B9B4_inline(__this, L_8, NULL);
		// this.Code = code;
		int32_t L_9 = ___code3;
		ErrorStatus_set_Code_mF9E4A74606AEF9FD6569CB161CCD95C7EE4245F7_inline(__this, L_9, NULL);
		// this.Details = details;
		List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* L_10 = ___details4;
		ErrorStatus_set_Details_mB5D7E4F22EE5C1FFD6B5068949E0D47BDDB786F6_inline(__this, L_10, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Authentication.Generated.Player::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_Id_mF8EF31CD860DACF947A92A367060A4F60D46A4EB (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.Player::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Id_m7B34F85899A22D29B8751359753555EC3581F03B (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Authentication.Generated.Player::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_Name_m4089A880415883C651D745599D3911A472FAD245 (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.Player::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Name_m33F257E68B9AA0AD62B0CD9263F0344B3019981B (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.Services.Authentication.Generated.Player::get_AutoGenerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_get_AutoGenerated_mFED04451917F3604F8953E64440BEF4840C107D0 (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool AutoGenerated { get; set; }
		bool L_0 = __this->___U3CAutoGeneratedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.Player::set_AutoGenerated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_AutoGenerated_m61400194E7C2FBB1D23CEE242E1A55F78356DB80 (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AutoGenerated { get; set; }
		bool L_0 = ___value0;
		__this->___U3CAutoGeneratedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.Player::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m6C4A35BB8399CCFF3A958B00C72011903A1B9640 (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___id0, String_t* ___name1, bool ___autoGenerated2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public Player(string id = default(string), string name = default(string), bool autoGenerated = default(bool))
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (id == null)
		String_t* L_0 = ___id0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException("id is a required property for Player and cannot be null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAEAA4DCC5E824E4A4BE785187E6B2A1FEFF6B47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Player__ctor_m6C4A35BB8399CCFF3A958B00C72011903A1B9640_RuntimeMethod_var)));
	}

IL_001c:
	{
		// this.Id = id;
		String_t* L_3 = ___id0;
		Player_set_Id_m7B34F85899A22D29B8751359753555EC3581F03B_inline(__this, L_3, NULL);
		// this.Name = name;
		String_t* L_4 = ___name1;
		Player_set_Name_m33F257E68B9AA0AD62B0CD9263F0344B3019981B_inline(__this, L_4, NULL);
		// this.AutoGenerated = autoGenerated;
		bool L_5 = ___autoGenerated2;
		Player_set_AutoGenerated_m61400194E7C2FBB1D23CEE242E1A55F78356DB80_inline(__this, L_5, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Authentication.Generated.UpdateNameRequest::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UpdateNameRequest_get_Name_mC504D699B78F6A2801B7BA5F9555E9C68205B424 (UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.Generated.UpdateNameRequest::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateNameRequest_set_Name_mACF219FCC5AC88C7327EACB6CD221E2D2CE2A030 (UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.Generated.UpdateNameRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateNameRequest__ctor_m70CE4F6DA33EB81349CF76FED1E942E887C53A24 (UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public UpdateNameRequest(string name = default(string))
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (name == null)
		String_t* L_0 = ___name0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException("name is a required property for UpdateNameRequest and cannot be null");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61E23188B03F7E146645C4EB717216584FBC4BF8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UpdateNameRequest__ctor_m70CE4F6DA33EB81349CF76FED1E942E887C53A24_RuntimeMethod_var)));
	}

IL_001c:
	{
		// this.Name = name;
		String_t* L_3 = ___name0;
		UpdateNameRequest_set_Name_mACF219FCC5AC88C7327EACB6CD221E2D2CE2A030_inline(__this, L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.Utilities.Compatibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compatibility__ctor_m1B314B7EFD08673EC815F2BC72F56E487C74C1F4 (Compatibility_tFA1E59ED80B83C1E7B88589F69BBA1039539E520* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.Models.Compatibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compatibility__ctor_mF28982837D7B46EB70975131530D994983228708 (Compatibility_tD9AEEA2924AC3C375D9E8712E711C8FDF85AC04E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mDA0BC1E1DAEF0343D94B40B0A0A6328C741850EE (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiException_set_Type_m6632103E498066083D34CE8FC08B1693ECFBC24B_inline (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ApiExceptionType Type { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiException_set_Response_m0CD74A5EF88E695D5592F356CF4EC76CF81A7787_inline (ApiException_t9A0EE74ED1CDED4A89D78DA030DE8771BB2AFD8B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IApiResponse Response { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CResponseU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_PathParameters_m5A27A4A5C73F335CCA8944D6221CF4B6D114AC3B_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> PathParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->___U3CPathParametersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathParametersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_QueryParameters_m44F0DBEA8495726DE17B66977B87572AA2A8A9DA_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> QueryParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = ___value0;
		__this->___U3CQueryParametersU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryParametersU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_HeaderParameters_m927BA51AF752E4E1DC053C5B33CBBE4825D83080_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> HeaderParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = ___value0;
		__this->___U3CHeaderParametersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeaderParametersU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_FormParameters_mF32697C09568970C064F86C8F7EF87F6DC04179C_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> FormParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___value0;
		__this->___U3CFormParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFormParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_FileParameters_mB75B33A63800177EFB0196557F005E029667F47B_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, Stream> FileParameters { get; set; }
		Multimap_2_t3008327CF577F7D07B7C451266079FCE65AB01F1* L_0 = ___value0;
		__this->___U3CFileParametersU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileParametersU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ApiResponse_get_StatusCode_m2228DA21E2C2B93A3D6552E9528BA36326A9209B_inline (ApiResponse_t1D00A0C023CC95A20E9479C8383508832A017E73* __this, const RuntimeMethod* method) 
{
	{
		// public int StatusCode { get; internal set; }
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m4206775241793096770A30CE686D3B342AEDDE6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mB41126B613B9FD1CD8A05D08FCEC4B6663864BE9_inline (EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerNamesApi_get_Configuration_m82EE46ACEB06490183A7A57718903BED5AF7390F_inline (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) 
{
	{
		// public IApiConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->___U3CConfigurationU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiRequestOptions_get_HeaderParameters_m8E1EA97AD4BEFE82E2E967212DD03BBC1A7B99D6_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> HeaderParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = __this->___U3CHeaderParametersU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ApiRequestOptions_get_PathParameters_m751BD01D7CC6653A0FF5F30CC7F0B02DA0EC9386_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> PathParameters { get; set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CPathParametersU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* ApiRequestOptions_get_QueryParameters_m8C131BD0B1D6DAE86F3B976D825E6228A4CFEEE8_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, const RuntimeMethod* method) 
{
	{
		// public Multimap<string, string> QueryParameters { get; set; }
		Multimap_2_t4205CF2526AA6332DD4122A928680ACCAEF165F8* L_0 = __this->___U3CQueryParametersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_Operation_mF6B25F8B3F9385D03C00A8522E3C5BDF131B5FBE_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Operation { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3COperationU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COperationU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayerNamesApi_get_Client_mC71FA0206EB7FD0FAD365D49E567535475C17437_inline (PlayerNamesApi_t6DA934E485FA2F9DB8E40F77C50F9B2C51AB48EA* __this, const RuntimeMethod* method) 
{
	{
		// public IApiClient Client { get; }
		RuntimeObject* L_0 = __this->___U3CClientU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApiRequestOptions_set_Data_m9C0F99493783FD2CDF74A14BFF007E9D73CE4E94_inline (ApiRequestOptions_t104AE9C327E3E43A93478695F5C88BC475D785F9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Data { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Detail_set_ErrorType_m9CAA5495DC1F80877CB05811C3D50C236E2CAF62_inline (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ErrorType { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Detail_set_Message_mE40A9C78E0D10E1C553EB4A29A60FED86D910602_inline (Detail_t18E75E15ED262F676EC543DD8D1FC67794D3F0D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Status_mCFADC1F24F28ED7E936E2778F4FE4756DEB58D97_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Status { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Title_m8AFE10D39C118B50EDE0BA9685023C7327FCCF78_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Detail_mC0716E0869BFF81FE40436B64702F8663926B9B4_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Detail { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDetailU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Code_mF9E4A74606AEF9FD6569CB161CCD95C7EE4245F7_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Code { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorStatus_set_Details_mB5D7E4F22EE5C1FFD6B5068949E0D47BDDB786F6_inline (ErrorStatus_t8B5799284D24C3794B5A2BDCDF2EFC4B71287D9F* __this, List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Detail> Details { get; set; }
		List_1_tB46BC536DBF26B5DF4D3C8B52571866D23822DAF* L_0 = ___value0;
		__this->___U3CDetailsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Id_m7B34F85899A22D29B8751359753555EC3581F03B_inline (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Name_m33F257E68B9AA0AD62B0CD9263F0344B3019981B_inline (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_AutoGenerated_m61400194E7C2FBB1D23CEE242E1A55F78356DB80_inline (Player_t2088B9A5F836E1D44A0663B98F1B47444F4D73AA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AutoGenerated { get; set; }
		bool L_0 = ___value0;
		__this->___U3CAutoGeneratedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateNameRequest_set_Name_mACF219FCC5AC88C7327EACB6CD221E2D2CE2A030_inline (UpdateNameRequest_t82A41C90CE3C9FF5CE2195871A79B3B67983190C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
