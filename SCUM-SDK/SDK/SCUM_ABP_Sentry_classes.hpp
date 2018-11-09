#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Sentry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Sentry.ABP_Sentry_C
// 0x2830 (0x2C70 - 0x0440)
class UABP_Sentry_C : public USentryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7F8C22144F1C66D53C9442BE1345C0C9;// 0x0448(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_225A66FD44A9654BFE650284510FB1A5;// 0x0490(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_57BB769D4A583FDC40F1FF914BD5ACA2;// 0x0570(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_654B54A642CF9D21B04787B14448912F;// 0x0650(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0F7CF23A4BA4E22EB3483C80D52E4913;// 0x06A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22431AFD4B7482E1ADDBBCAA1CF074DF;// 0x06E8(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_107BBA394F0888E43040DDB4E2C4D449;// 0x0798(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CA3DA3B6483635D598B44DAE0DA7B79D;      // 0x07E8(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0858(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0CADA61B44AD4DA46E0BC591B586DEA4;    // 0x0860(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_92F182F54AE3F7ACA72A36A632B36F75;    // 0x0AA0(0x0240)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5D93AAEA45DBB9380F1B768DA04A71EC;// 0x0CE0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DC07931C4BE34541F4B64A804BE62712;// 0x0D30(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FDD99C0B4DDC7A06932937A96C120B94;// 0x0E10(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B6FC9DC14D6E32FAA6F7AA8C95F32F5E;// 0x0E60(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72E905174F42726DC16408AAB3C45C3C;// 0x0EB0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6B4BDAAA49403ACCD0CD658B804D0B2B;// 0x0F80(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E1F61DB74F1BA581194DCA91256CAE30;// 0x1060(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B849C324F5DB05C544DC2B7DCF38CFA;// 0x1140(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51A9B61441BCB16C55B75699B5F87667;// 0x1188(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D93B5804C7A512B8903A6A0BFB0EBAC;// 0x11D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8637F5C84EFB7340816201B76A94689A;// 0x1218(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8699250846058335E8C7A7A29B406D31;// 0x1260(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC9BABE0423AF10D5CD68295E73ED55F;// 0x12A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FD0709C4E4645472D9BA38D6C5A8814;// 0x12F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DF5AD7D44165D09B86B0CAC3C94DC34;// 0x1338(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_224579B0443B087EA1CF68A7F110BFCD;// 0x1380(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E31EDABD40108EBBD8C178A337F6A8D5;// 0x13C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97A4D42448BA672E1A239B80363B181D;// 0x1410(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0EC0616F4B807C8161B22BBF50151F34;// 0x1458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E3570E849D8B8478FF728BAC0D09040;// 0x14A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_378D4F024BAAD16CC98F79A181288324;// 0x14E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF0D30F945BA9D160BF661A1008F7CF6;// 0x1530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_016C4BAE4E482128BF6F13A8F38DFD89;// 0x1578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59A033F943B5DDAD9D5A2F96C285D69F;// 0x15C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0598AD7D4BABCE175F8EC2B3630CA81D;// 0x1608(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26FD67634B84715189ACA78637B1F234;// 0x1650(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81A95CD947640CEC9BD9BA8D023B24FF;// 0x1698(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F8EF56244D0966AF9819F99F3165624E;// 0x16E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A338727E4763175198883C9CA2E3E38E;// 0x1728(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51D639024D06F6325C77A9BDA889EEAB;// 0x1770(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FAE32524AE211AA43A467B244B4A773;// 0x17B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B5A81A143C0E00A7EF9DB8AB2599D69;// 0x1800(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B085D96942D346E8FD2F5F9007987C28;// 0x1848(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68E7DCC9498753B0B4BE608D17F8831C;// 0x1918(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDC00B3D48C189CA442B1AA9EBED213E;// 0x19C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3E12A314EB0308268071393784B23CB;// 0x1A78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5519109044E8D17613568F9343D834FF;// 0x1AC0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8965A9A34A0D2DBBB6F8189EA6B765C5;// 0x1B70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EBE951C14B46FA8FBDA8AFBB0215AE1A;// 0x1BB8(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_D76A105947866753B35D9691762B2C7C;// 0x1C68(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A39ACE374B25743C690D359448A75D72;// 0x1D88(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_FC3C648141B893DCABFFB6A7D0DFC7B7;// 0x1E38(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB562EAE4795A97DC4D310A036EE1741;// 0x1F58(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E5D6C12C40A715269C479CBC052A6E74;// 0x2008(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF96DF5B4ABDB7E4A12D379BB1EE66BA;// 0x2050(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7B0CA76D4C0A4F3F8039689E21E830B0;// 0x2098(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8753FC624F305DA0CB020491BE7221F9;// 0x20E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4D14D70F47D443A20CE43380881792AE;// 0x2190(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8131055F404E3843011BF7B301D9D2C3;// 0x21D8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E9DC41BC46481703F655D1B1F9ADDD00;// 0x2288(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF8FD8BA45165BFB22DC2AA497003E3D;// 0x22D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3249C271478F8F025E850198CD618D06;// 0x2380(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A68AFA4541BF7A012F9154A5EAFE8681;// 0x23C8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4C40223248CCAB75017795AEC90FDBDA;// 0x2410(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02AA416E4E8D373042EF188E2E7C18C2;// 0x2458(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D333284430199C5EAD8EE8D873F644D;// 0x2508(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_06F4F16548A712912CBB9D9D7C21630A;// 0x2550(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_235343494A12B3E8AE352A8C8FADC883;// 0x25C0(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_860A49144FD4E57ABE6175A714EA5BC4;// 0x2630(0x0120)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_EE668E3E4BABFED021564EB416FA272F;// 0x2750(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B08E2C447884BFB6C7706BE013553CD;// 0x2870(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7341D3CC40BD6CC4D19CA1A27E88A9E4;// 0x2920(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EAE389E542F1CC4A328C62B0E57B6FC1;// 0x2968(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_2849954B4F5E5C38070F338E06AEF7EF;      // 0x2A48(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CD0EADAD44675C75AC8702AEECED06A5;      // 0x2A90(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3C274AB540EA5CF519DADE8710236757;// 0x2B00(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FD62D7C3455B28BE6A9004ACC7FB4433;// 0x2BE0(0x0050)
	struct FRandomStream                               RandomStream;                                             // 0x2C30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ABP_Sentry_C*                                Sentry;                                                   // 0x2C38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation_1;                               // 0x2C40(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     RightFootEffectorLocation_1;                              // 0x2C4C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    LeftFootRotation_1;                                       // 0x2C58(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    RightFootRotation_1;                                      // 0x2C64(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Sentry.ABP_Sentry_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_224579B0443B087EA1CF68A7F110BFCD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_E31EDABD40108EBBD8C178A337F6A8D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_97A4D42448BA672E1A239B80363B181D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequenceEvaluator_06F4F16548A712912CBB9D9D7C21630A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequenceEvaluator_235343494A12B3E8AE352A8C8FADC883();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TwoWayBlend_860A49144FD4E57ABE6175A714EA5BC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TwoWayBlend_EE668E3E4BABFED021564EB416FA272F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequencePlayer_7B08E2C447884BFB6C7706BE013553CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_8FD0709C4E4645472D9BA38D6C5A8814();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_0EC0616F4B807C8161B22BBF50151F34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_DC9BABE0423AF10D5CD68295E73ED55F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_8699250846058335E8C7A7A29B406D31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_8637F5C84EFB7340816201B76A94689A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_3E3570E849D8B8478FF728BAC0D09040();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_378D4F024BAAD16CC98F79A181288324();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_AF0D30F945BA9D160BF661A1008F7CF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_0D93B5804C7A512B8903A6A0BFB0EBAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_51A9B61441BCB16C55B75699B5F87667();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_016C4BAE4E482128BF6F13A8F38DFD89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_0598AD7D4BABCE175F8EC2B3630CA81D();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TwoWayBlend_FC3C648141B893DCABFFB6A7D0DFC7B7();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TwoWayBlend_D76A105947866753B35D9691762B2C7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_5B849C324F5DB05C544DC2B7DCF38CFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_26FD67634B84715189ACA78637B1F234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_BlendListByBool_72E905174F42726DC16408AAB3C45C3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequencePlayer_FDC00B3D48C189CA442B1AA9EBED213E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_SequencePlayer_68E7DCC9498753B0B4BE608D17F8831C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_BlendListByBool_B085D96942D346E8FD2F5F9007987C28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LookAt_92F182F54AE3F7ACA72A36A632B36F75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_LookAt_0CADA61B44AD4DA46E0BC591B586DEA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_6B5A81A143C0E00A7EF9DB8AB2599D69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_7FAE32524AE211AA43A467B244B4A773();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_51D639024D06F6325C77A9BDA889EEAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_81A95CD947640CEC9BD9BA8D023B24FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentry_AnimGraphNode_TransitionResult_A338727E4763175198883C9CA2E3E38E();
	void ExecuteUbergraph_ABP_Sentry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
