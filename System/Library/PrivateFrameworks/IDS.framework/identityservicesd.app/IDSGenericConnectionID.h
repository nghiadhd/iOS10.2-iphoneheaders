/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSGenericConnectionID : NSObject <NSCopying> {

	NSString* _account;
	NSString* _service;
	NSString* _name;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) NSString * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
+(id)idWithAccount:(id)arg1 service:(id)arg2 name:(id)arg3 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 name:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)account;
-(NSString *)service;
@end

