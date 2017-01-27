/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationResponse : PBCodable <NSCopying> {

	NSString* _passID;
	NSString* _preferredApplicationAID;

}

@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                               //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredApplicationAID; 
@property (nonatomic,retain) NSString * preferredApplicationAID;              //@synthesize preferredApplicationAID=_preferredApplicationAID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)passID;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)hasPassID;
-(void)setPreferredApplicationAID:(NSString *)arg1 ;
-(BOOL)hasPreferredApplicationAID;
-(NSString *)preferredApplicationAID;
@end

