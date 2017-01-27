/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject {

	_MFMailAccountProxySource* _proxySource;
	BOOL _allowsRestrictedAccounts;

}
-(id)init;
-(void)dealloc;
-(id)initWithAllowsRestrictedAccounts:(BOOL)arg1 ;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 ;
-(id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)allAccountProxies;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 ;
@end

