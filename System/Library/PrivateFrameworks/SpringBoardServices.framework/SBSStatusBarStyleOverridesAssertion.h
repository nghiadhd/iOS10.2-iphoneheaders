/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSStatusBarStyleOverridesAssertionData, NSString;

@interface SBSStatusBarStyleOverridesAssertion : NSObject {

	SBSStatusBarStyleOverridesAssertionData* _assertionData;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) SBSStatusBarStyleOverridesAssertionData * assertionData;              //@synthesize assertionData=_assertionData - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int statusBarStyleOverrides; 
@property (nonatomic,readonly) int pid; 
@property (getter=isExclusive,nonatomic,readonly) BOOL exclusive; 
@property (nonatomic,readonly) BOOL showsWhenForeground; 
@property (nonatomic,copy) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
+(id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
+(id)backgroundLocationAssertionForPID:(int)arg1 ;
-(id)initWithStatusBarStyleOverridesAssertionData:(id)arg1 ;
-(int)statusBarStyleOverrides;
-(BOOL)showsWhenForeground;
-(void)acquireWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(SBSStatusBarStyleOverridesAssertionData *)assertionData;
-(void)setAssertionData:(SBSStatusBarStyleOverridesAssertionData *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isExclusive;
-(NSString *)uniqueIdentifier;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
-(void)acquireWithHandler:(/*^block*/id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(int)pid;
@end

