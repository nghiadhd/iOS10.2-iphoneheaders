/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCServerBag : NSObject {

	opaque_pthread_cond_t isLoadedCondition;
	opaque_pthread_mutex_t isLoadedMutex;
	BOOL isLoaded;
	id observer;

}
+(id)sharedInstance;
+(void)pullStoreBagKeys;
+(BOOL)verifyRequiredKeys:(id*)arg1 ;
+(BOOL)verifyRequiredVoiceChatKeys:(id*)arg1 ;
+(BOOL)verifyRequiredKeys:(id)arg1 withError:(id*)arg2 ;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg1 ;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;
@end

