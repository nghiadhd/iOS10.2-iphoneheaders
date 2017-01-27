/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSParsecSearchMescalSession : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _session;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned long long _versionNumber;

}
-(id)init;
-(void)dealloc;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(id)initWithVersionNumber:(unsigned long long)arg1 ;
-(id)exchangedDataForData:(id)arg1 ;
-(id)signatureStringForData:(id)arg1 ;
@end
