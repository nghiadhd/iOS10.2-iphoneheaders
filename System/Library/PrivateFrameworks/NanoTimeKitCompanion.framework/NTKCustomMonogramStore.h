/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handlePrefsChanged;
-(id)_customMonogramFromPrefs;
-(void)_notifyClientsOfChange;
-(id)customMonogram;
-(void)setCustomMonogram:(id)arg1 ;
@end

