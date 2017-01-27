/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSSet, AKDevice;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage {

	ACAccount* _account;
	NSSet* _targetedAccountServices;
	AKDevice* _companionDevice;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSSet * targetedAccountServices;              //@synthesize targetedAccountServices=_targetedAccountServices - In the implementation block
@property (nonatomic,retain) AKDevice * companionDevice;                   //@synthesize companionDevice=_companionDevice - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setTargetedAccountServices:(NSSet *)arg1 ;
-(NSSet *)targetedAccountServices;
@end

