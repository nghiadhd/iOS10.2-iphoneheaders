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

@interface NTPBPullToRefresh : PBCodable <NSCopying> {

	NSString* _viewId;
	int _viewType;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasViewType; 
@property (assign,nonatomic) int viewType;                   //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) BOOL hasViewId; 
@property (nonatomic,retain) NSString * viewId;              //@synthesize viewId=_viewId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)viewType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setViewId:(NSString *)arg1 ;
-(void)setHasViewType:(BOOL)arg1 ;
-(BOOL)hasViewType;
-(id)viewTypeAsString:(int)arg1 ;
-(int)StringAsViewType:(id)arg1 ;
-(BOOL)hasViewId;
-(NSString *)viewId;
-(void)setViewType:(int)arg1 ;
@end

