/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MSPDroppedPin;

@interface MSPPin : PBCodable <NSCopying> {

	MSPDroppedPin* _droppedPin;

}

@property (nonatomic,readonly) BOOL hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;              //@synthesize droppedPin=_droppedPin - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDroppedPin;
-(MSPDroppedPin *)droppedPin;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
@end

