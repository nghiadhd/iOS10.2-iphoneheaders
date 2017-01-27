/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@class NSMutableDictionary;

@interface MFError : NSError {

	NSMutableDictionary* _moreUserInfo;

}
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5 ;
+(id)errorWithException:(id)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(id)localizedDescription;
-(id)recoveryAttempter;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setShortDescription:(id)arg1 ;
-(void)setMoreInfo:(id)arg1 ;
-(id)mf_shortDescription;
-(id)mf_moreInfo;
-(void)useGenericDescription:(id)arg1 ;
@end

