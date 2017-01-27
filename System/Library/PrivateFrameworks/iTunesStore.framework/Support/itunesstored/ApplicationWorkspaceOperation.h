/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ApplicationHandle;

@interface ApplicationWorkspaceOperation : NSObject {

	ApplicationHandle* _applicationHandle;

}

@property (nonatomic,readonly) ApplicationHandle * applicationHandle;              //@synthesize applicationHandle=_applicationHandle - In the implementation block
@property (nonatomic,readonly) BOOL blocksAppInstallation; 
-(id)initWithApplicationHandle:(id)arg1 ;
-(BOOL)blocksAppInstallation;
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(ApplicationHandle *)applicationHandle;
-(void)dealloc;
-(BOOL)applicationIsInstalled:(id)arg1 ;
@end

