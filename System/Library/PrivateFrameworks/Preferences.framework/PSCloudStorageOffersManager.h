/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CommerceRemoteUIDelegateDelegate.h>

@protocol PSCloudStorageOffersManagerDelegate;
@class CommerceRemoteUIDelegate, NSString;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {

	CommerceRemoteUIDelegate* _commerceDelegate;
	id<PSCloudStorageOffersManagerDelegate> _delegate;
	unsigned long long _requiredStorageThreshold;

}

@property (assign,nonatomic,__weak) id<PSCloudStorageOffersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long requiredStorageThreshold;                          //@synthesize requiredStorageThreshold=_requiredStorageThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PSCloudStorageOffersManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<PSCloudStorageOffersManagerDelegate>)delegate;
-(unsigned long long)requiredStorageThreshold;
-(void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3 ;
-(void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)commerceDelegateDidCancel:(id)arg1 ;
-(void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(BOOL)arg5 ;
-(void)setRequiredStorageThreshold:(unsigned long long)arg1 ;
-(void)beginFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2 ;
-(void)cancelLoad;
@end

