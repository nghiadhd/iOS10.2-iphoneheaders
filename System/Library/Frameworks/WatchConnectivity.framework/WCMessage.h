/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface WCMessage : NSObject <NSSecureCoding> {

	BOOL _dictionaryMessage;
	NSString* _pairingID;
	NSString* _identifier;
	NSData* _data;

}

@property (copy,readonly) NSString * pairingID;                                      //@synthesize pairingID=_pairingID - In the implementation block
@property (copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (getter=isDictionaryMessage,readonly) BOOL dictionaryMessage;              //@synthesize dictionaryMessage=_dictionaryMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSData *)data;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 ;
-(BOOL)isDictionaryMessage;
-(NSString *)pairingID;
@end

