/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class SSURLBagContext, ISURLBag, NSString;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSURLBagContext* _context;
	ISURLBag* _outputBag;

}

@property (readonly) SSURLBagContext * context;                     //@synthesize context=_context - In the implementation block
@property (readonly) ISURLBag * URLBag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1 ;
-(id)init;
-(SSURLBagContext *)context;
-(void)run;
-(void)_setOutputURLBag:(id)arg1 ;
-(void)_addHeadersToRequestProperties:(id)arg1 ;
-(BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)_analyzeBagForActiveSystemApps:(id)arg1 ;
-(void)_postBagDidLoadNotificationWithURLBag:(id)arg1 ;
-(void)_sendPingsForURLBag:(id)arg1 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(id)initWithBagContext:(id)arg1 ;
-(ISURLBag *)URLBag;
-(id)uniqueKey;
@end

