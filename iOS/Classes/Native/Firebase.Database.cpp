﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0;
// Firebase.Database.DatabaseError
struct DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E;
// Firebase.Database.DatabaseException
struct DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98;
// Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2
struct U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D;
// Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0
struct U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68;
// Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1
struct U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0;
// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF;
// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96;
// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD;
// Firebase.Database.Internal.InternalListener
struct InternalListener_tE14D48B334C420926F90912BA732706D665DDE86;
// Firebase.Database.Internal.InternalQuery
struct InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64;
// Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1
struct U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA;
// Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0
struct U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE;
// Firebase.Database.Query
struct Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0;
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4;
// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F;
// Firebase.FutureVoid
struct FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450;
// Firebase.Platform.IAuthService
struct IAuthService_t74D1B35815B7A5C7F8E177CDDA45363893D10630;
// Firebase.Platform.IClockService
struct IClockService_tC83BA5CC8925B4FB346FCE5F86220A16991F0354;
// Firebase.Platform.ILoggingService
struct ILoggingService_tF5FCF6BAA373E9C3985AEDEB3297E2953604D873;
// Firebase.Variant
struct Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.InternalListener>[]
struct EntryU5BU5D_tB660F9E096D1073F2794543957DD8554F6F79A84;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Database.FirebaseDatabase>[]
struct EntryU5BU5D_tABBB253883A706A51D23A28646A16C12756FAFEF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct KeyCollection_tA7306EBB98EC6323C3E664AEA2B4F1B740C73E5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Database.FirebaseDatabase>
struct KeyCollection_t90FC2B28AF35445C8A0F53DEF3B3B5C879AA6FBE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t666396E67E50284D48938851873CE562083D67F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct ValueCollection_t07739DC8255F5D099BAA282298F813D3CBAB9071;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Database.FirebaseDatabase>
struct ValueCollection_t18EA2CF38755A8B81DC276252DD29C2C23BF8ECE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t087E572E4674F35454E806EDE6D0179962696A2B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t05505F0229552770940847365A51432798708419;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangeType_t0AB2E1B8DBC8E7BD9A7FDCA9825676B18990C2C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t05505F0229552770940847365A51432798708419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_t3AF3DD1CFE457D2415326E446ADA3C5D9858E40B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral030E8E8F47BFE8D70A7C16D8697DA59A2F780275;
IL2CPP_EXTERN_C String_t* _stringLiteral05A308029DFB0AAD1134F3E4B028519B98D2806B;
IL2CPP_EXTERN_C String_t* _stringLiteral11C5CF62B8C6090DB756C0500E411A8323CC3779;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5EE313D50A7F8AEDF787B5A6C029EF09906C69;
IL2CPP_EXTERN_C String_t* _stringLiteral1E533537ED011AB19AE6747DF8B8F95A9E70CAEE;
IL2CPP_EXTERN_C String_t* _stringLiteral238422C199B1DA9376D6D0B0473BCF5D65AF76E8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9045902981639C78002C9B7703BA483D6E8A24;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2F0E9C4819337D229DC079F7EF5604CC86DD4A;
IL2CPP_EXTERN_C String_t* _stringLiteral43C3C52CE9B7645EFB7341BC689E2D18A56BA7CD;
IL2CPP_EXTERN_C String_t* _stringLiteral46776BD15CB393538C543C3DCA2ED44E055EF79C;
IL2CPP_EXTERN_C String_t* _stringLiteral485C0DB0D97BEE2AD947C0844A4001AA2CC28ED5;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral5444D6F9BD53CC5E722D4CF53859F98787333718;
IL2CPP_EXTERN_C String_t* _stringLiteral55EB6C2DA4A967184A694D66924D58310E7999F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6335EB6522AB2308F001D48967579AD35EB604C0;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB2A5D1FE0A10CB014FC4303709BA72103C7CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral6F8BBE8223234BE7CF068795479D66E39AC47CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral76CD6E2E967192C0E980C24C0FC9B3321836F134;
IL2CPP_EXTERN_C String_t* _stringLiteral82FEB1F87A470BAACEB4953C32A1CC382CCF10AA;
IL2CPP_EXTERN_C String_t* _stringLiteral97A9C310AF2569E6A8B8E7CDB7B5E6BEE1AD5AE8;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E20E5CF769AB0E45EF2C502587A7197C1A1100;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6996996732374A3ECDAC4A654527DD3F9C85C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB553988D3E28D099A271683ADE88E9EDB57EE10F;
IL2CPP_EXTERN_C String_t* _stringLiteralC3EF337D8E93BFC7DCD64FAB1CDA2CC6EC015AEA;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E3D9B1EA59C2C3EA81424DD35283AC917B2D77;
IL2CPP_EXTERN_C String_t* _stringLiteralD2605ACD229B49A682D1AF88108FAC1CEEA6CC52;
IL2CPP_EXTERN_C String_t* _stringLiteralD57FCC10EA477EEAF3AA1F6C08C1F88F27F227A6;
IL2CPP_EXTERN_C String_t* _stringLiteralD68049BB85454C0B8C56FFBB73C45E8ADEE41B21;
IL2CPP_EXTERN_C String_t* _stringLiteralE44BF54C67AB77DFD957EB06F409847FEF4851AF;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CB995CFE0FE3233478F83BE4BB662B2D0F2AFE;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3DA9A389ABD93EE737198EA8C068AEC4BA6B4FD;
IL2CPP_EXTERN_C String_t* _stringLiteralF7368006D9EB8DA53E381FD4C46A859390D39E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAE38FB8D02D5E169BAF4BEBE9B0103A0ECC878;
IL2CPP_EXTERN_C String_t* _stringLiteralFC09D17A4B10AE2EE4172C94F6799A0FC53E7090;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m759A5DF74A2AF4529129D311F5AF5EDB86A731D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mEA3D140450970018B248334386A802632B1BEA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6E160174CC26A476266B3868C6BE2A512A1BC430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDB6F3883AAF8AE156ED6115F45705B0BD2EF7564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C45005434527718C932F8D736F0A4625930F67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE70917DA184B19BEC5BCB383336800AAB0E1B8CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB29F94F114E8243590DE2D876EA3AC7F886BB414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD6043A580B0591AF461C0264F9F0602ECBF72E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m940162064177EBC17FF32AAE4FEFE115CD04E987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_OnAppDisposed_mB135CAC8C0E38B1E55D5A8741D54B25FB5E5BCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_get_DefaultInstance_m355FF6C64EFF9959DAA02A8A069625214897BB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_is_valid_m19A2ADBE37D5270D4295AF92AAC8772B44AA6666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_is_valid_m2D98866E1C761FD07FD539DB0CC1250C1D2793B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m90E967629653356BED65A00D1FF4044F045719A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mADD788F7570BAB2E4AEED79A205DDAF3DD978792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mB3A608C1FAE78AC39EC075E3E0FC738A68EF8B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mD697F10BBF662DDC263BFEAE66B01AAD40D97A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mF4E021ED00C6985EA71021921BC53C8803252127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mB3523B5563CDBE23897EA6384FA195D7DD6861B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ChildChangedEventArgs__ctor_m33D2C8DCE0A607E98AE7E8FB115C9D3A0B67AF3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChildChangedEventArgs__ctor_mA59C2F28CA3F79147DED1929090EB1797D1DD3A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataSnapshot_ToString_mA834A65B3EC9A064F6B6BC5627D134FA1B2098AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError_FromError_m24932C549143AAAD1CB96A89BA0E996B72FA0C5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError_ToString_m57CEE5DEC2AAE164B2A091B2C369B0E67D3466DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError__cctor_m3ABFEEE70CB98796AA4B94A07F5312E6B839A626_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError__ctor_m89752EB5A0F3270EE413B7092F895E14BC1C5418_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseInternalPINVOKE__cctor_m938BC88CE59A89466C0572E0591920023526CD84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseReference_Equals_m65F75624DE84005F0848E2A7523B30012BD771EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_Dispose_m5051E3C49C120229D3A1A76B3A6452A83DA603B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_GetInstance_m6A9A3E05BDE4ABAA5AFF0944FC74B5BBB36D1E5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase__cctor_m80708694CA1A329B4E7B97648CEBDDB5C80CCBA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase__ctor_m272596DCAAA8D5DE9E263004106196D9974A01A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_get_DefaultInstance_m355FF6C64EFF9959DAA02A8A069625214897BB33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_get_RootReference_m5089824E24CB6C8457D8B165B3DABAB6950CD188_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_CreateCppListener_m7ECDBCF3B6E83F97050E05C9194446BE15D800CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_DestroyCppListener_mEF15ECE1BD9802E8A0C137423B6576D56982727A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener__cctor_m89AF63C2E114F49EB31AB021AFF91F4F3CD21D72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener__ctor_mED14F02A05D2A34FD677E20E064AB5ADFB8D3F48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_add_childAddedImpl_mA4A1F860C7694DB476647BE3084D19132B2A3A58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_add_childChangedImpl_mB6C71EF149F1A4D894622AD60B5459BECC2BE885_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_add_childMovedImpl_m96C111E016D64E3D06DCC4C27915EF01FE4735AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_add_childRemovedImpl_mCBC3642D25C906B8244EF93C9C9874C9A273150B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_remove_childAddedImpl_mFED5A807B577AA0387E18A36F259777F50CAA22C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_remove_childChangedImpl_m077F2738D1F4A42EA98EFEC0E8104BF35B34D5C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_remove_childMovedImpl_mEB3C0CF2E9585005C89D203F189F25D896BA4292_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_remove_childRemovedImpl_mBD3F1069F3DE64F2A00AE09971BF6CAEB73ABEA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_Dispose_m2BCE8A58AB12C82E149558224C07F0F685DFC1FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_Dispose_m669628EE80F295E341464EECBD52388B8518550D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_RemoveValueAsync_mD24383A307B5BB0525A6B6376AA67F3320825217_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference__ctor_mC40BD38416FA0F27978FAF657C062B1EC2459D51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_is_valid_m19A2ADBE37D5270D4295AF92AAC8772B44AA6666_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_Dispose_m9005D204282432171C8FA81A5587F2056E957BE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_getCPtr_m8663570B90694D8489CA3A9D6E6068D2B455A90C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_Dispose_m20FB081D5F683F170BA24B9915580A93C3F84B14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_TryGetListener_mE7AAAD5FEF21B5DB9EBAF056BC9B54DE4DE560CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener__cctor_mB00B37F91AB7E2CFBE7B480A9264571D86BF035F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener__ctor_m2B5943677658851E1048BA29B17CB4571AA7C950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_Dispose_m278D841CAD8BE634474CE3BFB900167807CD3145_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_is_valid_m2D98866E1C761FD07FD539DB0CC1250C1D2793B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_CreateCppListener_m2D54D66D507214709C2B8534A3223EB372A5D20B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_DestroyCppListener_m3190D3264D03DC4134B1D721DB12581A2DFA5A99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_TryGetListener_m2754D842670C1BE5B2A1797CACB2AB69EE3B62D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener__cctor_mF7296A1EF84942B94C5BC236D2105D1899E053D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener__ctor_m5D70105CE3A2753202E3CE650EC8CFE3A1125E8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCancelledDelegate_BeginInvoke_m4D9A96E688A3F20E92520A78949C2235A0AC2135_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCancelledDelegate_BeginInvoke_mE743791ED11099B3C968CC843AD33CFBEB68C8BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnChildChangeDelegate_BeginInvoke_m7C9FDCFB564FFA2F7B40C720D50377B3E1A3F5FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnChildRemovedDelegate_BeginInvoke_m7992DCBB81D103B5B55C1A262F53FC01D7015109_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnValueChangedDelegate_BeginInvoke_m4E01654575A5E2F544FBB15ED8FA69DD592F2F82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_mF846D06508877F3F6229D69869C39C7673800147_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mE4DB327C1FFF5C93B6BFEC585112F19068CFAA33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495AFirebase_Database_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mADD788F7570BAB2E4AEED79A205DDAF3DD978792_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mB3A608C1FAE78AC39EC075E3E0FC738A68EF8B66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mD697F10BBF662DDC263BFEAE66B01AAD40D97A8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mF4E021ED00C6985EA71021921BC53C8803252127_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mB3523B5563CDBE23897EA6384FA195D7DD6861B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueChangedEventArgs__ctor_m2C4140EC842002EC835F45A4466C570B82D72AE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueChangedEventArgs__ctor_m3900BACA1264703CD7F6D05E20E2C93DE4E92257_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t62AEC29AF37F29F834C3D8D36B4D1B78C9CD78E8 
{
public:

public:
};


// System.Object


// Firebase.Database.DataSnapshot
struct  DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database_1;

public:
	inline static int32_t get_offset_of_internalSnapshot_0() { return static_cast<int32_t>(offsetof(DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0, ___internalSnapshot_0)); }
	inline InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * get_internalSnapshot_0() const { return ___internalSnapshot_0; }
	inline InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF ** get_address_of_internalSnapshot_0() { return &___internalSnapshot_0; }
	inline void set_internalSnapshot_0(InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * value)
	{
		___internalSnapshot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSnapshot_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0, ___database_1)); }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}
};


// Firebase.Database.DatabaseError
struct  DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_3;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E, ___U3CCodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_2() const { return ___U3CCodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_2() { return &___U3CCodeU3Ek__BackingField_2; }
	inline void set_U3CCodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E, ___U3CMessageU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_3() const { return ___U3CMessageU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_3() { return &___U3CMessageU3Ek__BackingField_3; }
	inline void set_U3CMessageU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetailsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E, ___U3CDetailsU3Ek__BackingField_4)); }
	inline String_t* get_U3CDetailsU3Ek__BackingField_4() const { return ___U3CDetailsU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CDetailsU3Ek__BackingField_4() { return &___U3CDetailsU3Ek__BackingField_4; }
	inline void set_U3CDetailsU3Ek__BackingField_4(String_t* value)
	{
		___U3CDetailsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetailsU3Ek__BackingField_4), (void*)value);
	}
};

struct DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_1;

public:
	inline static int32_t get_offset_of_ErrorReasons_0() { return static_cast<int32_t>(offsetof(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields, ___ErrorReasons_0)); }
	inline RuntimeObject* get_ErrorReasons_0() const { return ___ErrorReasons_0; }
	inline RuntimeObject** get_address_of_ErrorReasons_0() { return &___ErrorReasons_0; }
	inline void set_ErrorReasons_0(RuntimeObject* value)
	{
		___ErrorReasons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorReasons_0), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorCodes_1() { return static_cast<int32_t>(offsetof(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields, ___ErrorCodes_1)); }
	inline RuntimeObject* get_ErrorCodes_1() const { return ___ErrorCodes_1; }
	inline RuntimeObject** get_address_of_ErrorCodes_1() { return &___ErrorCodes_1; }
	inline void set_ErrorCodes_1(RuntimeObject* value)
	{
		___ErrorCodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorCodes_1), (void*)value);
	}
};


