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

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying> {

	_MRVoiceInputDeviceDescriptorProtobuf* _descriptor;

}

@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) _MRVoiceInputDeviceDescriptorProtobuf * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDescriptor:(_MRVoiceInputDeviceDescriptorProtobuf *)arg1 ;
-(_MRVoiceInputDeviceDescriptorProtobuf *)descriptor;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDescriptor;
@end

