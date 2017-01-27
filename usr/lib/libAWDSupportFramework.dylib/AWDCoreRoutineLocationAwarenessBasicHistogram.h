/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {

	SCD_Struct_AW12* _counts;

}

@property (nonatomic,readonly) unsigned long long countsCount; 
@property (nonatomic,readonly) int* counts; 
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
-(unsigned long long)countsCount;
-(void)clearCounts;
-(int)countAtIndex:(unsigned long long)arg1 ;
-(void)addCount:(int)arg1 ;
-(int*)counts;
-(void)setCounts:(int*)arg1 count:(unsigned long long)arg2 ;
@end

