/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPContext;

@interface CDPDRecoveryFlowContext : NSObject {

	BOOL _hasPeersForRemoteApproval;
	BOOL _stringrayDisabled;
	CDPContext* _context;

}

@property (nonatomic,retain) CDPContext * context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasPeersForRemoteApproval;              //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
@property (assign,nonatomic) BOOL stringrayDisabled;                      //@synthesize stringrayDisabled=_stringrayDisabled - In the implementation block
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
-(BOOL)stringrayDisabled;
-(void)setStringrayDisabled:(BOOL)arg1 ;
@end

