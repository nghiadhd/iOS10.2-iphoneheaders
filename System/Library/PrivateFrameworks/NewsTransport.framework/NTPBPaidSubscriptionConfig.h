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

@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying> {

	long long _maxGroupSizeIPad;
	long long _maxGroupSizeIPhone;
	long long _maxTimesHeadlineInGroup;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasMaxGroupSizeIPad; 
@property (assign,nonatomic) long long maxGroupSizeIPad;                     //@synthesize maxGroupSizeIPad=_maxGroupSizeIPad - In the implementation block
@property (assign,nonatomic) BOOL hasMaxGroupSizeIPhone; 
@property (assign,nonatomic) long long maxGroupSizeIPhone;                   //@synthesize maxGroupSizeIPhone=_maxGroupSizeIPhone - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTimesHeadlineInGroup; 
@property (assign,nonatomic) long long maxTimesHeadlineInGroup;              //@synthesize maxTimesHeadlineInGroup=_maxTimesHeadlineInGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)maxGroupSizeIPad;
-(void)setMaxGroupSizeIPad:(long long)arg1 ;
-(void)setHasMaxGroupSizeIPad:(BOOL)arg1 ;
-(BOOL)hasMaxGroupSizeIPad;
-(long long)maxGroupSizeIPhone;
-(void)setMaxGroupSizeIPhone:(long long)arg1 ;
-(void)setHasMaxGroupSizeIPhone:(BOOL)arg1 ;
-(BOOL)hasMaxGroupSizeIPhone;
-(long long)maxTimesHeadlineInGroup;
-(void)setMaxTimesHeadlineInGroup:(long long)arg1 ;
-(void)setHasMaxTimesHeadlineInGroup:(BOOL)arg1 ;
-(BOOL)hasMaxTimesHeadlineInGroup;
@end

