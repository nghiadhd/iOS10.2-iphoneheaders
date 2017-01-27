/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	id _contentIdentifier;
	long long _options;

}

@property (readonly) NSNumber * accountID;                          //@synthesize accountID=_accountID - In the implementation block
@property (copy) id contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (assign) long long keybagOptions;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentIdentifier;
-(void)setContentIdentifier:(id)arg1 ;
-(long long)keybagOptions;
-(void)setKeybagOptions:(long long)arg1 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)accountIdentifier;
-(NSNumber *)accountID;
@end

