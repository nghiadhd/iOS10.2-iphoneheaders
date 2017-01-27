/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {

	unsigned long long _lastChangeNumber;
	NSString* _instanceIdentifier;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                    //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLastChangeNumber; 
@property (assign,nonatomic) unsigned long long lastChangeNumber;              //@synthesize lastChangeNumber=_lastChangeNumber - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(unsigned long long)lastChangeNumber;
-(void)setLastChangeNumber:(unsigned long long)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(void)setHasLastChangeNumber:(BOOL)arg1 ;
-(BOOL)hasLastChangeNumber;
@end

