/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSUUID, NSString, NSData;

@interface CUPairedPeer : NSObject <NSSecureCoding> {

	NSDictionary* _entitlements;
	NSUUID* _identifier;
	NSString* _label;
	NSString* _model;
	NSData* _publicKey;

}

@property (nonatomic,copy) NSDictionary * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSData * publicKey;                       //@synthesize publicKey=_publicKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSDictionary *)entitlements;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setEntitlements:(NSDictionary *)arg1 ;
@end