// Firebase.Database.FirebaseDatabase
struct  FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___internalDatabase_0;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_1;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___U3CAppU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_internalDatabase_0() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9, ___internalDatabase_0)); }
	inline InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * get_internalDatabase_0() const { return ___internalDatabase_0; }
	inline InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD ** get_address_of_internalDatabase_0() { return &___internalDatabase_0; }
	inline void set_internalDatabase_0(InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * value)
	{
		___internalDatabase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDatabase_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9, ___U3CAppU3Ek__BackingField_2)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_U3CAppU3Ek__BackingField_2() const { return ___U3CAppU3Ek__BackingField_2; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_U3CAppU3Ek__BackingField_2() { return &___U3CAppU3Ek__BackingField_2; }
	inline void set_U3CAppU3Ek__BackingField_2(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___U3CAppU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppU3Ek__BackingField_2), (void*)value);
	}
};

struct FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t05505F0229552770940847365A51432798708419 * ___databases_3;

public:
	inline static int32_t get_offset_of_databases_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields, ___databases_3)); }
	inline Dictionary_2_t05505F0229552770940847365A51432798708419 * get_databases_3() const { return ___databases_3; }
	inline Dictionary_2_t05505F0229552770940847365A51432798708419 ** get_address_of_databases_3() { return &___databases_3; }
	inline void set_databases_3(Dictionary_2_t05505F0229552770940847365A51432798708419 * value)
	{
		___databases_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databases_3), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE
struct  DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E  : public RuntimeObject
{
public:

public:
};

struct DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB * ___swigExceptionHelper_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___applicationDelegate_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___arithmeticDelegate_1;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___divideByZeroDelegate_2;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___indexOutOfRangeDelegate_3;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___invalidCastDelegate_4;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___invalidOperationDelegate_5;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___ioDelegate_6;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___nullReferenceDelegate_7;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___outOfMemoryDelegate_8;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___overflowDelegate_9;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___systemDelegate_10;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentDelegate_11;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentNullDelegate_12;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGPendingException
struct  SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields
{
public:
	// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Database.Internal.InternalListener
struct  InternalListener_tE14D48B334C420926F90912BA732706D665DDE86  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;

public:
	inline static int32_t get_offset_of_uid_2() { return static_cast<int32_t>(offsetof(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86, ___uid_2)); }
	inline int32_t get_uid_2() const { return ___uid_2; }
	inline int32_t* get_address_of_uid_2() { return &___uid_2; }
	inline void set_uid_2(int32_t value)
	{
		___uid_2 = value;
	}
};

struct InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * ___databaseCallbacks_1;

public:
	inline static int32_t get_offset_of_uidGenerator_0() { return static_cast<int32_t>(offsetof(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields, ___uidGenerator_0)); }
	inline int32_t get_uidGenerator_0() const { return ___uidGenerator_0; }
	inline int32_t* get_address_of_uidGenerator_0() { return &___uidGenerator_0; }
	inline void set_uidGenerator_0(int32_t value)
	{
		___uidGenerator_0 = value;
	}

	inline static int32_t get_offset_of_databaseCallbacks_1() { return static_cast<int32_t>(offsetof(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields, ___databaseCallbacks_1)); }
	inline Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * get_databaseCallbacks_1() const { return ___databaseCallbacks_1; }
	inline Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D ** get_address_of_databaseCallbacks_1() { return &___databaseCallbacks_1; }
	inline void set_databaseCallbacks_1(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * value)
	{
		___databaseCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databaseCallbacks_1), (void*)value);
	}
};


// Firebase.Database.Query
struct  Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0, ___internalQuery_0)); }
	inline InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0, ___database_1)); }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0, ___valueListener_2)); }
	inline InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0, ___childListener_3)); }
	inline InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childListener_3), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppPlatform
struct  FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
	}
};


// Firebase.Platform.Services
struct  Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC  : public RuntimeObject
{
public:

public:
};

struct Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IAuthService Firebase.Platform.Services::<Auth>k__BackingField
	RuntimeObject* ___U3CAuthU3Ek__BackingField_1;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_2;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CAuthU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAuthU3Ek__BackingField_1() const { return ___U3CAuthU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAuthU3Ek__BackingField_1() { return &___U3CAuthU3Ek__BackingField_1; }
	inline void set_U3CAuthU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAuthU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CClockU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_2() const { return ___U3CClockU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_2() { return &___U3CClockU3Ek__BackingField_2; }
	inline void set_U3CClockU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CLoggingU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_3() const { return ___U3CLoggingU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_3() { return &___U3CLoggingU3Ek__BackingField_3; }
	inline void set_U3CLoggingU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggingU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct  Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB660F9E096D1073F2794543957DD8554F6F79A84* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA7306EBB98EC6323C3E664AEA2B4F1B740C73E5F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t07739DC8255F5D099BAA282298F813D3CBAB9071 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___entries_1)); }
	inline EntryU5BU5D_tB660F9E096D1073F2794543957DD8554F6F79A84* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB660F9E096D1073F2794543957DD8554F6F79A84** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB660F9E096D1073F2794543957DD8554F6F79A84* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___keys_7)); }
	inline KeyCollection_tA7306EBB98EC6323C3E664AEA2B4F1B740C73E5F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA7306EBB98EC6323C3E664AEA2B4F1B740C73E5F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA7306EBB98EC6323C3E664AEA2B4F1B740C73E5F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ___values_8)); }
	inline ValueCollection_t07739DC8255F5D099BAA282298F813D3CBAB9071 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t07739DC8255F5D099BAA282298F813D3CBAB9071 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t07739DC8255F5D099BAA282298F813D3CBAB9071 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct  Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___entries_1)); }
	inline EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___keys_7)); }
	inline KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___values_8)); }
	inline ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct  Dictionary_2_t05505F0229552770940847365A51432798708419  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABBB253883A706A51D23A28646A16C12756FAFEF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t90FC2B28AF35445C8A0F53DEF3B3B5C879AA6FBE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t18EA2CF38755A8B81DC276252DD29C2C23BF8ECE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___entries_1)); }
	inline EntryU5BU5D_tABBB253883A706A51D23A28646A16C12756FAFEF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABBB253883A706A51D23A28646A16C12756FAFEF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABBB253883A706A51D23A28646A16C12756FAFEF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___keys_7)); }
	inline KeyCollection_t90FC2B28AF35445C8A0F53DEF3B3B5C879AA6FBE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t90FC2B28AF35445C8A0F53DEF3B3B5C879AA6FBE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t90FC2B28AF35445C8A0F53DEF3B3B5C879AA6FBE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ___values_8)); }
	inline ValueCollection_t18EA2CF38755A8B81DC276252DD29C2C23BF8ECE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t18EA2CF38755A8B81DC276252DD29C2C23BF8ECE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t18EA2CF38755A8B81DC276252DD29C2C23BF8ECE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t05505F0229552770940847365A51432798708419, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___entries_1)); }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___keys_7)); }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___values_8)); }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Firebase.Database.ChildChangedEventArgs
struct  ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousChildNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C, ___U3CPreviousChildNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPreviousChildNameU3Ek__BackingField_3() const { return ___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPreviousChildNameU3Ek__BackingField_3() { return &___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline void set_U3CPreviousChildNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPreviousChildNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousChildNameU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Database.DatabaseReference
struct  DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA  : public Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0
{
public:
	// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA, ___internalReference_4)); }
	inline InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseU3Ek__BackingField_5), (void*)value);
	}
};


// Firebase.Database.ValueChangedEventArgs
struct  ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___U3CDatabaseErrorU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Firebase.Database.Internal.ChildChangeType
struct  ChildChangeType_t0AB2E1B8DBC8E7BD9A7FDCA9825676B18990C2C2 
{
public:
	// System.Int32 Firebase.Database.Internal.ChildChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChildChangeType_t0AB2E1B8DBC8E7BD9A7FDCA9825676B18990C2C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Internal.Error
struct  Error_t3AF3DD1CFE457D2415326E446ADA3C5D9858E40B 
{
public:
	// System.Int32 Firebase.Database.Internal.Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_t3AF3DD1CFE457D2415326E446ADA3C5D9858E40B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Internal.InternalChildListener
struct  InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98  : public InternalListener_tE14D48B334C420926F90912BA732706D665DDE86
{
public:
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___childRemovedImpl_11;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___internalQuery_4)); }
	inline InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___database_6)); }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancelledImpl_7() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___cancelledImpl_7)); }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * get_cancelledImpl_7() const { return ___cancelledImpl_7; }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** get_address_of_cancelledImpl_7() { return &___cancelledImpl_7; }
	inline void set_cancelledImpl_7(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * value)
	{
		___cancelledImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelledImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_childAddedImpl_8() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___childAddedImpl_8)); }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * get_childAddedImpl_8() const { return ___childAddedImpl_8; }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** get_address_of_childAddedImpl_8() { return &___childAddedImpl_8; }
	inline void set_childAddedImpl_8(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * value)
	{
		___childAddedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childAddedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_childChangedImpl_9() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___childChangedImpl_9)); }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * get_childChangedImpl_9() const { return ___childChangedImpl_9; }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** get_address_of_childChangedImpl_9() { return &___childChangedImpl_9; }
	inline void set_childChangedImpl_9(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * value)
	{
		___childChangedImpl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childChangedImpl_9), (void*)value);
	}

	inline static int32_t get_offset_of_childMovedImpl_10() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___childMovedImpl_10)); }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * get_childMovedImpl_10() const { return ___childMovedImpl_10; }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** get_address_of_childMovedImpl_10() { return &___childMovedImpl_10; }
	inline void set_childMovedImpl_10(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * value)
	{
		___childMovedImpl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childMovedImpl_10), (void*)value);
	}

	inline static int32_t get_offset_of_childRemovedImpl_11() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98, ___childRemovedImpl_11)); }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * get_childRemovedImpl_11() const { return ___childRemovedImpl_11; }
	inline EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** get_address_of_childRemovedImpl_11() { return &___childRemovedImpl_11; }
	inline void set_childRemovedImpl_11(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * value)
	{
		___childRemovedImpl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childRemovedImpl_11), (void*)value);
	}
};

struct InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields
{
public:
	// Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate Firebase.Database.Internal.InternalChildListener::<>f__mgU24cache0
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___U3CU3Ef__mgU24cache0_12;
	// Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate Firebase.Database.Internal.InternalChildListener::<>f__mgU24cache1
	OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * ___U3CU3Ef__mgU24cache1_13;
	// Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate Firebase.Database.Internal.InternalChildListener::<>f__mgU24cache2
	OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * ___U3CU3Ef__mgU24cache2_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_12() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields, ___U3CU3Ef__mgU24cache0_12)); }
	inline OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * get_U3CU3Ef__mgU24cache0_12() const { return ___U3CU3Ef__mgU24cache0_12; }
	inline OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 ** get_address_of_U3CU3Ef__mgU24cache0_12() { return &___U3CU3Ef__mgU24cache0_12; }
	inline void set_U3CU3Ef__mgU24cache0_12(OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * value)
	{
		___U3CU3Ef__mgU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_13() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields, ___U3CU3Ef__mgU24cache1_13)); }
	inline OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * get_U3CU3Ef__mgU24cache1_13() const { return ___U3CU3Ef__mgU24cache1_13; }
	inline OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D ** get_address_of_U3CU3Ef__mgU24cache1_13() { return &___U3CU3Ef__mgU24cache1_13; }
	inline void set_U3CU3Ef__mgU24cache1_13(OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * value)
	{
		___U3CU3Ef__mgU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_14() { return static_cast<int32_t>(offsetof(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields, ___U3CU3Ef__mgU24cache2_14)); }
	inline OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * get_U3CU3Ef__mgU24cache2_14() const { return ___U3CU3Ef__mgU24cache2_14; }
	inline OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 ** get_address_of_U3CU3Ef__mgU24cache2_14() { return &___U3CU3Ef__mgU24cache2_14; }
	inline void set_U3CU3Ef__mgU24cache2_14(OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * value)
	{
		___U3CU3Ef__mgU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_14), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener_<OnChildRemovedHandler>c__AnonStorey1
struct  U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener_<OnChildRemovedHandler>c__AnonStorey1::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener_<OnChildRemovedHandler>c__AnonStorey1::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.Database.Internal.InternalValueListener
struct  InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64  : public InternalListener_tE14D48B334C420926F90912BA732706D665DDE86
{
public:
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * ___valueChangedImpl_7;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64, ___internalQuery_4)); }
	inline InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64, ___database_6)); }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedImpl_7() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64, ___valueChangedImpl_7)); }
	inline EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * get_valueChangedImpl_7() const { return ___valueChangedImpl_7; }
	inline EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 ** get_address_of_valueChangedImpl_7() { return &___valueChangedImpl_7; }
	inline void set_valueChangedImpl_7(EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * value)
	{
		___valueChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedImpl_7), (void*)value);
	}
};

struct InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields
{
public:
	// Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate Firebase.Database.Internal.InternalValueListener::<>f__mgU24cache0
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___U3CU3Ef__mgU24cache0_8;
	// Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate Firebase.Database.Internal.InternalValueListener::<>f__mgU24cache1
	OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * ___U3CU3Ef__mgU24cache1_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_9), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener_<OnValueChangedHandler>c__AnonStorey0
struct  U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalValueListener_<OnValueChangedHandler>c__AnonStorey0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalValueListener_<OnValueChangedHandler>c__AnonStorey0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.InitResult
struct  InitResult_t0159C076DA44626ECA5EA139DB147F9BFE9AB31F 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_t0159C076DA44626ECA5EA139DB147F9BFE9AB31F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.VariantExtension_KeyOptions
struct  KeyOptions_t364FE7FA7E743DE3D6F9BCA58FD191C91E603221 
{
public:
	// System.Int32 Firebase.VariantExtension_KeyOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyOptions_t364FE7FA7E743DE3D6F9BCA58FD191C91E603221, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Firebase.Database.DatabaseException
struct  DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65  : public Exception_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener_<OnCancelledHandler>c__AnonStorey2
struct  U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalChildListener_<OnCancelledHandler>c__AnonStorey2::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Internal.Error Firebase.Database.Internal.InternalChildListener_<OnCancelledHandler>c__AnonStorey2::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalChildListener_<OnCancelledHandler>c__AnonStorey2::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0
struct  U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0::callbackId
	int32_t ___callbackId_1;
	// Firebase.Database.Internal.ChildChangeType Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0::changeType
	int32_t ___changeType_2;
	// System.String Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0::previousChildName
	String_t* ___previousChildName_3;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}

	inline static int32_t get_offset_of_changeType_2() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68, ___changeType_2)); }
	inline int32_t get_changeType_2() const { return ___changeType_2; }
	inline int32_t* get_address_of_changeType_2() { return &___changeType_2; }
	inline void set_changeType_2(int32_t value)
	{
		___changeType_2 = value;
	}

	inline static int32_t get_offset_of_previousChildName_3() { return static_cast<int32_t>(offsetof(U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68, ___previousChildName_3)); }
	inline String_t* get_previousChildName_3() const { return ___previousChildName_3; }
	inline String_t** get_address_of_previousChildName_3() { return &___previousChildName_3; }
	inline void set_previousChildName_3(String_t* value)
	{
		___previousChildName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousChildName_3), (void*)value);
	}
};


