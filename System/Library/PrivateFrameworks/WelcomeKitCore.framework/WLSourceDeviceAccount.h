/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLSourceDeviceAccount : NSObject {

	unsigned long long _sqlID;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long sqlID;              //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
+(BOOL)accountInfoArrayContainsNonSyncableAccount:(id)arg1 ;
+(BOOL)accountInfoRepresentsSyncableAccount:(id)arg1 ;
+(id)accountWithInfo:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
@end

