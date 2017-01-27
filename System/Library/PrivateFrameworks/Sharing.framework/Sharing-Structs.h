/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __SFBrowser* SFBrowserRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __SFOperation* SFOperationRef;

typedef struct __SFNode* SFNodeRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
} SCD_Struct_SF7;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned awdlVersion : 1;
	unsigned bluetoothDiscovery : 1;
	unsigned bonjourDiscovery : 1;
	unsigned bonjourResolveComplete : 1;
	unsigned bonjourTXTRecordDiscovery : 1;
	unsigned errorCode : 1;
	unsigned identityQueryComplete : 1;
	unsigned platform : 1;
	unsigned rssi : 1;
	unsigned tcpConnectionComplete : 1;
	unsigned tlsHandshakeComplete : 1;
	unsigned totalDiscovery : 1;
	unsigned verifiableIdentity : 1;
} SCD_Struct_AW9;

typedef struct {
	unsigned startTimestamp : 1;
	unsigned timestamp : 1;
	unsigned firstDiscovery : 1;
	unsigned maxPeersDiscovered : 1;
	unsigned sessionDuration : 1;
	unsigned totalPeersDiscovered : 1;
	unsigned transfersCompleted : 1;
	unsigned transfersInitiated : 1;
	unsigned legacyMode : 1;
} SCD_Struct_AW10;

typedef struct {
	unsigned timestamp : 1;
	unsigned accountStatus : 1;
	unsigned errorCode : 1;
} SCD_Struct_AW11;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
	unsigned anyZone : 1;
	unsigned ourZone : 1;
} SCD_Struct_AW12;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
} SCD_Struct_AW13;

typedef struct {
	unsigned timestamp : 1;
	unsigned bannerVisibleMs : 1;
	unsigned beginEditingCount : 1;
	unsigned closeAction : 1;
	unsigned endEditingCount : 1;
	unsigned mainUIVisibleMs : 1;
	unsigned openAction : 1;
	unsigned directInput : 1;
	unsigned externalInput : 1;
	unsigned secureInput : 1;
} SCD_Struct_AW14;

typedef struct {
	unsigned timestamp : 1;
	unsigned activityLevel : 1;
	unsigned eventType : 1;
	unsigned otherDevices : 1;
	unsigned bestIsMe : 1;
	unsigned skipScanPhoneCall : 1;
	unsigned skipScanVeryActive : 1;
} SCD_Struct_AW15;

typedef struct {
	unsigned timestamp : 1;
	unsigned connectErrors : 1;
	unsigned errorCode : 1;
	unsigned pairingMs : 1;
	unsigned userResponseMs : 1;
	unsigned userAccepted : 1;
} SCD_Struct_AW16;

typedef struct {
	unsigned timestamp : 1;
	unsigned deviceRole : 1;
	unsigned deviceSide : 1;
	unsigned primaryLocation : 1;
	unsigned rssi : 1;
	unsigned secondaryLocation : 1;
	unsigned smoothedRSSI : 1;
	unsigned outOfBoxMode : 1;
} SCD_Struct_AW17;

typedef struct {
	unsigned timestamp : 1;
	unsigned dismissType : 1;
	unsigned rssi : 1;
	unsigned smoothedRSSI : 1;
	unsigned visibleMs : 1;
} SCD_Struct_AW18;

typedef struct {
	unsigned timestamp : 1;
	unsigned audioSourceCount : 1;
	unsigned audioState : 1;
	unsigned caseBatteryLevel : 1;
	unsigned caseBatteryPercent : 1;
	unsigned deviceRole : 1;
	unsigned deviceSide : 1;
	unsigned myBatteryLevel : 1;
	unsigned myBatteryPercent : 1;
	unsigned otherBatteryLevel : 1;
	unsigned otherBatteryPercent : 1;
	unsigned primaryLocation : 1;
	unsigned rssi : 1;
	unsigned secondaryLocation : 1;
	unsigned smoothedRSSI : 1;
	unsigned caseBatteryCharging : 1;
	unsigned myBatteryCharging : 1;
	unsigned otherBatteryCharging : 1;
	unsigned otherDeviceInCase : 1;
	unsigned outOfBoxMode : 1;
	unsigned paired : 1;
} SCD_Struct_AW19;

typedef struct __channel* channelRef;

typedef struct __channel_ring_desc* channel_ring_descRef;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct BTPairingAgentImpl* BTPairingAgentImplRef;