// Firebase.Database.Internal.InternalDataSnapshot
struct  InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDataSnapshot::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalFirebaseDatabase
struct  InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalQuery
struct  InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalQuery::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalValueListener_<OnCancelledHandler>c__AnonStorey1
struct  U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalValueListener_<OnCancelledHandler>c__AnonStorey1::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Internal.Error Firebase.Database.Internal.InternalValueListener_<OnCancelledHandler>c__AnonStorey1::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalValueListener_<OnCancelledHandler>c__AnonStorey1::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * ___appPlatform_13;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___AppDisposed_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___appPlatform_13)); }
	inline FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * get_appPlatform_13() const { return ___appPlatform_13; }
	inline FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 ** get_address_of_appPlatform_13() { return &___appPlatform_13; }
	inline void set_appPlatform_13(FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * value)
	{
		___appPlatform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_13), (void*)value);
	}
};

struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_11;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_12;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___U3CU3Ef__amU24cache0_14;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache1_15;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * ___U3CU3Ef__amU24cache2_16;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * ___U3CU3Ef__amU24cache3_17;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * ___U3CU3Ef__amU24cache4_18;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThread_11)); }
	inline int32_t get_CheckDependenciesThread_11() const { return ___CheckDependenciesThread_11; }
	inline int32_t* get_address_of_CheckDependenciesThread_11() { return &___CheckDependenciesThread_11; }
	inline void set_CheckDependenciesThread_11(int32_t value)
	{
		___CheckDependenciesThread_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThreadLock_12)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_12() const { return ___CheckDependenciesThreadLock_12; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_12() { return &___CheckDependenciesThreadLock_12; }
	inline void set_CheckDependenciesThreadLock_12(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache1_15)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache1_15() const { return ___U3CU3Ef__amU24cache1_15; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache1_15() { return &___U3CU3Ef__amU24cache1_15; }
	inline void set_U3CU3Ef__amU24cache1_15(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache2_16)); }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * get_U3CU3Ef__amU24cache2_16() const { return ___U3CU3Ef__amU24cache2_16; }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 ** get_address_of_U3CU3Ef__amU24cache2_16() { return &___U3CU3Ef__amU24cache2_16; }
	inline void set_U3CU3Ef__amU24cache2_16(Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * value)
	{
		___U3CU3Ef__amU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache3_17)); }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * get_U3CU3Ef__amU24cache3_17() const { return ___U3CU3Ef__amU24cache3_17; }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D ** get_address_of_U3CU3Ef__amU24cache3_17() { return &___U3CU3Ef__amU24cache3_17; }
	inline void set_U3CU3Ef__amU24cache3_17(Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * value)
	{
		___U3CU3Ef__amU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache4_18)); }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * get_U3CU3Ef__amU24cache4_18() const { return ___U3CU3Ef__amU24cache4_18; }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F ** get_address_of_U3CU3Ef__amU24cache4_18() { return &___U3CU3Ef__amU24cache4_18; }
	inline void set_U3CU3Ef__amU24cache4_18(Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * value)
	{
		___U3CU3Ef__amU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_18), (void*)value);
	}
};


// Firebase.FutureBase
struct  FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Variant
struct  Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate
struct  OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate
struct  OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate
struct  OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalDatabaseReference
struct  InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96  : public InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDatabaseReference::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}
};


