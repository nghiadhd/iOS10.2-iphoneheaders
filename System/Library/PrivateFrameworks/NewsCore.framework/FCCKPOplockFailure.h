/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecord;

@interface FCCKPOplockFailure : PBCodable <NSCopying> {

	FCCKPRecord* _recordForOplockFailure;

}

@property (nonatomic,readonly) BOOL hasRecordForOplockFailure; 
@property (nonatomic,retain) FCCKPRecord * recordForOplockFailure;              //@synthesize recordForOplockFailure=_recordForOplockFailure - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRecordForOplockFailure:(FCCKPRecord *)arg1 ;
-(BOOL)hasRecordForOplockFailure;
-(FCCKPRecord *)recordForOplockFailure;
@end

