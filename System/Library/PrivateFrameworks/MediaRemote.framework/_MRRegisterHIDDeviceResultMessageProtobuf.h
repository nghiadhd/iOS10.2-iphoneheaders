/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {

	unsigned _deviceIdentifier;
	unsigned _errorCode;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceIdentifier; 
@property (assign,nonatomic) unsigned deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(BOOL)hasDeviceIdentifier;
-(unsigned)deviceIdentifier;
-(void)setDeviceIdentifier:(unsigned)arg1 ;
-(void)setHasDeviceIdentifier:(BOOL)arg1 ;
@end