// Firebase.Database.Internal.InternalValueListener_OnCancelledDelegate
struct  OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate
struct  OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureVoid
struct  FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D  : public FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid_SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t84CBBD1E196A142480C0E94C912F5761358B4988 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid_Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_t087E572E4674F35454E806EDE6D0179962696A2B * ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t087E572E4674F35454E806EDE6D0179962696A2B * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t087E572E4674F35454E806EDE6D0179962696A2B ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t087E572E4674F35454E806EDE6D0179962696A2B * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct  EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct  EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct  EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m04B9A61BDDBD0183829A6C9926AFD3C437830D0A_inline (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_mAC1D1B4CFBA5E5EE464D9A87D58667C502DDE7A6_inline (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m65AA5165DCD043D2F3EE1B59F538E36EEAD5A57E_inline (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m117CC1F6B751A46159150CE035B87150606EBFB3 (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * ___internalSnapshot0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m5042141D1366E6CC88FF900DD4153A35EA1AA005 (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, bool ___useExportFormat0, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method);
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method);
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VariantExtension_ToObject_m775407EA36D03F804BAB675E8AE5CEC507E73958 (Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * ___variant0, int32_t ___options1, const RuntimeMethod* method);
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m812D93C71C3FA6B3063656B173CEE1165F877881 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_mF84AC8B6130D47CF0F11CE940C954E07D4C32A0F (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_mA765BFF7F3338568EBE1BB35A8C724FBF20E183A (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Code_mD1D6332727D138D8EEB79BBFFA9B9C64B668E82F_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mC7808E08CF949A175E00A2A8DB267764BEEFBEEE_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m46300A2CF20B7C0B6545240B77F2E6884BF763D5_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m36422EADA060F475B57FDF6C06FDF2108C460459 (int32_t ___error0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m89752EB5A0F3270EE413B7092F895E14BC1C5418 (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m218BDBF80FAE0272698C69D320826E405C37D8F3_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71 (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m42B361A9B3FB8D71C2AD04AB2B9E8415B88E7E19_inline (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.Internal.InternalDatabaseReference::RemoveValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * InternalDatabaseReference_RemoveValueAsync_mD24383A307B5BB0525A6B6376AA67F3320825217 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m07D168318F8518613EF8C89AC5009912F4C61616_inline (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseDatabase_get_App_mD23BAF80BC5BA9A5006029E0BC5A3F0B5997BAF9_inline (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_m5051E3C49C120229D3A1A76B3A6452A83DA603B3 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::Remove(!0)
inline bool Dictionary_2_Remove_mEA3D140450970018B248334386A802632B1BEA48 (Dictionary_2_t05505F0229552770940847365A51432798708419 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t05505F0229552770940847365A51432798708419 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A (DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * FirebaseDatabase_GetInstance_m6A9A3E05BDE4ABAA5AFF0944FC74B5BBB36D1E5D (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495A_inline (const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::get_AppPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * FirebaseApp_get_AppPlatform_m6F308A08C9294CB4D8191CAA2A0410E22A039934 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m6E160174CC26A476266B3868C6BE2A512A1BC430 (Dictionary_2_t05505F0229552770940847365A51432798708419 * __this, String_t* ___key0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t05505F0229552770940847365A51432798708419 *, String_t*, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m272596DCAAA8D5DE9E263004106196D9974A01A8 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___internalDB1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mB29F94F114E8243590DE2D876EA3AC7F886BB414 (Dictionary_2_t05505F0229552770940847365A51432798708419 * __this, String_t* ___key0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t05505F0229552770940847365A51432798708419 *, String_t*, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76 (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_mBEDDDF95229D953FDC2B91A96C1E30420A4080E0 (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * ___internalRef0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::.ctor()
inline void Dictionary_2__ctor_mE70917DA184B19BEC5BCB383336800AAB0E1B8CC (Dictionary_2_t05505F0229552770940847365A51432798708419 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t05505F0229552770940847365A51432798708419 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m4E4C22225B79F2ADEDBC72583EFF5A605C7651A5 (SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m172E00126B545A1EBF368C3AAFA3E95AFEC87BCE (SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114 (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m646BB9457B0C0C834C4DC7C79803BA8083A5594A (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m611B8D0C11BA8FDAD419B5CB7DD6850C2554685C (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___applicationDelegate0, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___arithmeticDelegate1, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___divideByZeroDelegate2, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___indexOutOfRangeDelegate3, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___invalidCastDelegate4, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___invalidOperationDelegate5, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___ioDelegate6, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___nullReferenceDelegate7, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___outOfMemoryDelegate8, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___overflowDelegate9, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_mFF6455DC9880F3C9DA49DBF9180BB9F76C7F3957 (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentDelegate0, ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentNullDelegate1, ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169 (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52 (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m90E967629653356BED65A00D1FF4044F045719A1 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m3CFB337C5BFDF7F62BA75C9EA7B50FA7255351AC (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m81AF2020D77BF9FA0A337563F28B20B3EB7B4CD1 (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m6699828C859097222E0B1FD920380F8D7210F93F (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m7D344228DAC9061F9214A5C110B6FF9A868938BA (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m91046B0216653A7A7B27017BB862F06B0B01628B (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___cancelledCallback0, OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * ___childChangeCallback1, OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * ___childRemovedCallback2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m2B5943677658851E1048BA29B17CB4571AA7C950 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_mE7AAAD5FEF21B5DB9EBAF056BC9B54DE4DE560CE (int32_t ___uid0, InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 ** ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_m9F41C868929A7BCC91327261DD03C6AE506DD805 (U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_mFCB4994A1278A528C8427A0CC1CF5A05D8776915 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_mF0748EA78939517A3D2344B4268A7E4CF64923DD (U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.InternalQuery::CreateChildListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, int32_t ___callbackId0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596 (intptr_t ___listener0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::BeforeAddingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_childAddedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childAddedImpl_mA4A1F860C7694DB476647BE3084D19132B2A3A58 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_cancelledImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childAddedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childAddedImpl_mFED5A807B577AA0387E18A36F259777F50CAA22C (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_cancelledImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::AfterRemovingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_childChangedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childChangedImpl_mB6C71EF149F1A4D894622AD60B5459BECC2BE885 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childChangedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childChangedImpl_m077F2738D1F4A42EA98EFEC0E8104BF35B34D5C0 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_childMovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childMovedImpl_m96C111E016D64E3D06DCC4C27915EF01FE4735AE (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childMovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childMovedImpl_mEB3C0CF2E9585005C89D203F189F25D896BA4292 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_childRemovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childRemovedImpl_mCBC3642D25C906B8244EF93C9C9874C9A273150B (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childRemovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childRemovedImpl_mBD3F1069F3DE64F2A00AE09971BF6CAEB73ABEA9 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C (int32_t ___callbackId0, InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 ** ___childListener1, const RuntimeMethod* method);
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * DatabaseError_FromError_m24932C549143AAAD1CB96A89BA0E996B72FA0C5B (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mA59C2F28CA3F79147DED1929090EB1797D1DD3A2 (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___error0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662 (EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * __this, RuntimeObject * ___sender0, ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *, RuntimeObject *, ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m8C38868506AE5CDFC7FD57C6BA4D3A239516CF66 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * ___internalSnapshot0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m33D2C8DCE0A607E98AE7E8FB115C9D3A0B67AF3E (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_mC6F0062D8B3D1A92D4265F2A1B859985B1CEF179 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_exists_m1088F4E375B915F7E18E030D4B3445C7C2B9381F (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_mE2031BEB4D340759CAB2652AEA549D150AE77588 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m2DB9A3EFE74F9FCD50C5699D76E4E9BCAAB3E438 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_m8DA03321AF412FB90368F016FC27122354ED1661 (Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_mF6E4E368A0821B9D52B81336CCF9688C2464E3EC (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_mF21DF4484BBE9B62D4FED81DC964F99090E0449B (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_m08769260578BA80CDBCD7C254FDE0B61F71B9323 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m55BEE625D5E862847B85832717A20D00C340FEFC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m278D841CAD8BE634474CE3BFB900167807CD3145 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m9E2442B6E1D5FB543E43E876765D6031ACC4E508 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_RemoveValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_RemoveValue_mBEC1F6C12B33E68758A3A65D70844348341BED35 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_mE27D03F52C5F3CE33751637C530DB89045EE97DA (FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * FutureVoid_GetTask_m81734F11961D1BC3DD5D3E313B006EA275C06B83 (FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D * ___fu0, const RuntimeMethod* method);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_m6E74BCF3018A9131E78FB48863FD097B1104A00B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489 (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___instance0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_m24D798C8552F4F0E5E52F4367027E29BA11329E4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mC40BD38416FA0F27978FAF657C062B1EC2459D51 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal_m65D464894629633CAF17B3FE4C7EC9132EC17EA0 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m9A9C50B1E94E1444EAB3CAC3D826E0199801B2AC (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  InternalFirebaseDatabase_getCPtr_m8663570B90694D8489CA3A9D6E6068D2B455A90C (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal_m47D143F1BD5A975F61B53D41D8FF3E3599F5D23C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDB6F3883AAF8AE156ED6115F45705B0BD2EF7564 (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * __this, int32_t ___key0, InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D *, int32_t, InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m20FB081D5F683F170BA24B9915580A93C3F84B14 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(!0)
inline bool Dictionary_2_Remove_m759A5DF74A2AF4529129D311F5AF5EDB86A731D9 (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD6043A580B0591AF461C0264F9F0602ECBF72E9E (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * __this, int32_t ___key0, InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D *, int32_t, InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
inline void Dictionary_2__ctor_m2C45005434527718C932F8D736F0A4625930F67A (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m8D3DB2B5064CC91B552445F935FF7B6AF3AC43B4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_m2997990C2B5D208CEF92F7457093B00DE6E6E56E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_CreateValueListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_CreateValueListener_mA5D4196B0EA5FC47D1A4DCB618F3F9F5E224594A (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_m20E354F2D2B5DBB89755B1C57D6C79F09036E99A (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_mEF7F270BD1FFAA2BF2D91B6FF0948D64F1874F33 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___jarg10, OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_CreateChildListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_CreateChildListener_mAA55E9C963F817B6B7DC48E1D6B593061CB49A54 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_mB1D283A47153A12671CE4E820485AE520421A661 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_mFAB8E3C094791F2288BFE1E23F8717AD741CEFB3 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___jarg10, OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * ___jarg21, OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m3299D6FDB266A490DBEA5FAFF2536487AAC7CD5F (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___cancelledCallback0, OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * ___valueChangedCallback1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_mDBA854A40B9156999FB721ED706694A86CD0B24F (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_m49443558F9C2D677832013808FE4324596363D0D (U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.Internal.InternalQuery::CreateValueListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, int32_t ___callbackId0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248 (intptr_t ___listener0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m2754D842670C1BE5B2A1797CACB2AB69EE3B62D5 (int32_t ___callbackId0, InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 ** ___valueListener1, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m3900BACA1264703CD7F6D05E20E2C93DE4E92257 (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___error0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m940162064177EBC17FF32AAE4FEFE115CD04E987 (EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * __this, RuntimeObject * ___sender0, ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 *, RuntimeObject *, ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m2C4140EC842002EC835F45A4466C570B82D72AE2 (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___snapshot0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_m5D70105CE3A2753202E3CE650EC8CFE3A1125E8F (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * __this, InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_mED14F02A05D2A34FD677E20E064AB5ADFB8D3F48 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildAdded_m68E50534A8D39E11145A0EC8CD4DDAC7BCE56133 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildAdded_mB6CB793F80AD648EFD5F41D2B95502D169B6FEB0 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildChanged(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildChanged_m31844E9A31E56E246B5C616E43A75FB398EA36E8 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildChanged(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildChanged_m1E205AD1AF87738E92EC25D1C1DD8A18BCCEE94E (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildRemoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildRemoved_m48CA4C7FF3661C2E810DE35F90E573D211695549 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildRemoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildRemoved_m593876CEF6AA3E6ABDB4D031C283E99B86C55AC4 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildMoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildMoved_m70A7026E183C5D617086AB1AE01CF931A390FAFA (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildMoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildMoved_mFBA592C974B8E0BCF8AC86731787B2381C1DD4A8 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mCFCD93B7AA3B4528B80FDB45936ADD99FAED6E50_inline (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mBA7E32690CAB3E2E4B8961E1CB44FB444F00EFB8_inline (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m33D2C8DCE0A607E98AE7E8FB115C9D3A0B67AF3E (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChildChangedEventArgs__ctor_m33D2C8DCE0A607E98AE7E8FB115C9D3A0B67AF3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___previousChildName1;
		ChildChangedEventArgs_set_PreviousChildName_m04B9A61BDDBD0183829A6C9926AFD3C437830D0A_inline(__this, L_0, /*hidden argument*/NULL);
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_1 = ___snapshot0;
		ChildChangedEventArgs_set_Snapshot_mAC1D1B4CFBA5E5EE464D9A87D58667C502DDE7A6_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mA59C2F28CA3F79147DED1929090EB1797D1DD3A2 (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChildChangedEventArgs__ctor_mA59C2F28CA3F79147DED1929090EB1797D1DD3A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = ___error0;
		ChildChangedEventArgs_set_DatabaseError_m65AA5165DCD043D2F3EE1B59F538E36EEAD5A57E_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::get_Snapshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ChildChangedEventArgs_get_Snapshot_m23044D5AC357B10CA9F0323325FF5CA0072D9053 (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, const RuntimeMethod* method)
{
	{
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_0 = __this->get_U3CSnapshotU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_mAC1D1B4CFBA5E5EE464D9A87D58667C502DDE7A6 (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::get_DatabaseError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ChildChangedEventArgs_get_DatabaseError_mF38E0889EA801D2813F011B6B76287DB0D5DA8EF (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, const RuntimeMethod* method)
{
	{
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = __this->get_U3CDatabaseErrorU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m65AA5165DCD043D2F3EE1B59F538E36EEAD5A57E (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m04B9A61BDDBD0183829A6C9926AFD3C437830D0A (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m117CC1F6B751A46159150CE035B87150606EBFB3 (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * ___internalSnapshot0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_0 = ___internalSnapshot0;
		__this->set_internalSnapshot_0(L_0);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_1 = ___database1;
		__this->set_database_1(L_1);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * ___internalSnapshot0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_0 = ___internalSnapshot0;
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_1 = ___database1;
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_2 = (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 *)il2cpp_codegen_object_new(DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_m117CC1F6B751A46159150CE035B87150606EBFB3(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_mA765BFF7F3338568EBE1BB35A8C724FBF20E183A (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = DataSnapshot_GetValue_m5042141D1366E6CC88FF900DD4153A35EA1AA005(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_mF84AC8B6130D47CF0F11CE940C954E07D4C32A0F (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		String_t* L_1 = InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_GetRawJsonValue_m3D0DE0A6D3A6C1510D28DA3813914C4743E2EFA1 (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		bool L_1 = InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0012:
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_2 = __this->get_internalSnapshot_0();
		NullCheck(L_2);
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_3 = InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = VariantExtension_ToObject_m775407EA36D03F804BAB675E8AE5CEC507E73958(L_3, 1, /*hidden argument*/NULL);
		String_t* L_5 = Json_Serialize_m812D93C71C3FA6B3063656B173CEE1165F877881(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m5042141D1366E6CC88FF900DD4153A35EA1AA005 (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, bool ___useExportFormat0, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_1 = InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = VariantExtension_ToObject_m775407EA36D03F804BAB675E8AE5CEC507E73958(L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_ToString_mA834A65B3EC9A064F6B6BC5627D134FA1B2098AF (DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_ToString_mA834A65B3EC9A064F6B6BC5627D134FA1B2098AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6F8BBE8223234BE7CF068795479D66E39AC47CC7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral6F8BBE8223234BE7CF068795479D66E39AC47CC7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = DataSnapshot_get_Key_mF84AC8B6130D47CF0F11CE940C954E07D4C32A0F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD57FCC10EA477EEAF3AA1F6C08C1F88F27F227A6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD57FCC10EA477EEAF3AA1F6C08C1F88F27F227A6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		RuntimeObject * L_6 = DataSnapshot_get_Value_mA765BFF7F3338568EBE1BB35A8C724FBF20E183A(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF7368006D9EB8DA53E381FD4C46A859390D39E4E);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralF7368006D9EB8DA53E381FD4C46A859390D39E4E);
		String_t* L_8 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Firebase.Database.DatabaseError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__cctor_m3ABFEEE70CB98796AA4B94A07F5312E6B839A626 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError__cctor_m3ABFEEE70CB98796AA4B94A07F5312E6B839A626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * L_0 = (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C *)il2cpp_codegen_object_new(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C(L_0, /*hidden argument*/Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C_RuntimeMethod_var);
		((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->set_ErrorReasons_0(L_0);
		Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_1 = (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *)il2cpp_codegen_object_new(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62(L_1, /*hidden argument*/Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var);
		((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->set_ErrorCodes_1(L_1);
		RuntimeObject* L_2 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteral5444D6F9BD53CC5E722D4CF53859F98787333718);
		RuntimeObject* L_3 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteralB553988D3E28D099A271683ADE88E9EDB57EE10F);
		RuntimeObject* L_4 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral05A308029DFB0AAD1134F3E4B028519B98D2806B);
		RuntimeObject* L_5 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteralC3EF337D8E93BFC7DCD64FAB1CDA2CC6EC015AEA);
		RuntimeObject* L_6 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteralC8E3D9B1EA59C2C3EA81424DD35283AC917B2D77);
		RuntimeObject* L_7 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral6335EB6522AB2308F001D48967579AD35EB604C0);
		RuntimeObject* L_8 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral46776BD15CB393538C543C3DCA2ED44E055EF79C);
		RuntimeObject* L_9 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral97A9C310AF2569E6A8B8E7CDB7B5E6BEE1AD5AE8);
		RuntimeObject* L_10 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral3E2F0E9C4819337D229DC079F7EF5604CC86DD4A);
		RuntimeObject* L_11 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral43C3C52CE9B7645EFB7341BC689E2D18A56BA7CD);
		RuntimeObject* L_12 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteralFC09D17A4B10AE2EE4172C94F6799A0FC53E7090);
		RuntimeObject* L_13 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteralAC6996996732374A3ECDAC4A654527DD3F9C85C0);
		RuntimeObject* L_14 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral2E9045902981639C78002C9B7703BA483D6E8A24);
		RuntimeObject* L_15 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_15, _stringLiteral11C5CF62B8C6090DB756C0500E411A8323CC3779, (-1));
		RuntimeObject* L_16 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_16, _stringLiteralD68049BB85454C0B8C56FFBB73C45E8ADEE41B21, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_17, _stringLiteralA9E20E5CF769AB0E45EF2C502587A7197C1A1100, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_18, _stringLiteralE6CB995CFE0FE3233478F83BE4BB662B2D0F2AFE, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_19, _stringLiteral1E533537ED011AB19AE6747DF8B8F95A9E70CAEE, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_20, _stringLiteral238422C199B1DA9376D6D0B0473BCF5D65AF76E8, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_21, _stringLiteral76CD6E2E967192C0E980C24C0FC9B3321836F134, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_22, _stringLiteralE44BF54C67AB77DFD957EB06F409847FEF4851AF, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_23, _stringLiteral1D5EE313D50A7F8AEDF787B5A6C029EF09906C69, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_24, _stringLiteral030E8E8F47BFE8D70A7C16D8697DA59A2F780275, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorCodes_1();
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t4DE4A9489E559790190EDAB0BC6A25A55805662D_il2cpp_TypeInfo_var, L_25, _stringLiteral82FEB1F87A470BAACEB4953C32A1CC382CCF10AA, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m89752EB5A0F3270EE413B7092F895E14BC1C5418 (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError__ctor_m89752EB5A0F3270EE413B7092F895E14BC1C5418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * G_B2_0 = NULL;
	DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * G_B3_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		DatabaseError_set_Code_mD1D6332727D138D8EEB79BBFFA9B9C64B668E82F_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		DatabaseError_set_Message_mC7808E08CF949A175E00A2A8DB267764BEEFBEEE_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___details2;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		String_t* L_4 = ___details2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m46300A2CF20B7C0B6545240B77F2E6884BF763D5_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Code_mD1D6332727D138D8EEB79BBFFA9B9C64B668E82F (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m218BDBF80FAE0272698C69D320826E405C37D8F3 (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mC7808E08CF949A175E00A2A8DB267764BEEFBEEE (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m46300A2CF20B7C0B6545240B77F2E6884BF763D5 (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m36422EADA060F475B57FDF6C06FDF2108C460459 (int32_t ___error0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005a;
			}
			case 8:
			{
				goto IL_005d;
			}
			case 9:
			{
				goto IL_0060;
			}
			case 10:
			{
				goto IL_0066;
			}
			case 11:
			{
				goto IL_0069;
			}
			case 12:
			{
				goto IL_0069;
			}
			case 13:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_0045:
	{
		return ((int32_t)-4);
	}

IL_0048:
	{
		return ((int32_t)-6);
	}

IL_004b:
	{
		return ((int32_t)-7);
	}

IL_004e:
	{
		return ((int32_t)-8);
	}

IL_0051:
	{
		return ((int32_t)-24);
	}

IL_0054:
	{
		return ((int32_t)-2);
	}

IL_0057:
	{
		return ((int32_t)-9);
	}

IL_005a:
	{
		return ((int32_t)-3);
	}

IL_005d:
	{
		return ((int32_t)-10);
	}

IL_0060:
	{
		return ((int32_t)-999);
	}

IL_0066:
	{
		return ((int32_t)-25);
	}

IL_0069:
	{
		return ((int32_t)-999);
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * DatabaseError_FromError_m24932C549143AAAD1CB96A89BA0E996B72FA0C5B (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError_FromError_m24932C549143AAAD1CB96A89BA0E996B72FA0C5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var);
		int32_t L_1 = DatabaseError_ErrorToCode_m36422EADA060F475B57FDF6C06FDF2108C460459(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___msg1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___msg1;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var))->get_ErrorReasons_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(!0) */, IDictionary_2_t03CEE7255664F6B9F19FB34C3E9233D90C595B3D_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
		goto IL_002e;
	}

IL_002d:
	{
		String_t* L_9 = ___msg1;
		G_B4_0 = L_9;
	}

IL_002e:
	{
		V_1 = G_B4_0;
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_12 = (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E *)il2cpp_codegen_object_new(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var);
		DatabaseError__ctor_m89752EB5A0F3270EE413B7092F895E14BC1C5418(L_12, L_10, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_ToString_m57CEE5DEC2AAE164B2A091B2C369B0E67D3466DF (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError_ToString_m57CEE5DEC2AAE164B2A091B2C369B0E67D3466DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = DatabaseError_get_Message_m218BDBF80FAE0272698C69D320826E405C37D8F3_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral55EB6C2DA4A967184A694D66924D58310E7999F7, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A (DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_mBEDDDF95229D953FDC2B91A96C1E30420A4080E0 (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * ___internalRef0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_0 = ___internalRef0;
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_1 = ___database1;
		Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71(__this, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_2 = ___internalRef0;
		__this->set_internalReference_4(L_2);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_3 = ___database1;
		DatabaseReference_set_Database_m42B361A9B3FB8D71C2AD04AB2B9E8415B88E7E19_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m42B361A9B3FB8D71C2AD04AB2B9E8415B88E7E19 (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::RemoveValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * DatabaseReference_RemoveValueAsync_m338FDF99EC145210B592AECCC3ED01530F845EFD (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = InternalDatabaseReference_RemoveValueAsync_mD24383A307B5BB0525A6B6376AA67F3320825217(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_ToString_m0D4A460A3753589B462C1C5B7F675B359EC60ED2 (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		String_t* L_1 = InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseReference_Equals_m65F75624DE84005F0848E2A7523B30012BD771EA (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseReference_Equals_m65F75624DE84005F0848E2A7523B30012BD771EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA *)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseReference_GetHashCode_mEC11BE97237E4289C5167B14F09F70C83F619214 (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
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
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m272596DCAAA8D5DE9E263004106196D9974A01A8 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___internalDB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase__ctor_m272596DCAAA8D5DE9E263004106196D9974A01A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		FirebaseDatabase_set_App_m07D168318F8518613EF8C89AC5009912F4C61616_inline(__this, L_0, /*hidden argument*/NULL);
		InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_1 = ___internalDB1;
		__this->set_internalDatabase_0(L_1);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = FirebaseDatabase_get_App_mD23BAF80BC5BA9A5006029E0BC5A3F0B5997BAF9_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_3, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_mB135CAC8C0E38B1E55D5A8741D54B25FB5E5BCE8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		FirebaseApp_add_AppDisposed_m1CA5C0D303E4A5536DFDBE3356A900B3B966D4B6(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Finalize_mCD5C30E1113F30571F94CA717A7BFB612D2EF2E6 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseDatabase_Dispose_m5051E3C49C120229D3A1A76B3A6452A83DA603B3(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_OnAppDisposed_mB135CAC8C0E38B1E55D5A8741D54B25FB5E5BCE8 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_Dispose_m5051E3C49C120229D3A1A76B3A6452A83DA603B3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_m5051E3C49C120229D3A1A76B3A6452A83DA603B3 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_Dispose_m5051E3C49C120229D3A1A76B3A6452A83DA603B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_0, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_1 = __this->get_internalDatabase_0();
			if (L_1)
			{
				goto IL_001e;
			}
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
			Dictionary_2_t05505F0229552770940847365A51432798708419 * L_2 = ((FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var))->get_databases_3();
			V_1 = L_2;
			RuntimeObject * L_3 = V_1;
			Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_3, /*hidden argument*/NULL);
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
			Dictionary_2_t05505F0229552770940847365A51432798708419 * L_4 = ((FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var))->get_databases_3();
			String_t* L_5 = __this->get_name_1();
			NullCheck(L_4);
			Dictionary_2_Remove_mEA3D140450970018B248334386A802632B1BEA48(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_mEA3D140450970018B248334386A802632B1BEA48_RuntimeMethod_var);
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0040;
		}

FINALLY_0040:
		{ // begin finally (depth: 2)
			RuntimeObject * L_6 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(64)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(64)
		{
			IL2CPP_JUMP_TBL(0x47, IL_0047)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0047:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_7 = FirebaseDatabase_get_App_mD23BAF80BC5BA9A5006029E0BC5A3F0B5997BAF9_inline(__this, /*hidden argument*/NULL);
			EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_8 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
			EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_8, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_mB135CAC8C0E38B1E55D5A8741D54B25FB5E5BCE8_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_7);
			FirebaseApp_remove_AppDisposed_mE9EBC4903F93C997C038F8B12940A3D658624EA9(L_7, L_8, /*hidden argument*/NULL);
			FirebaseDatabase_set_App_m07D168318F8518613EF8C89AC5009912F4C61616_inline(__this, (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL, /*hidden argument*/NULL);
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_9 = __this->get_internalDatabase_0();
			NullCheck(L_9);
			VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, L_9);
			__this->set_internalDatabase_0((InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD *)NULL);
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseDatabase_get_App_mD23BAF80BC5BA9A5006029E0BC5A3F0B5997BAF9 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = __this->get_U3CAppU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m07D168318F8518613EF8C89AC5009912F4C61616 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_2(L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * FirebaseDatabase_get_DefaultInstance_m355FF6C64EFF9959DAA02A8A069625214897BB33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_get_DefaultInstance_m355FF6C64EFF9959DAA02A8A069625214897BB33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 * L_2 = (DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 *)il2cpp_codegen_object_new(DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A(L_2, _stringLiteral485C0DB0D97BEE2AD947C0844A4001AA2CC28ED5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseDatabase_get_DefaultInstance_m355FF6C64EFF9959DAA02A8A069625214897BB33_RuntimeMethod_var);
	}

IL_0017:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_4 = FirebaseDatabase_GetInstance_m6A9A3E05BDE4ABAA5AFF0944FC74B5BBB36D1E5D(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * FirebaseDatabase_GetInstance_m6A9A3E05BDE4ABAA5AFF0944FC74B5BBB36D1E5D (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetInstance_m6A9A3E05BDE4ABAA5AFF0944FC74B5BBB36D1E5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495A_inline(/*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = ___app0;
		NullCheck(L_2);
		FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * L_3 = FirebaseApp_get_AppPlatform_m6F308A08C9294CB4D8191CAA2A0410E22A039934(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String Firebase.Platform.IAppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450_il2cpp_TypeInfo_var, L_1, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_5 = FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63(L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___url1;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 * L_2 = (DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 *)il2cpp_codegen_object_new(DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A(L_2, _stringLiteralF3DA9A389ABD93EE737198EA8C068AEC4BA6B4FD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63_RuntimeMethod_var);
	}

IL_0016:
	{
		V_0 = (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 *)NULL;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_3 = ___app0;
		NullCheck(L_3);
		String_t* L_4 = FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___url1;
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6AB2A5D1FE0A10CB014FC4303709BA72103C7CD0, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
		Dictionary_2_t05505F0229552770940847365A51432798708419 * L_7 = ((FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var))->get_databases_3();
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_8, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
			Dictionary_2_t05505F0229552770940847365A51432798708419 * L_9 = ((FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var))->get_databases_3();
			String_t* L_10 = V_1;
			NullCheck(L_9);
			bool L_11 = Dictionary_2_TryGetValue_m6E160174CC26A476266B3868C6BE2A512A1BC430(L_9, L_10, (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m6E160174CC26A476266B3868C6BE2A512A1BC430_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0087;
			}
		}

IL_0048:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_12 = ___app0;
			String_t* L_13 = ___url1;
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_14 = InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D(L_12, L_13, (int32_t*)(&V_3), /*hidden argument*/NULL);
			V_4 = L_14;
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_15 = V_4;
			if (!L_15)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			int32_t L_16 = V_3;
			if (!L_16)
			{
				goto IL_006b;
			}
		}

IL_0060:
		{
			DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 * L_17 = (DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65 *)il2cpp_codegen_object_new(DatabaseException_tC212286C4CAB5D7E09A5D4BE10DB8AFC3228BE65_il2cpp_TypeInfo_var);
			DatabaseException__ctor_m552DB151C4289EF62EF484CCBEA2A99C8ADB0F9A(L_17, _stringLiteralD2605ACD229B49A682D1AF88108FAC1CEEA6CC52, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, FirebaseDatabase_GetInstance_m0D0753394256D826DFAB4F782A3CE8F11AE67F63_RuntimeMethod_var);
		}

IL_006b:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_18 = ___app0;
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_19 = V_4;
			FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_20 = (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 *)il2cpp_codegen_object_new(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
			FirebaseDatabase__ctor_m272596DCAAA8D5DE9E263004106196D9974A01A8(L_20, L_18, L_19, /*hidden argument*/NULL);
			V_0 = L_20;
			FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_21 = V_0;
			String_t* L_22 = V_1;
			NullCheck(L_21);
			L_21->set_name_1(L_22);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var);
			Dictionary_2_t05505F0229552770940847365A51432798708419 * L_23 = ((FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var))->get_databases_3();
			String_t* L_24 = V_1;
			FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_25 = V_0;
			NullCheck(L_23);
			Dictionary_2_set_Item_mB29F94F114E8243590DE2D876EA3AC7F886BB414(L_23, L_24, L_25, /*hidden argument*/Dictionary_2_set_Item_mB29F94F114E8243590DE2D876EA3AC7F886BB414_RuntimeMethod_var);
		}

IL_0087:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_26 = V_2;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_26, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0093:
	{
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_27 = V_0;
		return L_27;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * FirebaseDatabase_get_RootReference_m5089824E24CB6C8457D8B165B3DABAB6950CD188 (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_get_RootReference_m5089824E24CB6C8457D8B165B3DABAB6950CD188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_0 = __this->get_internalDatabase_0();
		NullCheck(L_0);
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_1 = InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76(L_0, /*hidden argument*/NULL);
		DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * L_2 = (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA *)il2cpp_codegen_object_new(DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_mBEDDDF95229D953FDC2B91A96C1E30420A4080E0(L_2, L_1, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__cctor_m80708694CA1A329B4E7B97648CEBDDB5C80CCBA2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase__cctor_m80708694CA1A329B4E7B97648CEBDDB5C80CCBA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t05505F0229552770940847365A51432798708419 * L_0 = (Dictionary_2_t05505F0229552770940847365A51432798708419 *)il2cpp_codegen_object_new(Dictionary_2_t05505F0229552770940847365A51432798708419_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE70917DA184B19BEC5BCB383336800AAB0E1B8CC(L_0, /*hidden argument*/Dictionary_2__ctor_mE70917DA184B19BEC5BCB383336800AAB0E1B8CC_RuntimeMethod_var);
		((FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9_il2cpp_TypeInfo_var))->set_databases_3(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE__cctor_m938BC88CE59A89466C0572E0591920023526CD84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseInternalPINVOKE__cctor_m938BC88CE59A89466C0572E0591920023526CD84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB * L_0 = (SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB *)il2cpp_codegen_object_new(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m4E4C22225B79F2ADEDBC72583EFF5A605C7651A5(L_0, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 * L_1 = (SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 *)il2cpp_codegen_object_new(SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m172E00126B545A1EBF368C3AAFA3E95AFEC87BCE(L_1, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_m24D798C8552F4F0E5E52F4367027E29BA11329E4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal(void*, char*, int32_t*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal_m65D464894629633CAF17B3FE4C7EC9132EC17EA0 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal_m47D143F1BD5A975F61B53D41D8FF3E3599F5D23C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_InternalDataSnapshot(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_mC6F0062D8B3D1A92D4265F2A1B859985B1CEF179 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDataSnapshot)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_exists(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_exists_m1088F4E375B915F7E18E030D4B3445C7C2B9381F (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_exists)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_InternalDataSnapshot_key_string(void*);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_mE2031BEB4D340759CAB2652AEA549D150AE77588 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_key_string)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_value(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m2DB9A3EFE74F9FCD50C5699D76E4E9BCAAB3E438 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_value)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_InternalQuery(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m8D3DB2B5064CC91B552445F935FF7B6AF3AC43B4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalQuery)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_InternalQuery_is_valid(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_m2997990C2B5D208CEF92F7457093B00DE6E6E56E (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_is_valid)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalQuery_CreateValueListener(void*, int32_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_CreateValueListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_CreateValueListener_mA5D4196B0EA5FC47D1A4DCB618F3F9F5E224594A (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_CreateValueListener)(____jarg10_marshaled, ___jarg21);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_DestroyValueListener(intptr_t);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_m20E354F2D2B5DBB89755B1C57D6C79F09036E99A (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_DestroyValueListener)(___jarg10);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_mEF7F270BD1FFAA2BF2D91B6FF0948D64F1874F33 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___jarg10, OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_RegisterValueListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalQuery_CreateChildListener(void*, int32_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_CreateChildListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_CreateChildListener_mAA55E9C963F817B6B7DC48E1D6B593061CB49A54 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_CreateChildListener)(____jarg10_marshaled, ___jarg21);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_DestroyChildListener(intptr_t);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_mB1D283A47153A12671CE4E820485AE520421A661 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_DestroyChildListener)(___jarg10);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_mFAB8E3C094791F2288BFE1E23F8717AD741CEFB3 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___jarg10, OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * ___jarg21, OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_RegisterChildListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_delete_InternalDatabaseReference(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m55BEE625D5E862847B85832717A20D00C340FEFC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDatabaseReference)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_is_valid(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m9E2442B6E1D5FB543E43E876765D6031ACC4E508 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_is_valid)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_RemoveValue(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_RemoveValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_RemoveValue_mBEC1F6C12B33E68758A3A65D70844348341BED35 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_RemoveValue)(____jarg10_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_InternalDatabaseReference_url(void*);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_m6E74BCF3018A9131E78FB48863FD097B1104A00B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_url)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_mF6E4E368A0821B9D52B81336CCF9688C2464E3EC (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mF846D06508877F3F6229D69869C39C7673800147 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_mF846D06508877F3F6229D69869C39C7673800147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_0 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_1 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_2 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_3 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_4 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_5 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_6 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_7 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_8 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_9 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_10 = (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E *)il2cpp_codegen_object_new(ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * L_11 = (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m646BB9457B0C0C834C4DC7C79803BA8083A5594A(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * L_12 = (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m646BB9457B0C0C834C4DC7C79803BA8083A5594A(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * L_13 = (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m646BB9457B0C0C834C4DC7C79803BA8083A5594A(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_14 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_15 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_16 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_17 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_18 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_19 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_20 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_21 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_22 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_23 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * L_24 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m611B8D0C11BA8FDAD419B5CB7DD6850C2554685C(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * L_25 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * L_26 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * L_27 = ((SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_mFF6455DC9880F3C9DA49DBF9180BB9F76C7F3957(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m4E4C22225B79F2ADEDBC72583EFF5A605C7651A5 (SWIGExceptionHelper_t2655D5444CE56E86159A313474786003E12A15BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m611B8D0C11BA8FDAD419B5CB7DD6850C2554685C (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___applicationDelegate0, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___arithmeticDelegate1, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___divideByZeroDelegate2, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___indexOutOfRangeDelegate3, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___invalidCastDelegate4, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___invalidOperationDelegate5, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___ioDelegate6, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___nullReferenceDelegate7, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___outOfMemoryDelegate8, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___overflowDelegate9, ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_mFF6455DC9880F3C9DA49DBF9180BB9F76C7F3957 (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentDelegate0, ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentNullDelegate1, ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_DatabaseInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_m91B6436DA2DEF5048008F31C9A59183C1F9B4B5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m4880222693A51D77139E7DA137F82B54CB96354E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_mEA76CCA11459D993F6C0EB33C710B8E378073409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m58DAB77A79C8E3B2DE686C74AE75A580FF422B5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m3204FD26AC1B9C0E4E908655AAB3BC4F7BF3BBD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_mA9B36AE190CFC4E5B6A7BF619DF47107D65F3625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m8F6EE135866ED11991AC87B27E5B4936B9E98161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_mE34338D3225F854CCCD56FD3969DB0DEA2B905DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_mE64BBDA2A76CB184CC0F5688942279378461396C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m828D329BD7F89711F8D1EC2543DE783C425D981A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m14832A751CC9ED8E3387C01F5194C8A5059434E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_mA49A193F64CE112D882DC109D063689C9DB53204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_mBD003B489A82D2A36A3D1267B71386A9F1B6B1EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3568152131E17EC835BEA4F42275B226D228A2DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463(L_8, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m646BB9457B0C0C834C4DC7C79803BA8083A5594A (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m61283CA9E2846FE77CCC2685D376198C736D25FE (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mD1AFE4E125F3229DFB492DB060113DF49248FB7D (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_mE8CE556B8A9F3AE14907C1705C2DB38A140D28EA (ExceptionArgumentDelegate_t833AF5F6969A78305EA89EB80756B60FBD5D5CDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m04B915E273D97699343917A5D687CB662479C114 (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mAF438292846A8050F73B837FF004944D878F6811 (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mB06901B853BCC8BB0AE57700F07F8854D0AB86EE (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m5F53D5E0E0A134F2D3E844C07545FA39A119D0BB (ExceptionDelegate_t60B67B23B6CD160B426A81EA36782993D1784B8E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_m9476CF92955D56799E0FB95D3621B41EEEAD5463_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m5310FC4C70F776B7A5DC911192E1BBF785974F11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0F40A73E23A2F51002307919DF0D0B6E5584F59A_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m90E967629653356BED65A00D1FF4044F045719A1(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m90E967629653356BED65A00D1FF4044F045719A1(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mE4DB327C1FFF5C93B6BFEC585112F19068CFAA33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mE4DB327C1FFF5C93B6BFEC585112F19068CFAA33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * L_0 = (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 *)il2cpp_codegen_object_new(SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m3CFB337C5BFDF7F62BA75C9EA7B50FA7255351AC(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m90E967629653356BED65A00D1FF4044F045719A1_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * L_1 = ((SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m81AF2020D77BF9FA0A337563F28B20B3EB7B4CD1(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m172E00126B545A1EBF368C3AAFA3E95AFEC87BCE (SWIGStringHelper_t83FD10DA92A50A5EEBC24DCCE5C7670279937768 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m81AF2020D77BF9FA0A337563F28B20B3EB7B4CD1 (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____stringDelegate0_marshaled);

}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m90E967629653356BED65A00D1FF4044F045719A1 (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
		return L_0;
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m3CFB337C5BFDF7F62BA75C9EA7B50FA7255351AC (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m1D0454E09B746A24921E46BD0C7EF3693B56D5EC (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mE561E7260F0EB451E220EC73595F438D2AD800B5 (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m5E442C6CB3EE2A7A6743D12EC19BCBABC7B1BEB5 (SWIGStringDelegate_tFA9445B24EA75B9328A66E48849A346F033DBCA4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F(int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, char* ___previousChildName3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___previousChildName3' to managed representation
	String_t* ____previousChildName3_unmarshaled = NULL;
	____previousChildName3_unmarshaled = il2cpp_codegen_marshal_string_result(___previousChildName3);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__cctor_m89AF63C2E114F49EB31AB021AFF91F4F3CD21D72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener__cctor_m89AF63C2E114F49EB31AB021AFF91F4F3CD21D72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * G_B4_0 = NULL;
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * G_B3_0 = NULL;
	OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * G_B6_0 = NULL;
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * G_B6_1 = NULL;
	OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * G_B5_0 = NULL;
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * G_B5_1 = NULL;
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_0 = ((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_12();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_1 = (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 *)il2cpp_codegen_object_new(OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_m6699828C859097222E0B1FD920380F8D7210F93F(L_1, NULL, (intptr_t)((intptr_t)InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_12(L_1);
	}

IL_0018:
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_2 = ((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_12();
		OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * L_3 = ((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_13();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0035;
		}
	}
	{
		OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * L_4 = (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D *)il2cpp_codegen_object_new(OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D_il2cpp_TypeInfo_var);
		OnChildChangeDelegate__ctor_m7D344228DAC9061F9214A5C110B6FF9A868938BA(L_4, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_13(L_4);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * L_5 = ((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_13();
		OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * L_6 = ((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B6_0 = L_5;
			G_B6_1 = G_B4_0;
			goto IL_0052;
		}
	}
	{
		OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * L_7 = (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 *)il2cpp_codegen_object_new(OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0_il2cpp_TypeInfo_var);
		OnChildRemovedDelegate__ctor_m91046B0216653A7A7B27017BB862F06B0B01628B(L_7, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_14(L_7);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0052:
	{
		OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * L_8 = ((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471(G_B6_1, G_B6_0, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_mED14F02A05D2A34FD677E20E064AB5ADFB8D3F48 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener__ctor_mED14F02A05D2A34FD677E20E064AB5ADFB8D3F48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		InternalListener__ctor_m2B5943677658851E1048BA29B17CB4571AA7C950(__this, /*hidden argument*/NULL);
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C (int32_t ___callbackId0, InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 ** ___childListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * V_0 = NULL;
	{
		V_0 = (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		bool L_1 = InternalListener_TryGetListener_mE7AAAD5FEF21B5DB9EBAF056BC9B54DE4DE560CE(L_0, (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 ** L_2 = ___childListener1;
		InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * L_3 = V_0;
		*((RuntimeObject **)L_2) = (RuntimeObject *)((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 *)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 *)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var)));
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 ** L_4 = ___childListener1;
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_5 = *((InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 **)L_4);
		return (bool)((((int32_t)((((RuntimeObject*)(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 ** L_6 = ___childListener1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnChildChangeHandler_m6A55CF13E076DC597C2D4D88CF1C04139A0A609F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * V_0 = NULL;
	{
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * L_0 = (U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 *)il2cpp_codegen_object_new(U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68_il2cpp_TypeInfo_var);
		U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_m9F41C868929A7BCC91327261DD03C6AE506DD805(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * L_1 = V_0;
		intptr_t L_2 = ___snapshot2;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * L_5 = V_0;
		int32_t L_6 = ___changeType1;
		NullCheck(L_5);
		L_5->set_changeType_2(L_6);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * L_7 = V_0;
		String_t* L_8 = ___previousChildName3;
		NullCheck(L_7);
		L_7->set_previousChildName_3(L_8);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_10, L_9, (intptr_t)((intptr_t)U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mD697F10BBF662DDC263BFEAE66B01AAD40D97A8E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnChildRemovedHandler_m407BE930DF5BD4D1B96EC4CEB1E223D55B2ECB61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * V_0 = NULL;
	{
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * L_0 = (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 *)il2cpp_codegen_object_new(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6_il2cpp_TypeInfo_var);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_mFCB4994A1278A528C8427A0CC1CF5A05D8776915(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * L_5 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, L_5, (intptr_t)((intptr_t)U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mF4E021ED00C6985EA71021921BC53C8803252127_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnCancelledHandler_m09ECFF1D2AF0DBF8E95EE2B5A5BD6234831F9A2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * V_0 = NULL;
	{
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * L_0 = (U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D *)il2cpp_codegen_object_new(U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D_il2cpp_TypeInfo_var);
		U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_mF0748EA78939517A3D2344B4268A7E4CF64923DD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * L_7 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, L_7, (intptr_t)((intptr_t)U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mB3A608C1FAE78AC39EC075E3E0FC738A68EF8B66_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::CreateCppListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_CreateCppListener_m7ECDBCF3B6E83F97050E05C9194446BE15D800CC (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_CreateCppListener_m7ECDBCF3B6E83F97050E05C9194446BE15D800CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_2 = __this->get_internalQuery_4();
		int32_t L_3 = ___callbackId0;
		NullCheck(L_2);
		intptr_t L_4 = InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E(L_2, L_3, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)L_4);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_DestroyCppListener_mEF15ECE1BD9802E8A0C137423B6576D56982727A (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_DestroyCppListener_mEF15ECE1BD9802E8A0C137423B6576D56982727A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->get_cppListener_5();
		InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalChildListener::HasNoListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_HasNoListeners_mA1E2408439EB83CA0E74AAF9B4BD4B7DCFD333F2 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, const RuntimeMethod* method)
{
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_cancelledImpl_7();
		return (bool)((((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_cancelledImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_cancelledImpl_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_cancelledImpl_7();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_cancelledImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_cancelledImpl_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_cancelledImpl_7();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_childAddedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childAddedImpl_mA4A1F860C7694DB476647BE3084D19132B2A3A58 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_add_childAddedImpl_mA4A1F860C7694DB476647BE3084D19132B2A3A58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childAddedImpl_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childAddedImpl_8();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childAddedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childAddedImpl_mFED5A807B577AA0387E18A36F259777F50CAA22C (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_remove_childAddedImpl_mFED5A807B577AA0387E18A36F259777F50CAA22C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childAddedImpl_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childAddedImpl_8();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildAdded_m68E50534A8D39E11145A0EC8CD4DDAC7BCE56133 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9(__this, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_add_childAddedImpl_mA4A1F860C7694DB476647BE3084D19132B2A3A58(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildAdded_mB6CB793F80AD648EFD5F41D2B95502D169B6FEB0 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_remove_childAddedImpl_mFED5A807B577AA0387E18A36F259777F50CAA22C(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7(__this, L_3, /*hidden argument*/NULL);
		InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_childChangedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childChangedImpl_mB6C71EF149F1A4D894622AD60B5459BECC2BE885 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_add_childChangedImpl_mB6C71EF149F1A4D894622AD60B5459BECC2BE885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childChangedImpl_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childChangedImpl_9();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childChangedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childChangedImpl_m077F2738D1F4A42EA98EFEC0E8104BF35B34D5C0 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_remove_childChangedImpl_m077F2738D1F4A42EA98EFEC0E8104BF35B34D5C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childChangedImpl_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childChangedImpl_9();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildChanged(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildChanged_m31844E9A31E56E246B5C616E43A75FB398EA36E8 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9(__this, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_add_childChangedImpl_mB6C71EF149F1A4D894622AD60B5459BECC2BE885(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildChanged(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildChanged_m1E205AD1AF87738E92EC25D1C1DD8A18BCCEE94E (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_remove_childChangedImpl_m077F2738D1F4A42EA98EFEC0E8104BF35B34D5C0(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7(__this, L_3, /*hidden argument*/NULL);
		InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_childMovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childMovedImpl_m96C111E016D64E3D06DCC4C27915EF01FE4735AE (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_add_childMovedImpl_m96C111E016D64E3D06DCC4C27915EF01FE4735AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childMovedImpl_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childMovedImpl_10();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childMovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childMovedImpl_mEB3C0CF2E9585005C89D203F189F25D896BA4292 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_remove_childMovedImpl_mEB3C0CF2E9585005C89D203F189F25D896BA4292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childMovedImpl_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childMovedImpl_10();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildMoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildMoved_m70A7026E183C5D617086AB1AE01CF931A390FAFA (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9(__this, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_add_childMovedImpl_m96C111E016D64E3D06DCC4C27915EF01FE4735AE(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildMoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildMoved_mFBA592C974B8E0BCF8AC86731787B2381C1DD4A8 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_remove_childMovedImpl_mEB3C0CF2E9585005C89D203F189F25D896BA4292(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7(__this, L_3, /*hidden argument*/NULL);
		InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_childRemovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_childRemovedImpl_mCBC3642D25C906B8244EF93C9C9874C9A273150B (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_add_childRemovedImpl_mCBC3642D25C906B8244EF93C9C9874C9A273150B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childRemovedImpl_11();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childRemovedImpl_11();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_childRemovedImpl(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_childRemovedImpl_mBD3F1069F3DE64F2A00AE09971BF6CAEB73ABEA9 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_remove_childRemovedImpl_mBD3F1069F3DE64F2A00AE09971BF6CAEB73ABEA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_0 = __this->get_childRemovedImpl_11();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 ** L_2 = __this->get_address_of_childRemovedImpl_11();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = V_1;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *>((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 **)L_2, ((EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = V_0;
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::add_ChildRemoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_add_ChildRemoved_m48CA4C7FF3661C2E810DE35F90E573D211695549 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9(__this, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_add_childRemovedImpl_mCBC3642D25C906B8244EF93C9C9874C9A273150B(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_add_cancelledImpl_mB221B4559B121A31B652747D2CB56C382A35578E(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::remove_ChildRemoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_remove_ChildRemoved_m593876CEF6AA3E6ABDB4D031C283E99B86C55AC4 (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_2 = ___value0;
		InternalChildListener_remove_childRemovedImpl_mBD3F1069F3DE64F2A00AE09971BF6CAEB73ABEA9(__this, L_2, /*hidden argument*/NULL);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = ___value0;
		InternalChildListener_remove_cancelledImpl_m350E2D17A9714B149D774F5CFC24F368B12E5FC7(__this, L_3, /*hidden argument*/NULL);
		InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
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
// System.Void Firebase.Database.Internal.InternalChildListener_<OnCancelledHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_mF0748EA78939517A3D2344B4268A7E4CF64923DD (U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener_<OnCancelledHandler>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mB3A608C1FAE78AC39EC075E3E0FC738A68EF8B66 (U3COnCancelledHandlerU3Ec__AnonStorey2_tFDAE35DB3326A2C931CBD23C15635C586F24F04D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mB3A608C1FAE78AC39EC075E3E0FC738A68EF8B66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_0 = NULL;
	InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * V_1 = NULL;
	{
		V_0 = (EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var);
		bool L_1 = InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C(L_0, (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 **)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_3 = L_2->get_cancelledImpl_7();
		V_0 = L_3;
	}

IL_001b:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_5 = V_0;
		int32_t L_6 = __this->get_error_1();
		String_t* L_7 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var);
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_8 = DatabaseError_FromError_m24932C549143AAAD1CB96A89BA0E996B72FA0C5B(L_6, L_7, /*hidden argument*/NULL);
		ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * L_9 = (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C *)il2cpp_codegen_object_new(ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_mA59C2F28CA3F79147DED1929090EB1797D1DD3A2(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662(L_5, NULL, L_9, /*hidden argument*/EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662_RuntimeMethod_var);
	}

IL_003e:
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
// System.Void Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_m9F41C868929A7BCC91327261DD03C6AE506DD805 (U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener_<OnChildChangeHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mD697F10BBF662DDC263BFEAE66B01AAD40D97A8E (U3COnChildChangeHandlerU3Ec__AnonStorey0_tFC8166981C2E29D01955B778C9BAD9263AFB1C68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mD697F10BBF662DDC263BFEAE66B01AAD40D97A8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * V_2 = NULL;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_1 = (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF *)il2cpp_codegen_object_new(InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8C38868506AE5CDFC7FD57C6BA4D3A239516CF66(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)NULL;
		V_2 = (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var);
		bool L_3 = InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C(L_2, (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_4 = __this->get_changeType_2();
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = __this->get_changeType_2();
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->get_changeType_2();
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0070;
	}

IL_004c:
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_7 = V_2;
		NullCheck(L_7);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_8 = L_7->get_childAddedImpl_8();
		V_1 = L_8;
		goto IL_0070;
	}

IL_0058:
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_10 = L_9->get_childChangedImpl_9();
		V_1 = L_10;
		goto IL_0070;
	}

IL_0064:
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_12 = L_11->get_childMovedImpl_10();
		V_1 = L_12;
		goto IL_0070;
	}

IL_0070:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_13 = V_1;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_14 = V_1;
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_15 = V_0;
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_16 = V_2;
		NullCheck(L_16);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_17 = L_16->get_database_6();
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_18 = DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565(L_15, L_17, /*hidden argument*/NULL);
		String_t* L_19 = __this->get_previousChildName_3();
		ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * L_20 = (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C *)il2cpp_codegen_object_new(ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m33D2C8DCE0A607E98AE7E8FB115C9D3A0B67AF3E(L_20, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662(L_14, NULL, L_20, /*hidden argument*/EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662_RuntimeMethod_var);
		goto IL_009f;
	}

IL_0099:
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_21);
	}

IL_009f:
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
// System.Void Firebase.Database.Internal.InternalChildListener_<OnChildRemovedHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_mFCB4994A1278A528C8427A0CC1CF5A05D8776915 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener_<OnChildRemovedHandler>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mF4E021ED00C6985EA71021921BC53C8803252127 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t15574D5C77176FF55F02F7FA6DDBC0F58D913CC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_mF4E021ED00C6985EA71021921BC53C8803252127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * V_0 = NULL;
	EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * V_1 = NULL;
	InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * V_2 = NULL;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_1 = (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF *)il2cpp_codegen_object_new(InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8C38868506AE5CDFC7FD57C6BA4D3A239516CF66(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 *)NULL;
		V_2 = (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var);
		bool L_3 = InternalChildListener_TryGetListener_mF9A19B2B5FE995F44FFB7EEA52FF30A7AFDE687C(L_2, (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_5 = L_4->get_childRemovedImpl_11();
		V_1 = L_5;
	}

IL_002a:
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_7 = V_1;
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_8 = V_0;
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_10 = L_9->get_database_6();
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_11 = DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565(L_8, L_10, /*hidden argument*/NULL);
		ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * L_12 = (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C *)il2cpp_codegen_object_new(ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m33D2C8DCE0A607E98AE7E8FB115C9D3A0B67AF3E(L_12, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662(L_7, NULL, L_12, /*hidden argument*/EventHandler_1_Invoke_mA368104D153D8A650F3A404605AB600DD0DC6662_RuntimeMethod_var);
		goto IL_0054;
	}

IL_004e:
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0054:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m6699828C859097222E0B1FD920380F8D7210F93F (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m216DCD772B7A6EF66347271BE13EDEABA8A8575C (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___error1, ___msg2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_m4D9A96E688A3F20E92520A78949C2235A0AC2135 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCancelledDelegate_BeginInvoke_m4D9A96E688A3F20E92520A78949C2235A0AC2135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_t3AF3DD1CFE457D2415326E446ADA3C5D9858E40B_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_mA96062CFCAEF16FE17E85BDBADC0D75A16A53F53 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___previousChildName3' to native representation
	char* ____previousChildName3_marshaled = NULL;
	____previousChildName3_marshaled = il2cpp_codegen_marshal_string(___previousChildName3);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_marshaled);

	// Marshaling cleanup of parameter '___previousChildName3' native representation
	il2cpp_codegen_marshal_free(____previousChildName3_marshaled);
	____previousChildName3_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m7D344228DAC9061F9214A5C110B6FF9A868938BA (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_Invoke_m3169926A5F96CAB4DB8C7C360E66312EC8E76390 (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						GenericVirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						VirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildChangeDelegate_BeginInvoke_m7C9FDCFB564FFA2F7B40C720D50377B3E1A3F5FD (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChildChangeDelegate_BeginInvoke_m7C9FDCFB564FFA2F7B40C720D50377B3E1A3F5FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(ChildChangeType_t0AB2E1B8DBC8E7BD9A7FDCA9825676B18990C2C2_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot2);
	__d_args[3] = ___previousChildName3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_EndInvoke_m4DD615F5BBA946A5F2C3C0E7EABF5C973A03E5BF (OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m91046B0216653A7A7B27017BB862F06B0B01628B (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_Invoke_mE17FC2F20F21CF1A1C77925C1B7915F0384392D0 (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___snapshot1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildRemovedDelegate_BeginInvoke_m7992DCBB81D103B5B55C1A262F53FC01D7015109 (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChildRemovedDelegate_BeginInvoke_m7992DCBB81D103B5B55C1A262F53FC01D7015109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_EndInvoke_mC9467DD43E168BDB87845670D0AD3DAE4F4269EC (OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m8C38868506AE5CDFC7FD57C6BA4D3A239516CF66 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Finalize_m022980E1725B944EEA885EFDDDBE64DF222DBA75 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_m2BCE8A58AB12C82E149558224C07F0F685DFC1FB (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_Dispose_m2BCE8A58AB12C82E149558224C07F0F685DFC1FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_mC6F0062D8B3D1A92D4265F2A1B859985B1CEF179(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_exists_m1088F4E375B915F7E18E030D4B3445C7C2B9381F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalDataSnapshot_exists_mDEB978F15CB2D38F6C4736303225BFCBC4B9D69B_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_mE2031BEB4D340759CAB2652AEA549D150AE77588(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalDataSnapshot_key_string_m5ED428088183E4BB2913F7370ED5DD1E38FAB3BB_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636 (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m2DB9A3EFE74F9FCD50C5699D76E4E9BCAAB3E438(L_0, /*hidden argument*/NULL);
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_2 = (Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 *)il2cpp_codegen_object_new(Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3_il2cpp_TypeInfo_var);
		Variant__ctor_m8DA03321AF412FB90368F016FC27122354ED1661(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalDataSnapshot_value_m28E6324E080EFBAD11B6D1EDED6B2ED61857C636_RuntimeMethod_var);
	}

IL_0022:
	{
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_5 = V_0;
		return L_5;
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
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mC40BD38416FA0F27978FAF657C062B1EC2459D51 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference__ctor_mC40BD38416FA0F27978FAF657C062B1EC2459D51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_mF6E4E368A0821B9D52B81336CCF9688C2464E3EC((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		InternalQuery__ctor_mF21DF4484BBE9B62D4FED81DC964F99090E0449B(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Finalize_m1D6623EA4BC26C1E903C6F91EA32CEBF69763B46 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		InternalQuery_Finalize_m08769260578BA80CDBCD7C254FDE0B61F71B9323(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Dispose_m669628EE80F295E341464EECBD52388B8518550D (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_Dispose_m669628EE80F295E341464EECBD52388B8518550D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = ((InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			((InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m55BEE625D5E862847B85832717A20D00C340FEFC(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			InternalQuery_Dispose_m278D841CAD8BE634474CE3BFB900167807CD3145(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006c:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDatabaseReference::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDatabaseReference_is_valid_m19A2ADBE37D5270D4295AF92AAC8772B44AA6666 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_is_valid_m19A2ADBE37D5270D4295AF92AAC8772B44AA6666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m9E2442B6E1D5FB543E43E876765D6031ACC4E508(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalDatabaseReference_is_valid_m19A2ADBE37D5270D4295AF92AAC8772B44AA6666_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Threading.Tasks.Task Firebase.Database.Internal.InternalDatabaseReference::RemoveValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * InternalDatabaseReference_RemoveValueAsync_mD24383A307B5BB0525A6B6376AA67F3320825217 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_RemoveValueAsync_mD24383A307B5BB0525A6B6376AA67F3320825217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_RemoveValue_mBEC1F6C12B33E68758A3A65D70844348341BED35(L_0, /*hidden argument*/NULL);
		FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D * L_2 = (FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D *)il2cpp_codegen_object_new(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_il2cpp_TypeInfo_var);
		FutureVoid__ctor_mE27D03F52C5F3CE33751637C530DB89045EE97DA(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_tF512775335C40422BAC529CBF374A246FD8ED51D_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_3 = FutureVoid_GetTask_m81734F11961D1BC3DD5D3E313B006EA275C06B83(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20 (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_m6E74BCF3018A9131E78FB48863FD097B1104A00B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalDatabaseReference_url_m091AAD182567606A6C2FB5E4917AF08808AE9E20_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
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
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m9A9C50B1E94E1444EAB3CAC3D826E0199801B2AC (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  InternalFirebaseDatabase_getCPtr_m8663570B90694D8489CA3A9D6E6068D2B455A90C (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_getCPtr_m8663570B90694D8489CA3A9D6E6068D2B455A90C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Finalize_m930D989C5C80A2D6042DC29B46CAB8BF8220CDEA (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m9005D204282432171C8FA81A5587F2056E957BE3 (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_Dispose_m9005D204282432171C8FA81A5587F2056E957BE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3C, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76 (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * V_0 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_m24D798C8552F4F0E5E52F4367027E29BA11329E4(L_0, /*hidden argument*/NULL);
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_2 = (InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 *)il2cpp_codegen_object_new(InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_mC40BD38416FA0F27978FAF657C062B1EC2459D51(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalFirebaseDatabase_GetReference_m243B1066EC0E429995C128D989CA27322E6D6B76_RuntimeMethod_var);
	}

IL_0022:
	{
		InternalDatabaseReference_t2E2F17448BA03451F7994DF4F7C8801C278C2D96 * L_5 = V_0;
		return L_5;
	}
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * V_2 = NULL;
	InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseApp_getCPtr_mF922A07C69469D0EB5A268A9278C495805BDCA4F(L_0, /*hidden argument*/NULL);
			String_t* L_2 = ___url1;
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
			intptr_t L_3 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstanceInternal_m65D464894629633CAF17B3FE4C7EC9132EC17EA0(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			G_B4_0 = ((InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD *)(NULL));
			goto IL_002e;
		}

IL_0027:
		{
			intptr_t L_6 = V_1;
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_7 = (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD *)il2cpp_codegen_object_new(InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD_il2cpp_TypeInfo_var);
			InternalFirebaseDatabase__ctor_m9A9C50B1E94E1444EAB3CAC3D826E0199801B2AC(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
		}

IL_002e:
		{
			V_2 = G_B4_0;
			bool L_8 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_9 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, InternalFirebaseDatabase_GetInstanceInternal_m08100B335DAE7F02A67120B087C116319E82AF4D_RuntimeMethod_var);
		}

IL_003f:
		{
			InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_10 = V_2;
			V_3 = L_10;
			IL2CPP_LEAVE(0x4A, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		int32_t* L_11 = ___init_result_out2;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489 (InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t3E12BA760137C4ECAEB10AEDEAF0C1ADD98602FD * L_0 = ___instance0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = InternalFirebaseDatabase_getCPtr_m8663570B90694D8489CA3A9D6E6068D2B455A90C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_ReleaseReferenceInternal_m47D143F1BD5A975F61B53D41D8FF3E3599F5D23C(L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalFirebaseDatabase_ReleaseReferenceInternal_m359498BC9112DE6F3BFA8BD490776ADDCEA9B489_RuntimeMethod_var);
	}

IL_001b:
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
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m2B5943677658851E1048BA29B17CB4571AA7C950 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener__ctor_m2B5943677658851E1048BA29B17CB4571AA7C950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_0 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		int32_t L_2 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_uidGenerator_0();
		int32_t L_3 = L_2;
		((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->set_uidGenerator_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_uid_2(L_3);
		IL2CPP_LEAVE(0x31, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_mE7AAAD5FEF21B5DB9EBAF056BC9B54DE4DE560CE (int32_t ___uid0, InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 ** ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_TryGetListener_mE7AAAD5FEF21B5DB9EBAF056BC9B54DE4DE560CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_0 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_2 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = ___uid0;
		InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 ** L_4 = ___listener1;
		NullCheck(L_2);
		bool L_5 = Dictionary_2_TryGetValue_mDB6F3883AAF8AE156ED6115F45705B0BD2EF7564(L_2, L_3, (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_mDB6F3883AAF8AE156ED6115F45705B0BD2EF7564_RuntimeMethod_var);
		V_1 = L_5;
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Finalize_m9212808D914F542EE4ABECB5CFB5EB58B741B243 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		InternalListener_Dispose_m20FB081D5F683F170BA24B9915580A93C3F84B14(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m20FB081D5F683F170BA24B9915580A93C3F84B14 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_Dispose_m20FB081D5F683F170BA24B9915580A93C3F84B14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_0 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_2 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = __this->get_uid_2();
		NullCheck(L_2);
		Dictionary_2_Remove_m759A5DF74A2AF4529129D311F5AF5EDB86A731D9(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_m759A5DF74A2AF4529129D311F5AF5EDB86A731D9_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::BeforeAddingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9 (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_BeforeAddingListener_m12CFF96D85EAED47129A36F6499AD18C23B3FFA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Firebase.Database.Internal.InternalListener::HasNoListeners() */, __this);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_1 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_3 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_4 = __this->get_uid_2();
		NullCheck(L_3);
		Dictionary_2_set_Item_mD6043A580B0591AF461C0264F9F0602ECBF72E9E(L_3, L_4, __this, /*hidden argument*/Dictionary_2_set_Item_mD6043A580B0591AF461C0264F9F0602ECBF72E9E_RuntimeMethod_var);
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		int32_t L_6 = __this->get_uid_2();
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::CreateCppListener(System.Int32) */, __this, L_6);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::AfterRemovingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_AfterRemovingListener_m47D3B3202B7E68A0091E98A980BD75DC52864B9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Firebase.Database.Internal.InternalListener::HasNoListeners() */, __this);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_1 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_3 = ((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_4 = __this->get_uid_2();
		NullCheck(L_3);
		Dictionary_2_Remove_m759A5DF74A2AF4529129D311F5AF5EDB86A731D9(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m759A5DF74A2AF4529129D311F5AF5EDB86A731D9_RuntimeMethod_var);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__cctor_mB00B37F91AB7E2CFBE7B480A9264571D86BF035F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener__cctor_mB00B37F91AB7E2CFBE7B480A9264571D86BF035F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->set_uidGenerator_0(0);
		Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D * L_0 = (Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D *)il2cpp_codegen_object_new(Dictionary_2_t480C1BCCB6A7581E042155212E26B4BEB4BD404D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C45005434527718C932F8D736F0A4625930F67A(L_0, /*hidden argument*/Dictionary_2__ctor_m2C45005434527718C932F8D736F0A4625930F67A_RuntimeMethod_var);
		((InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var))->set_databaseCallbacks_1(L_0);
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
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_mF21DF4484BBE9B62D4FED81DC964F99090E0449B (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_m08769260578BA80CDBCD7C254FDE0B61F71B9323 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m278D841CAD8BE634474CE3BFB900167807CD3145 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_Dispose_m278D841CAD8BE634474CE3BFB900167807CD3145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m8D3DB2B5064CC91B552445F935FF7B6AF3AC43B4(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalQuery::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalQuery_is_valid_m2D98866E1C761FD07FD539DB0CC1250C1D2793B4 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_is_valid_m2D98866E1C761FD07FD539DB0CC1250C1D2793B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_m2997990C2B5D208CEF92F7457093B00DE6E6E56E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalQuery_is_valid_m2D98866E1C761FD07FD539DB0CC1250C1D2793B4_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr Firebase.Database.Internal.InternalQuery::CreateValueListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1 (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		int32_t L_1 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_CreateValueListener_mA5D4196B0EA5FC47D1A4DCB618F3F9F5E224594A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248 (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_m20E354F2D2B5DBB89755B1C57D6C79F09036E99A((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___cancelledCallback0, OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * ___valueChangedCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_0 = ___cancelledCallback0;
		OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * L_1 = ___valueChangedCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_mEF7F270BD1FFAA2BF2D91B6FF0948D64F1874F33(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.Internal.InternalQuery::CreateChildListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E (InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		int32_t L_1 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_CreateChildListener_mAA55E9C963F817B6B7DC48E1D6B593061CB49A54(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalQuery_CreateChildListener_mA02C7B35D1EAFD6E7A49F0DC9AECB68219C93B1E_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596 (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_mB1D283A47153A12671CE4E820485AE520421A661((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InternalQuery_DestroyChildListener_mFB211319188D13A501498DA52E6F5042F2007596_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener_OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener_OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener_OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471 (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * ___cancelledCallback0, OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * ___childChangeCallback1, OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * ___childRemovedCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_0 = ___cancelledCallback0;
		OnChildChangeDelegate_t7972E203A0B10DC25D2CE7FAF3A7327D3A79025D * L_1 = ___childChangeCallback1;
		OnChildRemovedDelegate_tDB83F6EEC291EF9B15876554D4EF4DD8F294F8D0 * L_2 = ___childRemovedCallback2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t89A8E4706090D0BC86C8AD98206687BB8EC5C49E_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_mFAB8E3C094791F2288BFE1E23F8717AD741CEFB3(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalQuery_RegisterChildListenerCallbacks_m0C49E088DD6FA54EED5DF621FE6B8580EA92A471_RuntimeMethod_var);
	}

IL_0018:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__cctor_mF7296A1EF84942B94C5BC236D2105D1899E053D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener__cctor_mF7296A1EF84942B94C5BC236D2105D1899E053D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * G_B4_0 = NULL;
	OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * G_B3_0 = NULL;
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_0 = ((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_1 = (OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 *)il2cpp_codegen_object_new(OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_m6699828C859097222E0B1FD920380F8D7210F93F(L_1, NULL, (intptr_t)((intptr_t)InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_8(L_1);
	}

IL_0018:
	{
		OnCancelledDelegate_t9C0945EF74982FD2326D50CA9B7C7AAF9FF9F854 * L_2 = ((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * L_3 = ((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0035;
		}
	}
	{
		OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * L_4 = (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE *)il2cpp_codegen_object_new(OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m3299D6FDB266A490DBEA5FAFF2536487AAC7CD5F(L_4, NULL, (intptr_t)((intptr_t)InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB_RuntimeMethod_var), /*hidden argument*/NULL);
		((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_9(L_4);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * L_5 = ((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		InternalQuery_RegisterValueListenerCallbacks_m8AE41A9E7DE48E50BAA573F51BC68C624D7C4205(G_B4_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_m5D70105CE3A2753202E3CE650EC8CFE3A1125E8F (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * __this, InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener__ctor_m5D70105CE3A2753202E3CE650EC8CFE3A1125E8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		InternalListener__ctor_m2B5943677658851E1048BA29B17CB4571AA7C950(__this, /*hidden argument*/NULL);
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m2754D842670C1BE5B2A1797CACB2AB69EE3B62D5 (int32_t ___callbackId0, InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 ** ___valueListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_TryGetListener_m2754D842670C1BE5B2A1797CACB2AB69EE3B62D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * V_0 = NULL;
	{
		V_0 = (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tE14D48B334C420926F90912BA732706D665DDE86_il2cpp_TypeInfo_var);
		bool L_1 = InternalListener_TryGetListener_mE7AAAD5FEF21B5DB9EBAF056BC9B54DE4DE560CE(L_0, (InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 ** L_2 = ___valueListener1;
		InternalListener_tE14D48B334C420926F90912BA732706D665DDE86 * L_3 = V_0;
		*((RuntimeObject **)L_2) = (RuntimeObject *)((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 *)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 *)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var)));
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 ** L_4 = ___valueListener1;
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * L_5 = *((InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 **)L_4);
		return (bool)((((int32_t)((((RuntimeObject*)(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 ** L_6 = ___valueListener1;
		*((RuntimeObject **)L_6) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_OnValueChangedHandler_mA138B731CE352A2E2D83AED1F3ED655B26863AFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * V_0 = NULL;
	{
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * L_0 = (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F *)il2cpp_codegen_object_new(U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F_il2cpp_TypeInfo_var);
		U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_mDBA854A40B9156999FB721ED706694A86CD0B24F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * L_5 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, L_5, (intptr_t)((intptr_t)U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mB3523B5563CDBE23897EA6384FA195D7DD6861B5_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_OnCancelledHandler_m2270ADC06B8677B2610171A5573CCF8A0F8E9281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * V_0 = NULL;
	{
		U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * L_0 = (U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA *)il2cpp_codegen_object_new(U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA_il2cpp_TypeInfo_var);
		U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_m49443558F9C2D677832013808FE4324596363D0D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * L_7 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, L_7, (intptr_t)((intptr_t)U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mADD788F7570BAB2E4AEED79A205DDAF3DD978792_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::CreateCppListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_CreateCppListener_m2D54D66D507214709C2B8534A3223EB372A5D20B (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_CreateCppListener_m2D54D66D507214709C2B8534A3223EB372A5D20B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_2 = __this->get_internalQuery_4();
		int32_t L_3 = ___callbackId0;
		NullCheck(L_2);
		intptr_t L_4 = InternalQuery_CreateValueListener_mACAE967069D314C1E4A870205BF6F3A809E6E5E1(L_2, L_3, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)L_4);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_DestroyCppListener_m3190D3264D03DC4134B1D721DB12581A2DFA5A99 (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_DestroyCppListener_m3190D3264D03DC4134B1D721DB12581A2DFA5A99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->get_cppListener_5();
		InternalQuery_DestroyValueListener_m6DCFEB3E46047BDDE3480BB2F92D0CABB948D248((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalValueListener::HasNoListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_HasNoListeners_m7349C97E3ED0A6CFBB08F7788A4D28944AF1D2E1 (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * __this, const RuntimeMethod* method)
{
	{
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_0 = __this->get_valueChangedImpl_7();
		return (bool)((((RuntimeObject*)(EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
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
// System.Void Firebase.Database.Internal.InternalValueListener_<OnCancelledHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_m49443558F9C2D677832013808FE4324596363D0D (U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener_<OnCancelledHandler>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mADD788F7570BAB2E4AEED79A205DDAF3DD978792 (U3COnCancelledHandlerU3Ec__AnonStorey1_tFE31F7A5EF7E588A58A7F5A99B1742ED545656BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mADD788F7570BAB2E4AEED79A205DDAF3DD978792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * V_0 = NULL;
	InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * V_1 = NULL;
	{
		V_0 = (EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var);
		bool L_1 = InternalValueListener_TryGetListener_m2754D842670C1BE5B2A1797CACB2AB69EE3B62D5(L_0, (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 **)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_3 = L_2->get_valueChangedImpl_7();
		V_0 = L_3;
	}

IL_001b:
	{
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_5 = V_0;
		int32_t L_6 = __this->get_error_1();
		String_t* L_7 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E_il2cpp_TypeInfo_var);
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_8 = DatabaseError_FromError_m24932C549143AAAD1CB96A89BA0E996B72FA0C5B(L_6, L_7, /*hidden argument*/NULL);
		ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * L_9 = (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 *)il2cpp_codegen_object_new(ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m3900BACA1264703CD7F6D05E20E2C93DE4E92257(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m940162064177EBC17FF32AAE4FEFE115CD04E987(L_5, NULL, L_9, /*hidden argument*/EventHandler_1_Invoke_m940162064177EBC17FF32AAE4FEFE115CD04E987_RuntimeMethod_var);
	}

IL_003e:
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
// System.Void Firebase.Database.Internal.InternalValueListener_<OnValueChangedHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_mDBA854A40B9156999FB721ED706694A86CD0B24F (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener_<OnValueChangedHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mB3523B5563CDBE23897EA6384FA195D7DD6861B5 (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB54CFB3E183D4723876D7E7473202DEF3F011D7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_mB3523B5563CDBE23897EA6384FA195D7DD6861B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * V_0 = NULL;
	EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * V_1 = NULL;
	InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * V_2 = NULL;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_1 = (InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF *)il2cpp_codegen_object_new(InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8C38868506AE5CDFC7FD57C6BA4D3A239516CF66(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 *)NULL;
		V_2 = (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var);
		bool L_3 = InternalValueListener_TryGetListener_m2754D842670C1BE5B2A1797CACB2AB69EE3B62D5(L_2, (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_5 = L_4->get_valueChangedImpl_7();
		V_1 = L_5;
	}

IL_002a:
	{
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		EventHandler_1_t4D02F70FB1774E3DE3F4C4D074384EC57E01F3B6 * L_7 = V_1;
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_8 = V_0;
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_10 = L_9->get_database_6();
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_11 = DataSnapshot_CreateSnapshot_m1445BDC3B4559B9071E3B435F0A2161B722F3565(L_8, L_10, /*hidden argument*/NULL);
		ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * L_12 = (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 *)il2cpp_codegen_object_new(ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m2C4140EC842002EC835F45A4466C570B82D72AE2(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m940162064177EBC17FF32AAE4FEFE115CD04E987(L_7, NULL, L_12, /*hidden argument*/EventHandler_1_Invoke_m940162064177EBC17FF32AAE4FEFE115CD04E987_RuntimeMethod_var);
		goto IL_0053;
	}

IL_004d:
	{
		InternalDataSnapshot_t163CA43B2E0355EA51E1F818ABC38CED1496CFFF * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0053:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78 (OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener_OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m5303F3EE4ED1053A469A7DF745616D4F3332063A (OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener_OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m0F5275ADC0C29EBF3122F7E33033B194962C0CD3 (OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___error1, ___msg2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener_OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_mE743791ED11099B3C968CC843AD33CFBEB68C8BB (OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCancelledDelegate_BeginInvoke_mE743791ED11099B3C968CC843AD33CFBEB68C8BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_t3AF3DD1CFE457D2415326E446ADA3C5D9858E40B_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Firebase.Database.Internal.InternalValueListener_OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_mBC369C1417584A1D456D068D45F662AE22936DC9 (OnCancelledDelegate_tDACFD3E625DAA173B5BCED64C0DF533AB2D22B78 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m3299D6FDB266A490DBEA5FAFF2536487AAC7CD5F (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_Invoke_m3951EFC5D52C16B8CB637D4F8D4742467CAE9978 (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___snapshot1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValueChangedDelegate_BeginInvoke_m4E01654575A5E2F544FBB15ED8FA69DD592F2F82 (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnValueChangedDelegate_BeginInvoke_m4E01654575A5E2F544FBB15ED8FA69DD592F2F82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.InternalValueListener_OnValueChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_EndInvoke_m3C065C341B66133A0333A6BCE1AFE9742D17C26E (OnValueChangedDelegate_t9042B4B2885AF711530BE6D927F474528B1187CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71 (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * ___internalQuery0, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_0 = ___internalQuery0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.Internal.InternalQuery::is_valid() */, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteralFBAE38FB8D02D5E169BAF4BEBE9B0103A0ECC878, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Query__ctor_mB67178E24FE54A71EFF699DDA527FDC553D12C71_RuntimeMethod_var);
	}

IL_001c:
	{
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_3 = ___internalQuery0;
		__this->set_internalQuery_0(L_3);
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_4 = ___database1;
		__this->set_database_1(L_4);
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_5 = ___internalQuery0;
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_6 = ___database1;
		InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 * L_7 = (InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64 *)il2cpp_codegen_object_new(InternalValueListener_t485EB1A9D2AEFE2503413983D04C5872D5222F64_il2cpp_TypeInfo_var);
		InternalValueListener__ctor_m5D70105CE3A2753202E3CE650EC8CFE3A1125E8F(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->set_valueListener_2(L_7);
		InternalQuery_t21C046909ACDB47E923504683ABEFB062DC7DC06 * L_8 = ___internalQuery0;
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_9 = ___database1;
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_10 = (InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 *)il2cpp_codegen_object_new(InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98_il2cpp_TypeInfo_var);
		InternalChildListener__ctor_mED14F02A05D2A34FD677E20E064AB5ADFB8D3F48(L_10, L_8, L_9, /*hidden argument*/NULL);
		__this->set_childListener_3(L_10);
		return;
	}
}
// System.Void Firebase.Database.Query::add_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_add_ChildAdded_mAE428ECF92979873B12539FE8FEE91208849756B (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_add_ChildAdded_m68E50534A8D39E11145A0EC8CD4DDAC7BCE56133(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::remove_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_remove_ChildAdded_m40047599CD9E979471690433262AE833DD353C11 (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_remove_ChildAdded_mB6CB793F80AD648EFD5F41D2B95502D169B6FEB0(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::add_ChildChanged(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_add_ChildChanged_m3ABE016F2E025BC0CAAEB3AB500A52E1EA10145C (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_add_ChildChanged_m31844E9A31E56E246B5C616E43A75FB398EA36E8(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::remove_ChildChanged(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_remove_ChildChanged_mAE76BA4A7BE16810321378737E5DEFBF39123047 (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_remove_ChildChanged_m1E205AD1AF87738E92EC25D1C1DD8A18BCCEE94E(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::add_ChildRemoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_add_ChildRemoved_mE8E6F6C643BA4B95D59AF7F81C53BD40935A697F (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_add_ChildRemoved_m48CA4C7FF3661C2E810DE35F90E573D211695549(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::remove_ChildRemoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_remove_ChildRemoved_m6E81A6142BDDA048CE6C1DD26037322403653DB5 (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_remove_ChildRemoved_m593876CEF6AA3E6ABDB4D031C283E99B86C55AC4(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::add_ChildMoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_add_ChildMoved_mC6E976341E5E61E019517201C8E532217719E011 (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_add_ChildMoved_m70A7026E183C5D617086AB1AE01CF931A390FAFA(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::remove_ChildMoved(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_remove_ChildMoved_m79AA7C7B1E3675C8909ABFC3308D85964361CB3E (Query_t11A2875BDE0FAF610CEA2D3A9D5021F79EC2DDC0 * __this, EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalChildListener_tB75954640DA9350BFDB0DE13D2689BBB4F16EB98 * L_0 = __this->get_childListener_3();
		EventHandler_1_t58DEC8F8EEDB3E990BD5D38E9E48F576C019A2F2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalChildListener_remove_ChildMoved_mFBA592C974B8E0BCF8AC86731787B2381C1DD4A8(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m2C4140EC842002EC835F45A4466C570B82D72AE2 (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___snapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueChangedEventArgs__ctor_m2C4140EC842002EC835F45A4466C570B82D72AE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_0 = ___snapshot0;
		ValueChangedEventArgs_set_Snapshot_mCFCD93B7AA3B4528B80FDB45936ADD99FAED6E50_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m3900BACA1264703CD7F6D05E20E2C93DE4E92257 (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueChangedEventArgs__ctor_m3900BACA1264703CD7F6D05E20E2C93DE4E92257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = ___error0;
		ValueChangedEventArgs_set_DatabaseError_mBA7E32690CAB3E2E4B8961E1CB44FB444F00EFB8_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mCFCD93B7AA3B4528B80FDB45936ADD99FAED6E50 (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mBA7E32690CAB3E2E4B8961E1CB44FB444F00EFB8 (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m04B9A61BDDBD0183829A6C9926AFD3C437830D0A_inline (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_mAC1D1B4CFBA5E5EE464D9A87D58667C502DDE7A6_inline (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m65AA5165DCD043D2F3EE1B59F538E36EEAD5A57E_inline (ChildChangedEventArgs_t232CE1009694D9E08DCCC15C6671AEBE4DE32A9C * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Code_mD1D6332727D138D8EEB79BBFFA9B9C64B668E82F_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mC7808E08CF949A175E00A2A8DB267764BEEFBEEE_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m46300A2CF20B7C0B6545240B77F2E6884BF763D5_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m218BDBF80FAE0272698C69D320826E405C37D8F3_inline (DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m42B361A9B3FB8D71C2AD04AB2B9E8415B88E7E19_inline (DatabaseReference_t4E038AE79294861CAC824B5B42B0D6D534B77EAA * __this, FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m07D168318F8518613EF8C89AC5009912F4C61616_inline (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseDatabase_get_App_mD23BAF80BC5BA9A5006029E0BC5A3F0B5997BAF9_inline (FirebaseDatabase_tAB744AFA1F7D8BC7E57A5D4ABA3843FBA4AE03F9 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = __this->get_U3CAppU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495AFirebase_Database_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields*)il2cpp_codegen_static_fields_for(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var))->get_U3CAppConfigU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_mB5E945165A8F7DFAA21F0AD3A9E99CC3438943C5_inline (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mCFCD93B7AA3B4528B80FDB45936ADD99FAED6E50_inline (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t8639F835E0E953A757E904C844EC1BE68CDE48C0 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mBA7E32690CAB3E2E4B8961E1CB44FB444F00EFB8_inline (ValueChangedEventArgs_tC71A2CA5A0FB70C3DB1E320E0B5337A4CA183AA4 * __this, DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t9E2420EA668D4A53CDBB6B3020D1F9184933532E * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
